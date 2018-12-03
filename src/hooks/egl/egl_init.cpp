// Copyright (c) 2018, Adrian Negreanu
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice, this
//    list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
// ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
// ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include <dlfcn.h>
#include <errno.h>
#include <stdio.h>

#include "hooks/hook_block_ffs.h"

#include "context.h"

enum
{
#define XMACRO(retType, funcName, ...) funcName##_INDEX,
#define XMACRO_VOID XMACRO
#include "gen/EGL/egl-xmacro.h"
#undef XMACRO_VOID
#undef XMACRO
    EGL_FN_INDEX_MAX
};

////////////////////////////////
// TODO get rid of the extern`s
extern void loadOrigs();
////////////////////////////////
namespace Egl
{
struct EglShimContext : HookContext
{
    XYZContext xyz;
};
struct ZZContext : ApiContext<HookContext*, EGL_FN_INDEX_MAX>
{
};
static ZZContext* g_libCtx;
}; // namespace Egl

using namespace Egl;
#include "gen/EGL/egl.h"
#include "hook_pfn.h"

extern "C" {
#include "gen/EGL/egl-shim.h"
};


void* getPfn(const char* sym)
{
    PFNeglGetProcAddressPROC gpa = (PFNeglGetProcAddressPROC)hook_get_orig(
        Egl::g_libCtx, eglGetProcAddress_INDEX);
    return (void*)gpa(sym);
}


XYZContext getVersion()
{
    EglShimContext* c
        = g_libCtx->h->GetArg<EglShimContext*>(SPU_TYPE_SHIM);
    return c->xyz;
}


static EGLContext eglCreateContext_SHIM(Egl::ZZContext* libCtx,
                                        EGLDisplay display,
                                        EGLConfig config,
                                        EGLContext share_context,
                                        EGLint const* attrib_list)
{
    fprintf(stderr, "begin\n");
    auto current_api = hook_invoke_orig(libCtx, eglQueryAPI);

    auto rv
        = hook_invoke_succ(libCtx, SPU_TYPE_SHIM, eglCreateContext,
                           display, config, share_context, attrib_list);

    for (int i = 0;
         current_api == EGL_OPENGL_ES_API && attrib_list[i] != EGL_NONE;
         i += 2)
    {
        if (attrib_list[i] == EGL_CONTEXT_CLIENT_VERSION)
        {
            fprintf(stderr, "Current API: %x\n", current_api);
            fprintf(stderr, "ES Version:%x\n", attrib_list[i + 1]);
            EglShimContext* c
                = libCtx->h->GetArg<EglShimContext*>(SPU_TYPE_SHIM);

            c->xyz.version = attrib_list[i + 1];
            c->xyz.type = current_api;
            break;
        }
    }
    loadOrigs();
    fprintf(stderr, "%s counters setup Done\n", __func__);
    return rv;
}


static EGLBoolean eglSwapBuffers_SHIM(ZZContext* libCtx, EGLDisplay dpy,
                                      EGLSurface surface)
{
    auto rv = hook_invoke_succ(libCtx, SPU_TYPE_SHIM, eglSwapBuffers, dpy,
                               surface);
    fprintf(stderr, "%s counters report Done\n", __func__);
    return rv;
}



static EGLDisplay eglGetDisplay_SHIM(ZZContext* libCtx,
                                     EGLNativeDisplayType display_id)
{
    auto rv = hook_invoke_succ(libCtx, SPU_TYPE_SHIM, eglGetDisplay,
                               display_id);

    static int _initialized = 0;
    if (!_initialized)
    {
        _initialized = 1;
    }
    return rv;
}

__attribute__((constructor))
static void
egl_init(void)
{
    fprintf(stderr, "Constructor EGL %d\n", EGL_FN_INDEX_MAX);
    if (!Egl::g_libCtx)
        Egl::g_libCtx = new Egl::ZZContext;

    Egl::g_libCtx->h->spuState.SetArg(SPU_TYPE_SHIM, new EglShimContext);

    void* dlh = dlopen("libEGL.so.1", RTLD_NOW);
    if (dlh == NULL)
    {
        fprintf(stderr, "failed to open libEGL.so\n");
        return;
    }

    hook_install(Egl::g_libCtx, SPU_TYPE_SHIM, HOOK_ATTR_A,
                 eglCreateContext_INDEX, eglCreateContext_SHIM);

    hook_install(Egl::g_libCtx, SPU_TYPE_SHIM, HOOK_ATTR_A,
                 eglSwapBuffers_INDEX, eglSwapBuffers_SHIM);

    hook_install(Egl::g_libCtx, SPU_TYPE_SHIM, HOOK_ATTR_A,
                 eglGetDisplay_INDEX, eglGetDisplay_SHIM);

    for (int i = 0; egl_functions[i]; ++i)
    {
        fprintf(stderr, "%d %s ", i, egl_functions[i]);
        void* sym = dlsym(dlh, egl_functions[i]);
        if (sym == NULL)
        {
            fprintf(stderr, "(null)\n");
            continue;
        }
        fprintf(stderr, "%p\n", sym);
        hook_set_orig(Egl::g_libCtx, i, sym);
    }
    fprintf(stderr, "%s Done\n", __func__);
}
