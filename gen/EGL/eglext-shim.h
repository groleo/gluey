/* API: egl
 * Versions considered: .*
 * Versions emitted: _nomatch_^
 * Default extensions included: egl
 * Additional extensions included: _nomatch_^
 * Extensions removed: _nomatch_^
 */

GLUEY_APICALL  EGLSyncKHR GLUEY_APIENTRY  eglCreateSync64KHR (EGLDisplay dpy,EGLenum type,const EGLAttribKHR *attrib_list)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglCreateSync64KHR
                    ,dpy,type,attrib_list
                    );
    return retVal;
}


GLUEY_APICALL  EGLint GLUEY_APIENTRY  eglDebugMessageControlKHR (EGLDEBUGPROCKHR callback,const EGLAttrib *attrib_list)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglDebugMessageControlKHR
                    ,callback,attrib_list
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglQueryDebugKHR (EGLint attribute,EGLAttrib *value)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglQueryDebugKHR
                    ,attribute,value
                    );
    return retVal;
}


GLUEY_APICALL  EGLint GLUEY_APIENTRY  eglLabelObjectKHR (EGLDisplay display,EGLenum objectType,EGLObjectKHR object,EGLLabelKHR label)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglLabelObjectKHR
                    ,display,objectType,object,label
                    );
    return retVal;
}


GLUEY_APICALL  EGLSyncKHR GLUEY_APIENTRY  eglCreateSyncKHR (EGLDisplay dpy,EGLenum type,const EGLint *attrib_list)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglCreateSyncKHR
                    ,dpy,type,attrib_list
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglDestroySyncKHR (EGLDisplay dpy,EGLSyncKHR sync)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglDestroySyncKHR
                    ,dpy,sync
                    );
    return retVal;
}


GLUEY_APICALL  EGLint GLUEY_APIENTRY  eglClientWaitSyncKHR (EGLDisplay dpy,EGLSyncKHR sync,EGLint flags,EGLTimeKHR timeout)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglClientWaitSyncKHR
                    ,dpy,sync,flags,timeout
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglGetSyncAttribKHR (EGLDisplay dpy,EGLSyncKHR sync,EGLint attribute,EGLint *value)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglGetSyncAttribKHR
                    ,dpy,sync,attribute,value
                    );
    return retVal;
}


GLUEY_APICALL  EGLImageKHR GLUEY_APIENTRY  eglCreateImageKHR (EGLDisplay dpy,EGLContext ctx,EGLenum target,EGLClientBuffer buffer,const EGLint *attrib_list)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglCreateImageKHR
                    ,dpy,ctx,target,buffer,attrib_list
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglDestroyImageKHR (EGLDisplay dpy,EGLImageKHR image)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglDestroyImageKHR
                    ,dpy,image
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglLockSurfaceKHR (EGLDisplay dpy,EGLSurface surface,const EGLint *attrib_list)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglLockSurfaceKHR
                    ,dpy,surface,attrib_list
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglUnlockSurfaceKHR (EGLDisplay dpy,EGLSurface surface)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglUnlockSurfaceKHR
                    ,dpy,surface
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglQuerySurface64KHR (EGLDisplay dpy,EGLSurface surface,EGLint attribute,EGLAttribKHR *value)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglQuerySurface64KHR
                    ,dpy,surface,attribute,value
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglSetDamageRegionKHR (EGLDisplay dpy,EGLSurface surface,EGLint *rects,EGLint n_rects)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglSetDamageRegionKHR
                    ,dpy,surface,rects,n_rects
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglSignalSyncKHR (EGLDisplay dpy,EGLSyncKHR sync,EGLenum mode)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglSignalSyncKHR
                    ,dpy,sync,mode
                    );
    return retVal;
}


GLUEY_APICALL  EGLStreamKHR GLUEY_APIENTRY  eglCreateStreamKHR (EGLDisplay dpy,const EGLint *attrib_list)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglCreateStreamKHR
                    ,dpy,attrib_list
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglDestroyStreamKHR (EGLDisplay dpy,EGLStreamKHR stream)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglDestroyStreamKHR
                    ,dpy,stream
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglStreamAttribKHR (EGLDisplay dpy,EGLStreamKHR stream,EGLenum attribute,EGLint value)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglStreamAttribKHR
                    ,dpy,stream,attribute,value
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglQueryStreamKHR (EGLDisplay dpy,EGLStreamKHR stream,EGLenum attribute,EGLint *value)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglQueryStreamKHR
                    ,dpy,stream,attribute,value
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglQueryStreamu64KHR (EGLDisplay dpy,EGLStreamKHR stream,EGLenum attribute,EGLuint64KHR *value)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglQueryStreamu64KHR
                    ,dpy,stream,attribute,value
                    );
    return retVal;
}


GLUEY_APICALL  EGLStreamKHR GLUEY_APIENTRY  eglCreateStreamAttribKHR (EGLDisplay dpy,const EGLAttrib *attrib_list)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglCreateStreamAttribKHR
                    ,dpy,attrib_list
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglSetStreamAttribKHR (EGLDisplay dpy,EGLStreamKHR stream,EGLenum attribute,EGLAttrib value)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglSetStreamAttribKHR
                    ,dpy,stream,attribute,value
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglQueryStreamAttribKHR (EGLDisplay dpy,EGLStreamKHR stream,EGLenum attribute,EGLAttrib *value)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglQueryStreamAttribKHR
                    ,dpy,stream,attribute,value
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglStreamConsumerAcquireAttribKHR (EGLDisplay dpy,EGLStreamKHR stream,const EGLAttrib *attrib_list)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglStreamConsumerAcquireAttribKHR
                    ,dpy,stream,attrib_list
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglStreamConsumerReleaseAttribKHR (EGLDisplay dpy,EGLStreamKHR stream,const EGLAttrib *attrib_list)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglStreamConsumerReleaseAttribKHR
                    ,dpy,stream,attrib_list
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglStreamConsumerGLTextureExternalKHR (EGLDisplay dpy,EGLStreamKHR stream)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglStreamConsumerGLTextureExternalKHR
                    ,dpy,stream
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglStreamConsumerAcquireKHR (EGLDisplay dpy,EGLStreamKHR stream)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglStreamConsumerAcquireKHR
                    ,dpy,stream
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglStreamConsumerReleaseKHR (EGLDisplay dpy,EGLStreamKHR stream)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglStreamConsumerReleaseKHR
                    ,dpy,stream
                    );
    return retVal;
}


GLUEY_APICALL  EGLNativeFileDescriptorKHR GLUEY_APIENTRY  eglGetStreamFileDescriptorKHR (EGLDisplay dpy,EGLStreamKHR stream)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglGetStreamFileDescriptorKHR
                    ,dpy,stream
                    );
    return retVal;
}


GLUEY_APICALL  EGLStreamKHR GLUEY_APIENTRY  eglCreateStreamFromFileDescriptorKHR (EGLDisplay dpy,EGLNativeFileDescriptorKHR file_descriptor)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglCreateStreamFromFileDescriptorKHR
                    ,dpy,file_descriptor
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglQueryStreamTimeKHR (EGLDisplay dpy,EGLStreamKHR stream,EGLenum attribute,EGLTimeKHR *value)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglQueryStreamTimeKHR
                    ,dpy,stream,attribute,value
                    );
    return retVal;
}


GLUEY_APICALL  EGLSurface GLUEY_APIENTRY  eglCreateStreamProducerSurfaceKHR (EGLDisplay dpy,EGLConfig config,EGLStreamKHR stream,const EGLint *attrib_list)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglCreateStreamProducerSurfaceKHR
                    ,dpy,config,stream,attrib_list
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglSwapBuffersWithDamageKHR (EGLDisplay dpy,EGLSurface surface,EGLint *rects,EGLint n_rects)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglSwapBuffersWithDamageKHR
                    ,dpy,surface,rects,n_rects
                    );
    return retVal;
}


GLUEY_APICALL  EGLint GLUEY_APIENTRY  eglWaitSyncKHR (EGLDisplay dpy,EGLSyncKHR sync,EGLint flags)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglWaitSyncKHR
                    ,dpy,sync,flags
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  eglSetBlobCacheFuncsANDROID (EGLDisplay dpy,EGLSetBlobFuncANDROID set,EGLGetBlobFuncANDROID get)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglSetBlobCacheFuncsANDROID
                    ,dpy,set,get
                    );
}


GLUEY_APICALL  EGLClientBuffer GLUEY_APIENTRY  eglCreateNativeClientBufferANDROID (const EGLint *attrib_list)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglCreateNativeClientBufferANDROID
                    ,attrib_list
                    );
    return retVal;
}


GLUEY_APICALL  EGLint GLUEY_APIENTRY  eglDupNativeFenceFDANDROID (EGLDisplay dpy,EGLSyncKHR sync)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglDupNativeFenceFDANDROID
                    ,dpy,sync
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglPresentationTimeANDROID (EGLDisplay dpy,EGLSurface surface,EGLnsecsANDROID time)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglPresentationTimeANDROID
                    ,dpy,surface,time
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglQuerySurfacePointerANGLE (EGLDisplay dpy,EGLSurface surface,EGLint attribute,void **value)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglQuerySurfacePointerANGLE
                    ,dpy,surface,attribute,value
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglCompositorSetContextListEXT (const EGLint *external_ref_ids,EGLint num_entries)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglCompositorSetContextListEXT
                    ,external_ref_ids,num_entries
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglCompositorSetContextAttributesEXT (EGLint external_ref_id,const EGLint *context_attributes,EGLint num_entries)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglCompositorSetContextAttributesEXT
                    ,external_ref_id,context_attributes,num_entries
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglCompositorSetWindowListEXT (EGLint external_ref_id,const EGLint *external_win_ids,EGLint num_entries)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglCompositorSetWindowListEXT
                    ,external_ref_id,external_win_ids,num_entries
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglCompositorSetWindowAttributesEXT (EGLint external_win_id,const EGLint *window_attributes,EGLint num_entries)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglCompositorSetWindowAttributesEXT
                    ,external_win_id,window_attributes,num_entries
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglCompositorBindTexWindowEXT (EGLint external_win_id)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglCompositorBindTexWindowEXT
                    ,external_win_id
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglCompositorSetSizeEXT (EGLint external_win_id,EGLint width,EGLint height)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglCompositorSetSizeEXT
                    ,external_win_id,width,height
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglCompositorSwapPolicyEXT (EGLint external_win_id,EGLint policy)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglCompositorSwapPolicyEXT
                    ,external_win_id,policy
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglQueryDeviceAttribEXT (EGLDeviceEXT device,EGLint attribute,EGLAttrib *value)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglQueryDeviceAttribEXT
                    ,device,attribute,value
                    );
    return retVal;
}


GLUEY_APICALL  const char * GLUEY_APIENTRY  eglQueryDeviceStringEXT (EGLDeviceEXT device,EGLint name)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglQueryDeviceStringEXT
                    ,device,name
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglQueryDevicesEXT (EGLint max_devices,EGLDeviceEXT *devices,EGLint *num_devices)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglQueryDevicesEXT
                    ,max_devices,devices,num_devices
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglQueryDisplayAttribEXT (EGLDisplay dpy,EGLint attribute,EGLAttrib *value)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglQueryDisplayAttribEXT
                    ,dpy,attribute,value
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglQueryDmaBufFormatsEXT (EGLDisplay dpy,EGLint max_formats,EGLint *formats,EGLint *num_formats)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglQueryDmaBufFormatsEXT
                    ,dpy,max_formats,*formats,*num_formats
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglQueryDmaBufModifiersEXT (EGLDisplay dpy,EGLint format,EGLint max_modifiers,EGLuint64KHR *modifiers,EGLBoolean *external_only,EGLint *num_modifiers)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglQueryDmaBufModifiersEXT
                    ,dpy,format,max_modifiers,*modifiers,*external_only,*num_modifiers
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglGetOutputLayersEXT (EGLDisplay dpy,const EGLAttrib *attrib_list,EGLOutputLayerEXT *layers,EGLint max_layers,EGLint *num_layers)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglGetOutputLayersEXT
                    ,dpy,attrib_list,layers,max_layers,num_layers
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglGetOutputPortsEXT (EGLDisplay dpy,const EGLAttrib *attrib_list,EGLOutputPortEXT *ports,EGLint max_ports,EGLint *num_ports)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglGetOutputPortsEXT
                    ,dpy,attrib_list,ports,max_ports,num_ports
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglOutputLayerAttribEXT (EGLDisplay dpy,EGLOutputLayerEXT layer,EGLint attribute,EGLAttrib value)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglOutputLayerAttribEXT
                    ,dpy,layer,attribute,value
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglQueryOutputLayerAttribEXT (EGLDisplay dpy,EGLOutputLayerEXT layer,EGLint attribute,EGLAttrib *value)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglQueryOutputLayerAttribEXT
                    ,dpy,layer,attribute,value
                    );
    return retVal;
}


GLUEY_APICALL  const char * GLUEY_APIENTRY  eglQueryOutputLayerStringEXT (EGLDisplay dpy,EGLOutputLayerEXT layer,EGLint name)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglQueryOutputLayerStringEXT
                    ,dpy,layer,name
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglOutputPortAttribEXT (EGLDisplay dpy,EGLOutputPortEXT port,EGLint attribute,EGLAttrib value)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglOutputPortAttribEXT
                    ,dpy,port,attribute,value
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglQueryOutputPortAttribEXT (EGLDisplay dpy,EGLOutputPortEXT port,EGLint attribute,EGLAttrib *value)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglQueryOutputPortAttribEXT
                    ,dpy,port,attribute,value
                    );
    return retVal;
}


GLUEY_APICALL  const char * GLUEY_APIENTRY  eglQueryOutputPortStringEXT (EGLDisplay dpy,EGLOutputPortEXT port,EGLint name)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglQueryOutputPortStringEXT
                    ,dpy,port,name
                    );
    return retVal;
}


GLUEY_APICALL  EGLDisplay GLUEY_APIENTRY  eglGetPlatformDisplayEXT (EGLenum platform,void *native_display,const EGLint *attrib_list)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglGetPlatformDisplayEXT
                    ,platform,native_display,attrib_list
                    );
    return retVal;
}


GLUEY_APICALL  EGLSurface GLUEY_APIENTRY  eglCreatePlatformWindowSurfaceEXT (EGLDisplay dpy,EGLConfig config,void *native_window,const EGLint *attrib_list)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglCreatePlatformWindowSurfaceEXT
                    ,dpy,config,native_window,attrib_list
                    );
    return retVal;
}


GLUEY_APICALL  EGLSurface GLUEY_APIENTRY  eglCreatePlatformPixmapSurfaceEXT (EGLDisplay dpy,EGLConfig config,void *native_pixmap,const EGLint *attrib_list)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglCreatePlatformPixmapSurfaceEXT
                    ,dpy,config,native_pixmap,attrib_list
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglStreamConsumerOutputEXT (EGLDisplay dpy,EGLStreamKHR stream,EGLOutputLayerEXT layer)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglStreamConsumerOutputEXT
                    ,dpy,stream,layer
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglSwapBuffersWithDamageEXT (EGLDisplay dpy,EGLSurface surface,EGLint *rects,EGLint n_rects)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglSwapBuffersWithDamageEXT
                    ,dpy,surface,rects,n_rects
                    );
    return retVal;
}


GLUEY_APICALL  EGLSurface GLUEY_APIENTRY  eglCreatePixmapSurfaceHI (EGLDisplay dpy,EGLConfig config,struct EGLClientPixmapHI *pixmap)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglCreatePixmapSurfaceHI
                    ,dpy,config,pixmap
                    );
    return retVal;
}


GLUEY_APICALL  EGLImageKHR GLUEY_APIENTRY  eglCreateDRMImageMESA (EGLDisplay dpy,const EGLint *attrib_list)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglCreateDRMImageMESA
                    ,dpy,attrib_list
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglExportDRMImageMESA (EGLDisplay dpy,EGLImageKHR image,EGLint *name,EGLint *handle,EGLint *stride)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglExportDRMImageMESA
                    ,dpy,image,name,handle,stride
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglExportDMABUFImageQueryMESA (EGLDisplay dpy,EGLImageKHR image,int *fourcc,int *num_planes,EGLuint64KHR *modifiers)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglExportDMABUFImageQueryMESA
                    ,dpy,image,fourcc,num_planes,modifiers
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglExportDMABUFImageMESA (EGLDisplay dpy,EGLImageKHR image,int *fds,EGLint *strides,EGLint *offsets)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglExportDMABUFImageMESA
                    ,dpy,image,fds,strides,offsets
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglSwapBuffersRegionNOK (EGLDisplay dpy,EGLSurface surface,EGLint numRects,const EGLint *rects)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglSwapBuffersRegionNOK
                    ,dpy,surface,numRects,rects
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglSwapBuffersRegion2NOK (EGLDisplay dpy,EGLSurface surface,EGLint numRects,const EGLint *rects)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglSwapBuffersRegion2NOK
                    ,dpy,surface,numRects,rects
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglQueryNativeDisplayNV (EGLDisplay dpy,EGLNativeDisplayType *display_id)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglQueryNativeDisplayNV
                    ,dpy,display_id
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglQueryNativeWindowNV (EGLDisplay dpy,EGLSurface surf,EGLNativeWindowType *window)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglQueryNativeWindowNV
                    ,dpy,surf,window
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglQueryNativePixmapNV (EGLDisplay dpy,EGLSurface surf,EGLNativePixmapType *pixmap)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglQueryNativePixmapNV
                    ,dpy,surf,pixmap
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglPostSubBufferNV (EGLDisplay dpy,EGLSurface surface,EGLint x,EGLint y,EGLint width,EGLint height)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglPostSubBufferNV
                    ,dpy,surface,x,y,width,height
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglStreamConsumerGLTextureExternalAttribsNV (EGLDisplay dpy,EGLStreamKHR stream,EGLAttrib *attrib_list)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglStreamConsumerGLTextureExternalAttribsNV
                    ,dpy,stream,*attrib_list
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglQueryDisplayAttribNV (EGLDisplay dpy,EGLint attribute,EGLAttrib *value)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglQueryDisplayAttribNV
                    ,dpy,attribute,value
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglSetStreamMetadataNV (EGLDisplay dpy,EGLStreamKHR stream,EGLint n,EGLint offset,EGLint size,const void *data)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglSetStreamMetadataNV
                    ,dpy,stream,n,offset,size,data
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglQueryStreamMetadataNV (EGLDisplay dpy,EGLStreamKHR stream,EGLenum name,EGLint n,EGLint offset,EGLint size,void *data)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglQueryStreamMetadataNV
                    ,dpy,stream,name,n,offset,size,data
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglResetStreamNV (EGLDisplay dpy,EGLStreamKHR stream)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglResetStreamNV
                    ,dpy,stream
                    );
    return retVal;
}


GLUEY_APICALL  EGLSyncKHR GLUEY_APIENTRY  eglCreateStreamSyncNV (EGLDisplay dpy,EGLStreamKHR stream,EGLenum type,const EGLint *attrib_list)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglCreateStreamSyncNV
                    ,dpy,stream,type,attrib_list
                    );
    return retVal;
}


GLUEY_APICALL  EGLSyncNV GLUEY_APIENTRY  eglCreateFenceSyncNV (EGLDisplay dpy,EGLenum condition,const EGLint *attrib_list)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglCreateFenceSyncNV
                    ,dpy,condition,attrib_list
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglDestroySyncNV (EGLSyncNV sync)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglDestroySyncNV
                    ,sync
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglFenceNV (EGLSyncNV sync)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglFenceNV
                    ,sync
                    );
    return retVal;
}


GLUEY_APICALL  EGLint GLUEY_APIENTRY  eglClientWaitSyncNV (EGLSyncNV sync,EGLint flags,EGLTimeNV timeout)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglClientWaitSyncNV
                    ,sync,flags,timeout
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglSignalSyncNV (EGLSyncNV sync,EGLenum mode)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglSignalSyncNV
                    ,sync,mode
                    );
    return retVal;
}


GLUEY_APICALL  EGLBoolean GLUEY_APIENTRY  eglGetSyncAttribNV (EGLSyncNV sync,EGLint attribute,EGLint *value)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglGetSyncAttribNV
                    ,sync,attribute,value
                    );
    return retVal;
}


GLUEY_APICALL  EGLuint64NV GLUEY_APIENTRY  eglGetSystemTimeFrequencyNV ()
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglGetSystemTimeFrequencyNV
                    );
    return retVal;
}


GLUEY_APICALL  EGLuint64NV GLUEY_APIENTRY  eglGetSystemTimeNV ()
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,eglGetSystemTimeNV
                    );
    return retVal;
}

