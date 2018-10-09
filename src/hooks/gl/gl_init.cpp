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

#include <errno.h>
#include <stdio.h>
#include <dlfcn.h>

#include "hooks/hook_block_ffs.h"

#include "context.h"

enum
{
#define XMACRO(retType, funcName, ...) funcName##_INDEX,
#define XMACRO_VOID XMACRO
	#include "gen/GLES2/gl2-xmacro.h"
	#include "gen/GLES2/gl2ext-xmacro.h"
#undef XMACRO_VOID
#undef XMACRO
	GL_FN_INDEX_MAX
};


namespace Gl {
	struct HookContext { };
	struct ZZContext : ApiContext<HookContext*,GL_FN_INDEX_MAX>{};
	static ZZContext* g_libCtx;
};

using namespace Gl;
#include "gen/GLES2/gl2.h"
#include "gen/GLES2/gl2ext.h"
#include "hook_pfn.h"

extern "C" {
	#include "gen/GLES2/gl2-shim.h"
	#include "gen/GLES2/gl2ext-shim.h"
};


////////////////////////////////
// TODO use this for GL extensions
// TODO get rid of the extern`s
extern void* getPfn(const char*);
extern XYZContext getVersion();

////////////////////////////////
static void glDrawArrays_SHIM (Gl::ZZContext* libCtx, GLenum mode,GLint first,GLsizei count)
{
	fprintf(stderr, "called\n");

	hook_invoke_succ(libCtx, SPU_TYPE_SHIM,
		glDrawArrays, mode, first, count);
}

static void glDrawElements_SHIM(Gl::ZZContext* libCtx, GLenum mode,GLsizei count,GLenum type,const void *indices)
{
	fprintf(stderr, "called\n");

	hook_invoke_succ(libCtx, SPU_TYPE_SHIM,
		glDrawElements,mode,count,type,indices
		);
}


void loadOrigs()
{
	void* dlh = NULL;
	const char* libGL = NULL;

	auto api = getVersion();
// TODO get rid of the hardcoded value
	if (api.type == 0x30a0)
	{
		if (api.version == 2 || api.version == 3)
			libGL = "libGLESv2.so.2";

		if (api.version == 1)
			libGL = "libGLESv1_CM.so";
	}
	fprintf(stderr, "Opening %s API(type:%x version:%x)\n", libGL, api.type, api.version);
	/*
	if (api.type == EGL_OPENGL_API)
	{
		libGL = "libGL.so";
	}*/

	if (!libGL)
	{
		fprintf(stderr, "Invalid zzum\n");
		return;
	}
	dlh = dlopen(libGL, RTLD_NOW);

	if (dlh == NULL)
	{
		fprintf(stderr, "failed to open %s\n",libGL);
		return;
	}

	hook_install(Gl::g_libCtx, SPU_TYPE_SHIM, HOOK_ATTR_A,
			glDrawArrays_INDEX, glDrawArrays_SHIM);
	hook_install(Gl::g_libCtx, SPU_TYPE_SHIM, HOOK_ATTR_A,
			glDrawElements_INDEX, glDrawElements_SHIM);

	for (int i=0; gl_functions[i]; ++i)
	{
		fprintf(stderr,"%d %s ", i, gl_functions[i]);
		void *sym;
		sym = dlsym(dlh, gl_functions[i]);
		//sym = getPfn( gl_functions[i]);
		if (sym == NULL)
		{
			fprintf(stderr, "(null)\n");
			continue;
		}
		fprintf(stderr, "%p\n", sym);
		hook_set_orig(Gl::g_libCtx, i, sym);
	}

}


__attribute__((constructor))
static void
gl_init (void)
{
	fprintf(stderr, "Constructor GL %d\n", GL_FN_INDEX_MAX);

	if (!Gl::g_libCtx)
		Gl::g_libCtx = new Gl::ZZContext;

	fprintf(stderr, "%s Done\n", __func__);
}
