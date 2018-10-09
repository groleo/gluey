/* API: egl
 * Versions considered: .*
 * Versions emitted: .*
 * Default extensions included: None
 * Additional extensions included: _nomatch_^
 * Extensions removed: _nomatch_^
 */

GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglChooseConfig (EGLDisplay dpy,const EGLint *attrib_list,EGLConfig *configs,EGLint config_size,EGLint *num_config)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglChooseConfig
                    ,dpy,attrib_list,configs,config_size,num_config
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglCopyBuffers (EGLDisplay dpy,EGLSurface surface,EGLNativePixmapType target)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglCopyBuffers
                    ,dpy,surface,target
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLContext GLUEY_APIENTRY  eglCreateContext (EGLDisplay dpy,EGLConfig config,EGLContext share_context,const EGLint *attrib_list)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglCreateContext
                    ,dpy,config,share_context,attrib_list
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLSurface GLUEY_APIENTRY  eglCreatePbufferSurface (EGLDisplay dpy,EGLConfig config,const EGLint *attrib_list)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglCreatePbufferSurface
                    ,dpy,config,attrib_list
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLSurface GLUEY_APIENTRY  eglCreatePixmapSurface (EGLDisplay dpy,EGLConfig config,EGLNativePixmapType pixmap,const EGLint *attrib_list)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglCreatePixmapSurface
                    ,dpy,config,pixmap,attrib_list
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLSurface GLUEY_APIENTRY  eglCreateWindowSurface (EGLDisplay dpy,EGLConfig config,EGLNativeWindowType win,const EGLint *attrib_list)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglCreateWindowSurface
                    ,dpy,config,win,attrib_list
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglDestroyContext (EGLDisplay dpy,EGLContext ctx)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglDestroyContext
                    ,dpy,ctx
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglDestroySurface (EGLDisplay dpy,EGLSurface surface)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglDestroySurface
                    ,dpy,surface
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglGetConfigAttrib (EGLDisplay dpy,EGLConfig config,EGLint attribute,EGLint *value)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglGetConfigAttrib
                    ,dpy,config,attribute,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglGetConfigs (EGLDisplay dpy,EGLConfig *configs,EGLint config_size,EGLint *num_config)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglGetConfigs
                    ,dpy,configs,config_size,num_config
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLDisplay GLUEY_APIENTRY  eglGetCurrentDisplay ()
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglGetCurrentDisplay
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLSurface GLUEY_APIENTRY  eglGetCurrentSurface (EGLint readdraw)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglGetCurrentSurface
                    ,readdraw
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLDisplay GLUEY_APIENTRY  eglGetDisplay (EGLNativeDisplayType display_id)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglGetDisplay
                    ,display_id
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLint GLUEY_APIENTRY  eglGetError ()
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglGetError
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  __eglMustCastToProperFunctionPointerType GLUEY_APIENTRY  eglGetProcAddress (const char *procname)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglGetProcAddress
                    ,procname
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglInitialize (EGLDisplay dpy,EGLint *major,EGLint *minor)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglInitialize
                    ,dpy,major,minor
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglMakeCurrent (EGLDisplay dpy,EGLSurface draw,EGLSurface read,EGLContext ctx)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglMakeCurrent
                    ,dpy,draw,read,ctx
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglQueryContext (EGLDisplay dpy,EGLContext ctx,EGLint attribute,EGLint *value)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglQueryContext
                    ,dpy,ctx,attribute,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  const char * GLUEY_APIENTRY  eglQueryString (EGLDisplay dpy,EGLint name)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglQueryString
                    ,dpy,name
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglQuerySurface (EGLDisplay dpy,EGLSurface surface,EGLint attribute,EGLint *value)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglQuerySurface
                    ,dpy,surface,attribute,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglSwapBuffers (EGLDisplay dpy,EGLSurface surface)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglSwapBuffers
                    ,dpy,surface
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglTerminate (EGLDisplay dpy)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglTerminate
                    ,dpy
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglWaitGL ()
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglWaitGL
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglWaitNative (EGLint engine)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglWaitNative
                    ,engine
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglBindTexImage (EGLDisplay dpy,EGLSurface surface,EGLint buffer)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglBindTexImage
                    ,dpy,surface,buffer
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglReleaseTexImage (EGLDisplay dpy,EGLSurface surface,EGLint buffer)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglReleaseTexImage
                    ,dpy,surface,buffer
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglSurfaceAttrib (EGLDisplay dpy,EGLSurface surface,EGLint attribute,EGLint value)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglSurfaceAttrib
                    ,dpy,surface,attribute,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglSwapInterval (EGLDisplay dpy,EGLint interval)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglSwapInterval
                    ,dpy,interval
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglBindAPI (EGLenum api)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglBindAPI
                    ,api
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLenum GLUEY_APIENTRY  eglQueryAPI ()
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglQueryAPI
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLSurface GLUEY_APIENTRY  eglCreatePbufferFromClientBuffer (EGLDisplay dpy,EGLenum buftype,EGLClientBuffer buffer,EGLConfig config,const EGLint *attrib_list)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglCreatePbufferFromClientBuffer
                    ,dpy,buftype,buffer,config,attrib_list
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglReleaseThread ()
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglReleaseThread
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglWaitClient ()
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglWaitClient
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLContext GLUEY_APIENTRY  eglGetCurrentContext ()
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglGetCurrentContext
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLSync GLUEY_APIENTRY  eglCreateSync (EGLDisplay dpy,EGLenum type,const EGLAttrib *attrib_list)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglCreateSync
                    ,dpy,type,attrib_list
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglDestroySync (EGLDisplay dpy,EGLSync sync)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglDestroySync
                    ,dpy,sync
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLint GLUEY_APIENTRY  eglClientWaitSync (EGLDisplay dpy,EGLSync sync,EGLint flags,EGLTime timeout)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglClientWaitSync
                    ,dpy,sync,flags,timeout
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglGetSyncAttrib (EGLDisplay dpy,EGLSync sync,EGLint attribute,EGLAttrib *value)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglGetSyncAttrib
                    ,dpy,sync,attribute,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLImage GLUEY_APIENTRY  eglCreateImage (EGLDisplay dpy,EGLContext ctx,EGLenum target,EGLClientBuffer buffer,const EGLAttrib *attrib_list)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglCreateImage
                    ,dpy,ctx,target,buffer,attrib_list
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglDestroyImage (EGLDisplay dpy,EGLImage image)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglDestroyImage
                    ,dpy,image
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLDisplay GLUEY_APIENTRY  eglGetPlatformDisplay (EGLenum platform,void *native_display,const EGLAttrib *attrib_list)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglGetPlatformDisplay
                    ,platform,native_display,attrib_list
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLSurface GLUEY_APIENTRY  eglCreatePlatformWindowSurface (EGLDisplay dpy,EGLConfig config,void *native_window,const EGLAttrib *attrib_list)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglCreatePlatformWindowSurface
                    ,dpy,config,native_window,attrib_list
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLSurface GLUEY_APIENTRY  eglCreatePlatformPixmapSurface (EGLDisplay dpy,EGLConfig config,void *native_pixmap,const EGLAttrib *attrib_list)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglCreatePlatformPixmapSurface
                    ,dpy,config,native_pixmap,attrib_list
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglWaitSync (EGLDisplay dpy,EGLSync sync,EGLint flags)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglWaitSync
                    ,dpy,sync,flags
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}

