/* API: gles2
 * Profile: common
 * Versions considered: 2\.[0-9]
 * Versions emitted: _nomatch_^
 * Default extensions included: gles2
 * Additional extensions included: _nomatch_^
 * Extensions removed: _nomatch_^
 */

GLUEY_APICALL  void GLUEY_APIENTRY  glBlendBarrierKHR ()
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBlendBarrierKHR
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDebugMessageControlKHR (GLenum source,GLenum type,GLenum severity,GLsizei count,const GLuint *ids,GLboolean enabled)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDebugMessageControlKHR
                    ,source,type,severity,count,ids,enabled
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDebugMessageInsertKHR (GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *buf)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDebugMessageInsertKHR
                    ,source,type,id,severity,length,buf
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDebugMessageCallbackKHR (GLDEBUGPROCKHR callback,const void *userParam)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDebugMessageCallbackKHR
                    ,callback,userParam
                    );
}


GLUEY_APICALL  GLuint GLUEY_APIENTRY  glGetDebugMessageLogKHR (GLuint count,GLsizei bufSize,GLenum *sources,GLenum *types,GLuint *ids,GLenum *severities,GLsizei *lengths,GLchar *messageLog)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetDebugMessageLogKHR
                    ,count,bufSize,sources,types,ids,severities,lengths,messageLog
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glPushDebugGroupKHR (GLenum source,GLuint id,GLsizei length,const GLchar *message)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPushDebugGroupKHR
                    ,source,id,length,message
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glPopDebugGroupKHR ()
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPopDebugGroupKHR
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glObjectLabelKHR (GLenum identifier,GLuint name,GLsizei length,const GLchar *label)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glObjectLabelKHR
                    ,identifier,name,length,label
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetObjectLabelKHR (GLenum identifier,GLuint name,GLsizei bufSize,GLsizei *length,GLchar *label)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetObjectLabelKHR
                    ,identifier,name,bufSize,length,label
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glObjectPtrLabelKHR (const void *ptr,GLsizei length,const GLchar *label)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glObjectPtrLabelKHR
                    ,ptr,length,label
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetObjectPtrLabelKHR (const void *ptr,GLsizei bufSize,GLsizei *length,GLchar *label)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetObjectPtrLabelKHR
                    ,ptr,bufSize,length,label
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetPointervKHR (GLenum pname,void **params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetPointervKHR
                    ,pname,params
                    );
}


GLUEY_APICALL  GLenum GLUEY_APIENTRY  glGetGraphicsResetStatusKHR ()
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetGraphicsResetStatusKHR
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glReadnPixelsKHR (GLint x,GLint y,GLsizei width,GLsizei height,GLenum format,GLenum type,GLsizei bufSize,void *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glReadnPixelsKHR
                    ,x,y,width,height,format,type,bufSize,data
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetnUniformfvKHR (GLuint program,GLint location,GLsizei bufSize,GLfloat *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetnUniformfvKHR
                    ,program,location,bufSize,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetnUniformivKHR (GLuint program,GLint location,GLsizei bufSize,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetnUniformivKHR
                    ,program,location,bufSize,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetnUniformuivKHR (GLuint program,GLint location,GLsizei bufSize,GLuint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetnUniformuivKHR
                    ,program,location,bufSize,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glEGLImageTargetTexture2DOES (GLenum target,GLeglImageOES image)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glEGLImageTargetTexture2DOES
                    ,target,image
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glEGLImageTargetRenderbufferStorageOES (GLenum target,GLeglImageOES image)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glEGLImageTargetRenderbufferStorageOES
                    ,target,image
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCopyImageSubDataOES (GLuint srcName,GLenum srcTarget,GLint srcLevel,GLint srcX,GLint srcY,GLint srcZ,GLuint dstName,GLenum dstTarget,GLint dstLevel,GLint dstX,GLint dstY,GLint dstZ,GLsizei srcWidth,GLsizei srcHeight,GLsizei srcDepth)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCopyImageSubDataOES
                    ,srcName,srcTarget,srcLevel,srcX,srcY,srcZ,dstName,dstTarget,dstLevel,dstX,dstY,dstZ,srcWidth,srcHeight,srcDepth
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glEnableiOES (GLenum target,GLuint index)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glEnableiOES
                    ,target,index
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDisableiOES (GLenum target,GLuint index)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDisableiOES
                    ,target,index
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBlendEquationiOES (GLuint buf,GLenum mode)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBlendEquationiOES
                    ,buf,mode
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBlendEquationSeparateiOES (GLuint buf,GLenum modeRGB,GLenum modeAlpha)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBlendEquationSeparateiOES
                    ,buf,modeRGB,modeAlpha
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBlendFunciOES (GLuint buf,GLenum src,GLenum dst)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBlendFunciOES
                    ,buf,src,dst
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBlendFuncSeparateiOES (GLuint buf,GLenum srcRGB,GLenum dstRGB,GLenum srcAlpha,GLenum dstAlpha)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBlendFuncSeparateiOES
                    ,buf,srcRGB,dstRGB,srcAlpha,dstAlpha
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glColorMaskiOES (GLuint index,GLboolean r,GLboolean g,GLboolean b,GLboolean a)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glColorMaskiOES
                    ,index,r,g,b,a
                    );
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsEnablediOES (GLenum target,GLuint index)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsEnablediOES
                    ,target,index
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawElementsBaseVertexOES (GLenum mode,GLsizei count,GLenum type,const void *indices,GLint basevertex)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawElementsBaseVertexOES
                    ,mode,count,type,indices,basevertex
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawRangeElementsBaseVertexOES (GLenum mode,GLuint start,GLuint end,GLsizei count,GLenum type,const void *indices,GLint basevertex)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawRangeElementsBaseVertexOES
                    ,mode,start,end,count,type,indices,basevertex
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawElementsInstancedBaseVertexOES (GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei instancecount,GLint basevertex)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawElementsInstancedBaseVertexOES
                    ,mode,count,type,indices,instancecount,basevertex
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glMultiDrawElementsBaseVertexOES (GLenum mode,const GLsizei *count,GLenum type,const void *const*indices,GLsizei primcount,const GLint *basevertex)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glMultiDrawElementsBaseVertexOES
                    ,mode,count,type,indices,primcount,basevertex
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glFramebufferTextureOES (GLenum target,GLenum attachment,GLuint texture,GLint level)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFramebufferTextureOES
                    ,target,attachment,texture,level
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetProgramBinaryOES (GLuint program,GLsizei bufSize,GLsizei *length,GLenum *binaryFormat,void *binary)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetProgramBinaryOES
                    ,program,bufSize,length,binaryFormat,binary
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramBinaryOES (GLuint program,GLenum binaryFormat,const void *binary,GLint length)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramBinaryOES
                    ,program,binaryFormat,binary,length
                    );
}


GLUEY_APICALL  void * GLUEY_APIENTRY  glMapBufferOES (GLenum target,GLenum access)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glMapBufferOES
                    ,target,access
                    );
    return retVal;
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glUnmapBufferOES (GLenum target)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUnmapBufferOES
                    ,target
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetBufferPointervOES (GLenum target,GLenum pname,void **params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetBufferPointervOES
                    ,target,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glPrimitiveBoundingBoxOES (GLfloat minX,GLfloat minY,GLfloat minZ,GLfloat minW,GLfloat maxX,GLfloat maxY,GLfloat maxZ,GLfloat maxW)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPrimitiveBoundingBoxOES
                    ,minX,minY,minZ,minW,maxX,maxY,maxZ,maxW
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glMinSampleShadingOES (GLfloat value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glMinSampleShadingOES
                    ,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glPatchParameteriOES (GLenum pname,GLint value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPatchParameteriOES
                    ,pname,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexImage3DOES (GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLenum format,GLenum type,const void *pixels)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexImage3DOES
                    ,target,level,internalformat,width,height,depth,border,format,type,pixels
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexSubImage3DOES (GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLenum type,const void *pixels)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexSubImage3DOES
                    ,target,level,xoffset,yoffset,zoffset,width,height,depth,format,type,pixels
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCopyTexSubImage3DOES (GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLint x,GLint y,GLsizei width,GLsizei height)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCopyTexSubImage3DOES
                    ,target,level,xoffset,yoffset,zoffset,x,y,width,height
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCompressedTexImage3DOES (GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLsizei imageSize,const void *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCompressedTexImage3DOES
                    ,target,level,internalformat,width,height,depth,border,imageSize,data
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCompressedTexSubImage3DOES (GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLsizei imageSize,const void *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCompressedTexSubImage3DOES
                    ,target,level,xoffset,yoffset,zoffset,width,height,depth,format,imageSize,data
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glFramebufferTexture3DOES (GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level,GLint zoffset)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFramebufferTexture3DOES
                    ,target,attachment,textarget,texture,level,zoffset
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexParameterIivOES (GLenum target,GLenum pname,const GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexParameterIivOES
                    ,target,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexParameterIuivOES (GLenum target,GLenum pname,const GLuint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexParameterIuivOES
                    ,target,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetTexParameterIivOES (GLenum target,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetTexParameterIivOES
                    ,target,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetTexParameterIuivOES (GLenum target,GLenum pname,GLuint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetTexParameterIuivOES
                    ,target,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glSamplerParameterIivOES (GLuint sampler,GLenum pname,const GLint *param)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glSamplerParameterIivOES
                    ,sampler,pname,param
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glSamplerParameterIuivOES (GLuint sampler,GLenum pname,const GLuint *param)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glSamplerParameterIuivOES
                    ,sampler,pname,param
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetSamplerParameterIivOES (GLuint sampler,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetSamplerParameterIivOES
                    ,sampler,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetSamplerParameterIuivOES (GLuint sampler,GLenum pname,GLuint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetSamplerParameterIuivOES
                    ,sampler,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexBufferOES (GLenum target,GLenum internalformat,GLuint buffer)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexBufferOES
                    ,target,internalformat,buffer
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexBufferRangeOES (GLenum target,GLenum internalformat,GLuint buffer,GLintptr offset,GLsizeiptr size)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexBufferRangeOES
                    ,target,internalformat,buffer,offset,size
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexStorage3DMultisampleOES (GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLboolean fixedsamplelocations)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexStorage3DMultisampleOES
                    ,target,samples,internalformat,width,height,depth,fixedsamplelocations
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTextureViewOES (GLuint texture,GLenum target,GLuint origtexture,GLenum internalformat,GLuint minlevel,GLuint numlevels,GLuint minlayer,GLuint numlayers)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTextureViewOES
                    ,texture,target,origtexture,internalformat,minlevel,numlevels,minlayer,numlayers
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBindVertexArrayOES (GLuint array)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBindVertexArrayOES
                    ,array
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDeleteVertexArraysOES (GLsizei n,const GLuint *arrays)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDeleteVertexArraysOES
                    ,n,arrays
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGenVertexArraysOES (GLsizei n,GLuint *arrays)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGenVertexArraysOES
                    ,n,arrays
                    );
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsVertexArrayOES (GLuint array)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsVertexArrayOES
                    ,array
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glViewportArrayvOES (GLuint first,GLsizei count,const GLfloat *v)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glViewportArrayvOES
                    ,first,count,v
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glViewportIndexedfOES (GLuint index,GLfloat x,GLfloat y,GLfloat w,GLfloat h)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glViewportIndexedfOES
                    ,index,x,y,w,h
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glViewportIndexedfvOES (GLuint index,const GLfloat *v)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glViewportIndexedfvOES
                    ,index,v
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glScissorArrayvOES (GLuint first,GLsizei count,const GLint *v)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glScissorArrayvOES
                    ,first,count,v
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glScissorIndexedOES (GLuint index,GLint left,GLint bottom,GLsizei width,GLsizei height)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glScissorIndexedOES
                    ,index,left,bottom,width,height
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glScissorIndexedvOES (GLuint index,const GLint *v)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glScissorIndexedvOES
                    ,index,v
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDepthRangeArrayfvOES (GLuint first,GLsizei count,const GLfloat *v)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDepthRangeArrayfvOES
                    ,first,count,v
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDepthRangeIndexedfOES (GLuint index,GLfloat n,GLfloat f)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDepthRangeIndexedfOES
                    ,index,n,f
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetFloati_vOES (GLenum target,GLuint index,GLfloat *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetFloati_vOES
                    ,target,index,data
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetPerfMonitorGroupsAMD (GLint *numGroups,GLsizei groupsSize,GLuint *groups)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetPerfMonitorGroupsAMD
                    ,numGroups,groupsSize,groups
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetPerfMonitorCountersAMD (GLuint group,GLint *numCounters,GLint *maxActiveCounters,GLsizei counterSize,GLuint *counters)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetPerfMonitorCountersAMD
                    ,group,numCounters,maxActiveCounters,counterSize,counters
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetPerfMonitorGroupStringAMD (GLuint group,GLsizei bufSize,GLsizei *length,GLchar *groupString)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetPerfMonitorGroupStringAMD
                    ,group,bufSize,length,groupString
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetPerfMonitorCounterStringAMD (GLuint group,GLuint counter,GLsizei bufSize,GLsizei *length,GLchar *counterString)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetPerfMonitorCounterStringAMD
                    ,group,counter,bufSize,length,counterString
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetPerfMonitorCounterInfoAMD (GLuint group,GLuint counter,GLenum pname,void *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetPerfMonitorCounterInfoAMD
                    ,group,counter,pname,data
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGenPerfMonitorsAMD (GLsizei n,GLuint *monitors)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGenPerfMonitorsAMD
                    ,n,monitors
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDeletePerfMonitorsAMD (GLsizei n,GLuint *monitors)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDeletePerfMonitorsAMD
                    ,n,monitors
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glSelectPerfMonitorCountersAMD (GLuint monitor,GLboolean enable,GLuint group,GLint numCounters,GLuint *counterList)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glSelectPerfMonitorCountersAMD
                    ,monitor,enable,group,numCounters,counterList
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBeginPerfMonitorAMD (GLuint monitor)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBeginPerfMonitorAMD
                    ,monitor
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glEndPerfMonitorAMD (GLuint monitor)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glEndPerfMonitorAMD
                    ,monitor
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetPerfMonitorCounterDataAMD (GLuint monitor,GLenum pname,GLsizei dataSize,GLuint *data,GLint *bytesWritten)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetPerfMonitorCounterDataAMD
                    ,monitor,pname,dataSize,data,bytesWritten
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBlitFramebufferANGLE (GLint srcX0,GLint srcY0,GLint srcX1,GLint srcY1,GLint dstX0,GLint dstY0,GLint dstX1,GLint dstY1,GLbitfield mask,GLenum filter)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBlitFramebufferANGLE
                    ,srcX0,srcY0,srcX1,srcY1,dstX0,dstY0,dstX1,dstY1,mask,filter
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glRenderbufferStorageMultisampleANGLE (GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glRenderbufferStorageMultisampleANGLE
                    ,target,samples,internalformat,width,height
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawArraysInstancedANGLE (GLenum mode,GLint first,GLsizei count,GLsizei primcount)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawArraysInstancedANGLE
                    ,mode,first,count,primcount
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawElementsInstancedANGLE (GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei primcount)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawElementsInstancedANGLE
                    ,mode,count,type,indices,primcount
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttribDivisorANGLE (GLuint index,GLuint divisor)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttribDivisorANGLE
                    ,index,divisor
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetTranslatedShaderSourceANGLE (GLuint shader,GLsizei bufsize,GLsizei *length,GLchar *source)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetTranslatedShaderSourceANGLE
                    ,shader,bufsize,length,source
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCopyTextureLevelsAPPLE (GLuint destinationTexture,GLuint sourceTexture,GLint sourceBaseLevel,GLsizei sourceLevelCount)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCopyTextureLevelsAPPLE
                    ,destinationTexture,sourceTexture,sourceBaseLevel,sourceLevelCount
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glRenderbufferStorageMultisampleAPPLE (GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glRenderbufferStorageMultisampleAPPLE
                    ,target,samples,internalformat,width,height
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glResolveMultisampleFramebufferAPPLE ()
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glResolveMultisampleFramebufferAPPLE
                    );
}


GLUEY_APICALL  GLsync GLUEY_APIENTRY  glFenceSyncAPPLE (GLenum condition,GLbitfield flags)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFenceSyncAPPLE
                    ,condition,flags
                    );
    return retVal;
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsSyncAPPLE (GLsync sync)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsSyncAPPLE
                    ,sync
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDeleteSyncAPPLE (GLsync sync)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDeleteSyncAPPLE
                    ,sync
                    );
}


GLUEY_APICALL  GLenum GLUEY_APIENTRY  glClientWaitSyncAPPLE (GLsync sync,GLbitfield flags,GLuint64 timeout)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glClientWaitSyncAPPLE
                    ,sync,flags,timeout
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glWaitSyncAPPLE (GLsync sync,GLbitfield flags,GLuint64 timeout)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glWaitSyncAPPLE
                    ,sync,flags,timeout
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetInteger64vAPPLE (GLenum pname,GLint64 *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetInteger64vAPPLE
                    ,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetSyncivAPPLE (GLsync sync,GLenum pname,GLsizei bufSize,GLsizei *length,GLint *values)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetSyncivAPPLE
                    ,sync,pname,bufSize,length,values
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawArraysInstancedBaseInstanceEXT (GLenum mode,GLint first,GLsizei count,GLsizei instancecount,GLuint baseinstance)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawArraysInstancedBaseInstanceEXT
                    ,mode,first,count,instancecount,baseinstance
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawElementsInstancedBaseInstanceEXT (GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei instancecount,GLuint baseinstance)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawElementsInstancedBaseInstanceEXT
                    ,mode,count,type,indices,instancecount,baseinstance
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawElementsInstancedBaseVertexBaseInstanceEXT (GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei instancecount,GLint basevertex,GLuint baseinstance)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawElementsInstancedBaseVertexBaseInstanceEXT
                    ,mode,count,type,indices,instancecount,basevertex,baseinstance
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBindFragDataLocationIndexedEXT (GLuint program,GLuint colorNumber,GLuint index,const GLchar *name)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBindFragDataLocationIndexedEXT
                    ,program,colorNumber,index,name
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBindFragDataLocationEXT (GLuint program,GLuint color,const GLchar *name)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBindFragDataLocationEXT
                    ,program,color,name
                    );
}


GLUEY_APICALL  GLint GLUEY_APIENTRY  glGetProgramResourceLocationIndexEXT (GLuint program,GLenum programInterface,const GLchar *name)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetProgramResourceLocationIndexEXT
                    ,program,programInterface,name
                    );
    return retVal;
}


GLUEY_APICALL  GLint GLUEY_APIENTRY  glGetFragDataIndexEXT (GLuint program,const GLchar *name)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetFragDataIndexEXT
                    ,program,name
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBufferStorageEXT (GLenum target,GLsizeiptr size,const void *data,GLbitfield flags)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBufferStorageEXT
                    ,target,size,data,flags
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glClearTexImageEXT (GLuint texture,GLint level,GLenum format,GLenum type,const void *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glClearTexImageEXT
                    ,texture,level,format,type,data
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glClearTexSubImageEXT (GLuint texture,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLenum type,const void *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glClearTexSubImageEXT
                    ,texture,level,xoffset,yoffset,zoffset,width,height,depth,format,type,data
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCopyImageSubDataEXT (GLuint srcName,GLenum srcTarget,GLint srcLevel,GLint srcX,GLint srcY,GLint srcZ,GLuint dstName,GLenum dstTarget,GLint dstLevel,GLint dstX,GLint dstY,GLint dstZ,GLsizei srcWidth,GLsizei srcHeight,GLsizei srcDepth)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCopyImageSubDataEXT
                    ,srcName,srcTarget,srcLevel,srcX,srcY,srcZ,dstName,dstTarget,dstLevel,dstX,dstY,dstZ,srcWidth,srcHeight,srcDepth
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glLabelObjectEXT (GLenum type,GLuint object,GLsizei length,const GLchar *label)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glLabelObjectEXT
                    ,type,object,length,label
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetObjectLabelEXT (GLenum type,GLuint object,GLsizei bufSize,GLsizei *length,GLchar *label)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetObjectLabelEXT
                    ,type,object,bufSize,length,label
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glInsertEventMarkerEXT (GLsizei length,const GLchar *marker)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glInsertEventMarkerEXT
                    ,length,marker
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glPushGroupMarkerEXT (GLsizei length,const GLchar *marker)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPushGroupMarkerEXT
                    ,length,marker
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glPopGroupMarkerEXT ()
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPopGroupMarkerEXT
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDiscardFramebufferEXT (GLenum target,GLsizei numAttachments,const GLenum *attachments)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDiscardFramebufferEXT
                    ,target,numAttachments,attachments
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGenQueriesEXT (GLsizei n,GLuint *ids)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGenQueriesEXT
                    ,n,ids
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDeleteQueriesEXT (GLsizei n,const GLuint *ids)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDeleteQueriesEXT
                    ,n,ids
                    );
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsQueryEXT (GLuint id)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsQueryEXT
                    ,id
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBeginQueryEXT (GLenum target,GLuint id)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBeginQueryEXT
                    ,target,id
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glEndQueryEXT (GLenum target)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glEndQueryEXT
                    ,target
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glQueryCounterEXT (GLuint id,GLenum target)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glQueryCounterEXT
                    ,id,target
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetQueryivEXT (GLenum target,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetQueryivEXT
                    ,target,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetQueryObjectivEXT (GLuint id,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetQueryObjectivEXT
                    ,id,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetQueryObjectuivEXT (GLuint id,GLenum pname,GLuint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetQueryObjectuivEXT
                    ,id,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetQueryObjecti64vEXT (GLuint id,GLenum pname,GLint64 *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetQueryObjecti64vEXT
                    ,id,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetQueryObjectui64vEXT (GLuint id,GLenum pname,GLuint64 *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetQueryObjectui64vEXT
                    ,id,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawBuffersEXT (GLsizei n,const GLenum *bufs)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawBuffersEXT
                    ,n,bufs
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glEnableiEXT (GLenum target,GLuint index)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glEnableiEXT
                    ,target,index
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDisableiEXT (GLenum target,GLuint index)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDisableiEXT
                    ,target,index
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBlendEquationiEXT (GLuint buf,GLenum mode)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBlendEquationiEXT
                    ,buf,mode
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBlendEquationSeparateiEXT (GLuint buf,GLenum modeRGB,GLenum modeAlpha)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBlendEquationSeparateiEXT
                    ,buf,modeRGB,modeAlpha
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBlendFunciEXT (GLuint buf,GLenum src,GLenum dst)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBlendFunciEXT
                    ,buf,src,dst
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBlendFuncSeparateiEXT (GLuint buf,GLenum srcRGB,GLenum dstRGB,GLenum srcAlpha,GLenum dstAlpha)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBlendFuncSeparateiEXT
                    ,buf,srcRGB,dstRGB,srcAlpha,dstAlpha
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glColorMaskiEXT (GLuint index,GLboolean r,GLboolean g,GLboolean b,GLboolean a)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glColorMaskiEXT
                    ,index,r,g,b,a
                    );
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsEnablediEXT (GLenum target,GLuint index)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsEnablediEXT
                    ,target,index
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawElementsBaseVertexEXT (GLenum mode,GLsizei count,GLenum type,const void *indices,GLint basevertex)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawElementsBaseVertexEXT
                    ,mode,count,type,indices,basevertex
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawRangeElementsBaseVertexEXT (GLenum mode,GLuint start,GLuint end,GLsizei count,GLenum type,const void *indices,GLint basevertex)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawRangeElementsBaseVertexEXT
                    ,mode,start,end,count,type,indices,basevertex
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawElementsInstancedBaseVertexEXT (GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei instancecount,GLint basevertex)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawElementsInstancedBaseVertexEXT
                    ,mode,count,type,indices,instancecount,basevertex
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glMultiDrawElementsBaseVertexEXT (GLenum mode,const GLsizei *count,GLenum type,const void *const*indices,GLsizei primcount,const GLint *basevertex)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glMultiDrawElementsBaseVertexEXT
                    ,mode,count,type,indices,primcount,basevertex
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawArraysInstancedEXT (GLenum mode,GLint start,GLsizei count,GLsizei primcount)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawArraysInstancedEXT
                    ,mode,start,count,primcount
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawElementsInstancedEXT (GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei primcount)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawElementsInstancedEXT
                    ,mode,count,type,indices,primcount
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawTransformFeedbackEXT (GLenum mode,GLuint id)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawTransformFeedbackEXT
                    ,mode,id
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawTransformFeedbackInstancedEXT (GLenum mode,GLuint id,GLsizei instancecount)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawTransformFeedbackInstancedEXT
                    ,mode,id,instancecount
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glFramebufferTextureEXT (GLenum target,GLenum attachment,GLuint texture,GLint level)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFramebufferTextureEXT
                    ,target,attachment,texture,level
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttribDivisorEXT (GLuint index,GLuint divisor)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttribDivisorEXT
                    ,index,divisor
                    );
}


GLUEY_APICALL  void * GLUEY_APIENTRY  glMapBufferRangeEXT (GLenum target,GLintptr offset,GLsizeiptr length,GLbitfield access)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glMapBufferRangeEXT
                    ,target,offset,length,access
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glFlushMappedBufferRangeEXT (GLenum target,GLintptr offset,GLsizeiptr length)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFlushMappedBufferRangeEXT
                    ,target,offset,length
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glMultiDrawArraysEXT (GLenum mode,const GLint *first,const GLsizei *count,GLsizei primcount)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glMultiDrawArraysEXT
                    ,mode,first,count,primcount
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glMultiDrawElementsEXT (GLenum mode,const GLsizei *count,GLenum type,const void *const*indices,GLsizei primcount)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glMultiDrawElementsEXT
                    ,mode,count,type,indices,primcount
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glMultiDrawArraysIndirectEXT (GLenum mode,const void *indirect,GLsizei drawcount,GLsizei stride)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glMultiDrawArraysIndirectEXT
                    ,mode,indirect,drawcount,stride
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glMultiDrawElementsIndirectEXT (GLenum mode,GLenum type,const void *indirect,GLsizei drawcount,GLsizei stride)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glMultiDrawElementsIndirectEXT
                    ,mode,type,indirect,drawcount,stride
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glRenderbufferStorageMultisampleEXT (GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glRenderbufferStorageMultisampleEXT
                    ,target,samples,internalformat,width,height
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glFramebufferTexture2DMultisampleEXT (GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level,GLsizei samples)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFramebufferTexture2DMultisampleEXT
                    ,target,attachment,textarget,texture,level,samples
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glReadBufferIndexedEXT (GLenum src,GLint index)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glReadBufferIndexedEXT
                    ,src,index
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawBuffersIndexedEXT (GLint n,const GLenum *location,const GLint *indices)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawBuffersIndexedEXT
                    ,n,location,indices
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetIntegeri_vEXT (GLenum target,GLuint index,GLint *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetIntegeri_vEXT
                    ,target,index,data
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glPolygonOffsetClampEXT (GLfloat factor,GLfloat units,GLfloat clamp)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPolygonOffsetClampEXT
                    ,factor,units,clamp
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glPrimitiveBoundingBoxEXT (GLfloat minX,GLfloat minY,GLfloat minZ,GLfloat minW,GLfloat maxX,GLfloat maxY,GLfloat maxZ,GLfloat maxW)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPrimitiveBoundingBoxEXT
                    ,minX,minY,minZ,minW,maxX,maxY,maxZ,maxW
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glRasterSamplesEXT (GLuint samples,GLboolean fixedsamplelocations)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glRasterSamplesEXT
                    ,samples,fixedsamplelocations
                    );
}


GLUEY_APICALL  GLenum GLUEY_APIENTRY  glGetGraphicsResetStatusEXT ()
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetGraphicsResetStatusEXT
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glReadnPixelsEXT (GLint x,GLint y,GLsizei width,GLsizei height,GLenum format,GLenum type,GLsizei bufSize,void *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glReadnPixelsEXT
                    ,x,y,width,height,format,type,bufSize,data
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetnUniformfvEXT (GLuint program,GLint location,GLsizei bufSize,GLfloat *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetnUniformfvEXT
                    ,program,location,bufSize,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetnUniformivEXT (GLuint program,GLint location,GLsizei bufSize,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetnUniformivEXT
                    ,program,location,bufSize,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glActiveShaderProgramEXT (GLuint pipeline,GLuint program)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glActiveShaderProgramEXT
                    ,pipeline,program
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBindProgramPipelineEXT (GLuint pipeline)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBindProgramPipelineEXT
                    ,pipeline
                    );
}


GLUEY_APICALL  GLuint GLUEY_APIENTRY  glCreateShaderProgramvEXT (GLenum type,GLsizei count,const GLchar **strings)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCreateShaderProgramvEXT
                    ,type,count,strings
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDeleteProgramPipelinesEXT (GLsizei n,const GLuint *pipelines)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDeleteProgramPipelinesEXT
                    ,n,pipelines
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGenProgramPipelinesEXT (GLsizei n,GLuint *pipelines)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGenProgramPipelinesEXT
                    ,n,pipelines
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetProgramPipelineInfoLogEXT (GLuint pipeline,GLsizei bufSize,GLsizei *length,GLchar *infoLog)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetProgramPipelineInfoLogEXT
                    ,pipeline,bufSize,length,infoLog
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetProgramPipelineivEXT (GLuint pipeline,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetProgramPipelineivEXT
                    ,pipeline,pname,params
                    );
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsProgramPipelineEXT (GLuint pipeline)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsProgramPipelineEXT
                    ,pipeline
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramParameteriEXT (GLuint program,GLenum pname,GLint value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramParameteriEXT
                    ,program,pname,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform1fEXT (GLuint program,GLint location,GLfloat v0)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform1fEXT
                    ,program,location,v0
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform1fvEXT (GLuint program,GLint location,GLsizei count,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform1fvEXT
                    ,program,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform1iEXT (GLuint program,GLint location,GLint v0)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform1iEXT
                    ,program,location,v0
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform1ivEXT (GLuint program,GLint location,GLsizei count,const GLint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform1ivEXT
                    ,program,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform2fEXT (GLuint program,GLint location,GLfloat v0,GLfloat v1)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform2fEXT
                    ,program,location,v0,v1
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform2fvEXT (GLuint program,GLint location,GLsizei count,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform2fvEXT
                    ,program,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform2iEXT (GLuint program,GLint location,GLint v0,GLint v1)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform2iEXT
                    ,program,location,v0,v1
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform2ivEXT (GLuint program,GLint location,GLsizei count,const GLint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform2ivEXT
                    ,program,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform3fEXT (GLuint program,GLint location,GLfloat v0,GLfloat v1,GLfloat v2)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform3fEXT
                    ,program,location,v0,v1,v2
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform3fvEXT (GLuint program,GLint location,GLsizei count,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform3fvEXT
                    ,program,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform3iEXT (GLuint program,GLint location,GLint v0,GLint v1,GLint v2)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform3iEXT
                    ,program,location,v0,v1,v2
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform3ivEXT (GLuint program,GLint location,GLsizei count,const GLint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform3ivEXT
                    ,program,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform4fEXT (GLuint program,GLint location,GLfloat v0,GLfloat v1,GLfloat v2,GLfloat v3)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform4fEXT
                    ,program,location,v0,v1,v2,v3
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform4fvEXT (GLuint program,GLint location,GLsizei count,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform4fvEXT
                    ,program,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform4iEXT (GLuint program,GLint location,GLint v0,GLint v1,GLint v2,GLint v3)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform4iEXT
                    ,program,location,v0,v1,v2,v3
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform4ivEXT (GLuint program,GLint location,GLsizei count,const GLint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform4ivEXT
                    ,program,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniformMatrix2fvEXT (GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniformMatrix2fvEXT
                    ,program,location,count,transpose,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniformMatrix3fvEXT (GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniformMatrix3fvEXT
                    ,program,location,count,transpose,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniformMatrix4fvEXT (GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniformMatrix4fvEXT
                    ,program,location,count,transpose,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUseProgramStagesEXT (GLuint pipeline,GLbitfield stages,GLuint program)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUseProgramStagesEXT
                    ,pipeline,stages,program
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glValidateProgramPipelineEXT (GLuint pipeline)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glValidateProgramPipelineEXT
                    ,pipeline
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform1uiEXT (GLuint program,GLint location,GLuint v0)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform1uiEXT
                    ,program,location,v0
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform2uiEXT (GLuint program,GLint location,GLuint v0,GLuint v1)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform2uiEXT
                    ,program,location,v0,v1
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform3uiEXT (GLuint program,GLint location,GLuint v0,GLuint v1,GLuint v2)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform3uiEXT
                    ,program,location,v0,v1,v2
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform4uiEXT (GLuint program,GLint location,GLuint v0,GLuint v1,GLuint v2,GLuint v3)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform4uiEXT
                    ,program,location,v0,v1,v2,v3
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform1uivEXT (GLuint program,GLint location,GLsizei count,const GLuint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform1uivEXT
                    ,program,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform2uivEXT (GLuint program,GLint location,GLsizei count,const GLuint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform2uivEXT
                    ,program,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform3uivEXT (GLuint program,GLint location,GLsizei count,const GLuint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform3uivEXT
                    ,program,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform4uivEXT (GLuint program,GLint location,GLsizei count,const GLuint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform4uivEXT
                    ,program,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniformMatrix2x3fvEXT (GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniformMatrix2x3fvEXT
                    ,program,location,count,transpose,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniformMatrix3x2fvEXT (GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniformMatrix3x2fvEXT
                    ,program,location,count,transpose,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniformMatrix2x4fvEXT (GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniformMatrix2x4fvEXT
                    ,program,location,count,transpose,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniformMatrix4x2fvEXT (GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniformMatrix4x2fvEXT
                    ,program,location,count,transpose,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniformMatrix3x4fvEXT (GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniformMatrix3x4fvEXT
                    ,program,location,count,transpose,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniformMatrix4x3fvEXT (GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniformMatrix4x3fvEXT
                    ,program,location,count,transpose,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glFramebufferPixelLocalStorageSizeEXT (GLuint target,GLsizei size)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFramebufferPixelLocalStorageSizeEXT
                    ,target,size
                    );
}


GLUEY_APICALL  GLsizei GLUEY_APIENTRY  glGetFramebufferPixelLocalStorageSizeEXT (GLuint target)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetFramebufferPixelLocalStorageSizeEXT
                    ,target
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glClearPixelLocalStorageuiEXT (GLsizei offset,GLsizei n,const GLuint *values)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glClearPixelLocalStorageuiEXT
                    ,offset,n,values
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexPageCommitmentEXT (GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLboolean commit)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexPageCommitmentEXT
                    ,target,level,xoffset,yoffset,zoffset,width,height,depth,commit
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glPatchParameteriEXT (GLenum pname,GLint value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPatchParameteriEXT
                    ,pname,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexParameterIivEXT (GLenum target,GLenum pname,const GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexParameterIivEXT
                    ,target,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexParameterIuivEXT (GLenum target,GLenum pname,const GLuint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexParameterIuivEXT
                    ,target,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetTexParameterIivEXT (GLenum target,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetTexParameterIivEXT
                    ,target,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetTexParameterIuivEXT (GLenum target,GLenum pname,GLuint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetTexParameterIuivEXT
                    ,target,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glSamplerParameterIivEXT (GLuint sampler,GLenum pname,const GLint *param)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glSamplerParameterIivEXT
                    ,sampler,pname,param
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glSamplerParameterIuivEXT (GLuint sampler,GLenum pname,const GLuint *param)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glSamplerParameterIuivEXT
                    ,sampler,pname,param
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetSamplerParameterIivEXT (GLuint sampler,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetSamplerParameterIivEXT
                    ,sampler,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetSamplerParameterIuivEXT (GLuint sampler,GLenum pname,GLuint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetSamplerParameterIuivEXT
                    ,sampler,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexBufferEXT (GLenum target,GLenum internalformat,GLuint buffer)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexBufferEXT
                    ,target,internalformat,buffer
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexBufferRangeEXT (GLenum target,GLenum internalformat,GLuint buffer,GLintptr offset,GLsizeiptr size)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexBufferRangeEXT
                    ,target,internalformat,buffer,offset,size
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexStorage1DEXT (GLenum target,GLsizei levels,GLenum internalformat,GLsizei width)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexStorage1DEXT
                    ,target,levels,internalformat,width
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexStorage2DEXT (GLenum target,GLsizei levels,GLenum internalformat,GLsizei width,GLsizei height)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexStorage2DEXT
                    ,target,levels,internalformat,width,height
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexStorage3DEXT (GLenum target,GLsizei levels,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexStorage3DEXT
                    ,target,levels,internalformat,width,height,depth
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTextureStorage1DEXT (GLuint texture,GLenum target,GLsizei levels,GLenum internalformat,GLsizei width)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTextureStorage1DEXT
                    ,texture,target,levels,internalformat,width
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTextureStorage2DEXT (GLuint texture,GLenum target,GLsizei levels,GLenum internalformat,GLsizei width,GLsizei height)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTextureStorage2DEXT
                    ,texture,target,levels,internalformat,width,height
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTextureStorage3DEXT (GLuint texture,GLenum target,GLsizei levels,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTextureStorage3DEXT
                    ,texture,target,levels,internalformat,width,height,depth
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTextureViewEXT (GLuint texture,GLenum target,GLuint origtexture,GLenum internalformat,GLuint minlevel,GLuint numlevels,GLuint minlayer,GLuint numlayers)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTextureViewEXT
                    ,texture,target,origtexture,internalformat,minlevel,numlevels,minlayer,numlayers
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glWindowRectanglesEXT (GLenum mode,GLsizei count,const GLint *box)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glWindowRectanglesEXT
                    ,mode,count,box
                    );
}


GLUEY_APICALL  GLuint64 GLUEY_APIENTRY  glGetTextureHandleIMG (GLuint texture)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetTextureHandleIMG
                    ,texture
                    );
    return retVal;
}


GLUEY_APICALL  GLuint64 GLUEY_APIENTRY  glGetTextureSamplerHandleIMG (GLuint texture,GLuint sampler)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetTextureSamplerHandleIMG
                    ,texture,sampler
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniformHandleui64IMG (GLint location,GLuint64 value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniformHandleui64IMG
                    ,location,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniformHandleui64vIMG (GLint location,GLsizei count,const GLuint64 *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniformHandleui64vIMG
                    ,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniformHandleui64IMG (GLuint program,GLint location,GLuint64 value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniformHandleui64IMG
                    ,program,location,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniformHandleui64vIMG (GLuint program,GLint location,GLsizei count,const GLuint64 *values)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniformHandleui64vIMG
                    ,program,location,count,values
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glFramebufferTexture2DDownsampleIMG (GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level,GLint xscale,GLint yscale)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFramebufferTexture2DDownsampleIMG
                    ,target,attachment,textarget,texture,level,xscale,yscale
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glFramebufferTextureLayerDownsampleIMG (GLenum target,GLenum attachment,GLuint texture,GLint level,GLint layer,GLint xscale,GLint yscale)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFramebufferTextureLayerDownsampleIMG
                    ,target,attachment,texture,level,layer,xscale,yscale
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glRenderbufferStorageMultisampleIMG (GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glRenderbufferStorageMultisampleIMG
                    ,target,samples,internalformat,width,height
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glFramebufferTexture2DMultisampleIMG (GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level,GLsizei samples)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFramebufferTexture2DMultisampleIMG
                    ,target,attachment,textarget,texture,level,samples
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glApplyFramebufferAttachmentCMAAINTEL ()
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glApplyFramebufferAttachmentCMAAINTEL
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBeginPerfQueryINTEL (GLuint queryHandle)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBeginPerfQueryINTEL
                    ,queryHandle
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCreatePerfQueryINTEL (GLuint queryId,GLuint *queryHandle)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCreatePerfQueryINTEL
                    ,queryId,queryHandle
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDeletePerfQueryINTEL (GLuint queryHandle)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDeletePerfQueryINTEL
                    ,queryHandle
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glEndPerfQueryINTEL (GLuint queryHandle)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glEndPerfQueryINTEL
                    ,queryHandle
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetFirstPerfQueryIdINTEL (GLuint *queryId)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetFirstPerfQueryIdINTEL
                    ,queryId
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetNextPerfQueryIdINTEL (GLuint queryId,GLuint *nextQueryId)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetNextPerfQueryIdINTEL
                    ,queryId,nextQueryId
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetPerfCounterInfoINTEL (GLuint queryId,GLuint counterId,GLuint counterNameLength,GLchar *counterName,GLuint counterDescLength,GLchar *counterDesc,GLuint *counterOffset,GLuint *counterDataSize,GLuint *counterTypeEnum,GLuint *counterDataTypeEnum,GLuint64 *rawCounterMaxValue)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetPerfCounterInfoINTEL
                    ,queryId,counterId,counterNameLength,counterName,counterDescLength,counterDesc,counterOffset,counterDataSize,counterTypeEnum,counterDataTypeEnum,rawCounterMaxValue
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetPerfQueryDataINTEL (GLuint queryHandle,GLuint flags,GLsizei dataSize,GLvoid *data,GLuint *bytesWritten)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetPerfQueryDataINTEL
                    ,queryHandle,flags,dataSize,data,bytesWritten
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetPerfQueryIdByNameINTEL (GLchar *queryName,GLuint *queryId)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetPerfQueryIdByNameINTEL
                    ,queryName,queryId
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetPerfQueryInfoINTEL (GLuint queryId,GLuint queryNameLength,GLchar *queryName,GLuint *dataSize,GLuint *noCounters,GLuint *noInstances,GLuint *capsMask)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetPerfQueryInfoINTEL
                    ,queryId,queryNameLength,queryName,dataSize,noCounters,noInstances,capsMask
                    );
}


GLUEY_APICALL  GLuint64 GLUEY_APIENTRY  glGetTextureHandleNV (GLuint texture)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetTextureHandleNV
                    ,texture
                    );
    return retVal;
}


GLUEY_APICALL  GLuint64 GLUEY_APIENTRY  glGetTextureSamplerHandleNV (GLuint texture,GLuint sampler)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetTextureSamplerHandleNV
                    ,texture,sampler
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glMakeTextureHandleResidentNV (GLuint64 handle)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glMakeTextureHandleResidentNV
                    ,handle
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glMakeTextureHandleNonResidentNV (GLuint64 handle)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glMakeTextureHandleNonResidentNV
                    ,handle
                    );
}


GLUEY_APICALL  GLuint64 GLUEY_APIENTRY  glGetImageHandleNV (GLuint texture,GLint level,GLboolean layered,GLint layer,GLenum format)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetImageHandleNV
                    ,texture,level,layered,layer,format
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glMakeImageHandleResidentNV (GLuint64 handle,GLenum access)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glMakeImageHandleResidentNV
                    ,handle,access
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glMakeImageHandleNonResidentNV (GLuint64 handle)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glMakeImageHandleNonResidentNV
                    ,handle
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniformHandleui64NV (GLint location,GLuint64 value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniformHandleui64NV
                    ,location,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniformHandleui64vNV (GLint location,GLsizei count,const GLuint64 *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniformHandleui64vNV
                    ,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniformHandleui64NV (GLuint program,GLint location,GLuint64 value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniformHandleui64NV
                    ,program,location,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniformHandleui64vNV (GLuint program,GLint location,GLsizei count,const GLuint64 *values)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniformHandleui64vNV
                    ,program,location,count,values
                    );
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsTextureHandleResidentNV (GLuint64 handle)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsTextureHandleResidentNV
                    ,handle
                    );
    return retVal;
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsImageHandleResidentNV (GLuint64 handle)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsImageHandleResidentNV
                    ,handle
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBlendParameteriNV (GLenum pname,GLint value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBlendParameteriNV
                    ,pname,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBlendBarrierNV ()
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBlendBarrierNV
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBeginConditionalRenderNV (GLuint id,GLenum mode)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBeginConditionalRenderNV
                    ,id,mode
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glEndConditionalRenderNV ()
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glEndConditionalRenderNV
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glSubpixelPrecisionBiasNV (GLuint xbits,GLuint ybits)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glSubpixelPrecisionBiasNV
                    ,xbits,ybits
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glConservativeRasterParameteriNV (GLenum pname,GLint param)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glConservativeRasterParameteriNV
                    ,pname,param
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCopyBufferSubDataNV (GLenum readTarget,GLenum writeTarget,GLintptr readOffset,GLintptr writeOffset,GLsizeiptr size)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCopyBufferSubDataNV
                    ,readTarget,writeTarget,readOffset,writeOffset,size
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCoverageMaskNV (GLboolean mask)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCoverageMaskNV
                    ,mask
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCoverageOperationNV (GLenum operation)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCoverageOperationNV
                    ,operation
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawBuffersNV (GLsizei n,const GLenum *bufs)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawBuffersNV
                    ,n,bufs
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawArraysInstancedNV (GLenum mode,GLint first,GLsizei count,GLsizei primcount)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawArraysInstancedNV
                    ,mode,first,count,primcount
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawElementsInstancedNV (GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei primcount)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawElementsInstancedNV
                    ,mode,count,type,indices,primcount
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDeleteFencesNV (GLsizei n,const GLuint *fences)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDeleteFencesNV
                    ,n,fences
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGenFencesNV (GLsizei n,GLuint *fences)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGenFencesNV
                    ,n,fences
                    );
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsFenceNV (GLuint fence)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsFenceNV
                    ,fence
                    );
    return retVal;
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glTestFenceNV (GLuint fence)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTestFenceNV
                    ,fence
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetFenceivNV (GLuint fence,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetFenceivNV
                    ,fence,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glFinishFenceNV (GLuint fence)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFinishFenceNV
                    ,fence
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glSetFenceNV (GLuint fence,GLenum condition)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glSetFenceNV
                    ,fence,condition
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glFragmentCoverageColorNV (GLuint color)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFragmentCoverageColorNV
                    ,color
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBlitFramebufferNV (GLint srcX0,GLint srcY0,GLint srcX1,GLint srcY1,GLint dstX0,GLint dstY0,GLint dstX1,GLint dstY1,GLbitfield mask,GLenum filter)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBlitFramebufferNV
                    ,srcX0,srcY0,srcX1,srcY1,dstX0,dstY0,dstX1,dstY1,mask,filter
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCoverageModulationTableNV (GLsizei n,const GLfloat *v)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCoverageModulationTableNV
                    ,n,v
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetCoverageModulationTableNV (GLsizei bufsize,GLfloat *v)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetCoverageModulationTableNV
                    ,bufsize,v
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCoverageModulationNV (GLenum components)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCoverageModulationNV
                    ,components
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glRenderbufferStorageMultisampleNV (GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glRenderbufferStorageMultisampleNV
                    ,target,samples,internalformat,width,height
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform1i64NV (GLint location,GLint64EXT x)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform1i64NV
                    ,location,x
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform2i64NV (GLint location,GLint64EXT x,GLint64EXT y)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform2i64NV
                    ,location,x,y
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform3i64NV (GLint location,GLint64EXT x,GLint64EXT y,GLint64EXT z)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform3i64NV
                    ,location,x,y,z
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform4i64NV (GLint location,GLint64EXT x,GLint64EXT y,GLint64EXT z,GLint64EXT w)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform4i64NV
                    ,location,x,y,z,w
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform1i64vNV (GLint location,GLsizei count,const GLint64EXT *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform1i64vNV
                    ,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform2i64vNV (GLint location,GLsizei count,const GLint64EXT *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform2i64vNV
                    ,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform3i64vNV (GLint location,GLsizei count,const GLint64EXT *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform3i64vNV
                    ,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform4i64vNV (GLint location,GLsizei count,const GLint64EXT *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform4i64vNV
                    ,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform1ui64NV (GLint location,GLuint64EXT x)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform1ui64NV
                    ,location,x
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform2ui64NV (GLint location,GLuint64EXT x,GLuint64EXT y)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform2ui64NV
                    ,location,x,y
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform3ui64NV (GLint location,GLuint64EXT x,GLuint64EXT y,GLuint64EXT z)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform3ui64NV
                    ,location,x,y,z
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform4ui64NV (GLint location,GLuint64EXT x,GLuint64EXT y,GLuint64EXT z,GLuint64EXT w)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform4ui64NV
                    ,location,x,y,z,w
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform1ui64vNV (GLint location,GLsizei count,const GLuint64EXT *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform1ui64vNV
                    ,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform2ui64vNV (GLint location,GLsizei count,const GLuint64EXT *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform2ui64vNV
                    ,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform3ui64vNV (GLint location,GLsizei count,const GLuint64EXT *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform3ui64vNV
                    ,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform4ui64vNV (GLint location,GLsizei count,const GLuint64EXT *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform4ui64vNV
                    ,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetUniformi64vNV (GLuint program,GLint location,GLint64EXT *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetUniformi64vNV
                    ,program,location,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform1i64NV (GLuint program,GLint location,GLint64EXT x)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform1i64NV
                    ,program,location,x
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform2i64NV (GLuint program,GLint location,GLint64EXT x,GLint64EXT y)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform2i64NV
                    ,program,location,x,y
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform3i64NV (GLuint program,GLint location,GLint64EXT x,GLint64EXT y,GLint64EXT z)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform3i64NV
                    ,program,location,x,y,z
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform4i64NV (GLuint program,GLint location,GLint64EXT x,GLint64EXT y,GLint64EXT z,GLint64EXT w)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform4i64NV
                    ,program,location,x,y,z,w
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform1i64vNV (GLuint program,GLint location,GLsizei count,const GLint64EXT *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform1i64vNV
                    ,program,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform2i64vNV (GLuint program,GLint location,GLsizei count,const GLint64EXT *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform2i64vNV
                    ,program,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform3i64vNV (GLuint program,GLint location,GLsizei count,const GLint64EXT *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform3i64vNV
                    ,program,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform4i64vNV (GLuint program,GLint location,GLsizei count,const GLint64EXT *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform4i64vNV
                    ,program,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform1ui64NV (GLuint program,GLint location,GLuint64EXT x)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform1ui64NV
                    ,program,location,x
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform2ui64NV (GLuint program,GLint location,GLuint64EXT x,GLuint64EXT y)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform2ui64NV
                    ,program,location,x,y
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform3ui64NV (GLuint program,GLint location,GLuint64EXT x,GLuint64EXT y,GLuint64EXT z)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform3ui64NV
                    ,program,location,x,y,z
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform4ui64NV (GLuint program,GLint location,GLuint64EXT x,GLuint64EXT y,GLuint64EXT z,GLuint64EXT w)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform4ui64NV
                    ,program,location,x,y,z,w
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform1ui64vNV (GLuint program,GLint location,GLsizei count,const GLuint64EXT *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform1ui64vNV
                    ,program,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform2ui64vNV (GLuint program,GLint location,GLsizei count,const GLuint64EXT *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform2ui64vNV
                    ,program,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform3ui64vNV (GLuint program,GLint location,GLsizei count,const GLuint64EXT *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform3ui64vNV
                    ,program,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform4ui64vNV (GLuint program,GLint location,GLsizei count,const GLuint64EXT *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform4ui64vNV
                    ,program,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttribDivisorNV (GLuint index,GLuint divisor)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttribDivisorNV
                    ,index,divisor
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetInternalformatSampleivNV (GLenum target,GLenum internalformat,GLsizei samples,GLenum pname,GLsizei bufSize,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetInternalformatSampleivNV
                    ,target,internalformat,samples,pname,bufSize,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniformMatrix2x3fvNV (GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniformMatrix2x3fvNV
                    ,location,count,transpose,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniformMatrix3x2fvNV (GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniformMatrix3x2fvNV
                    ,location,count,transpose,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniformMatrix2x4fvNV (GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniformMatrix2x4fvNV
                    ,location,count,transpose,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniformMatrix4x2fvNV (GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniformMatrix4x2fvNV
                    ,location,count,transpose,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniformMatrix3x4fvNV (GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniformMatrix3x4fvNV
                    ,location,count,transpose,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniformMatrix4x3fvNV (GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniformMatrix4x3fvNV
                    ,location,count,transpose,value
                    );
}


GLUEY_APICALL  GLuint GLUEY_APIENTRY  glGenPathsNV (GLsizei range)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGenPathsNV
                    ,range
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDeletePathsNV (GLuint path,GLsizei range)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDeletePathsNV
                    ,path,range
                    );
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsPathNV (GLuint path)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsPathNV
                    ,path
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glPathCommandsNV (GLuint path,GLsizei numCommands,const GLubyte *commands,GLsizei numCoords,GLenum coordType,const void *coords)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPathCommandsNV
                    ,path,numCommands,commands,numCoords,coordType,coords
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glPathCoordsNV (GLuint path,GLsizei numCoords,GLenum coordType,const void *coords)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPathCoordsNV
                    ,path,numCoords,coordType,coords
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glPathSubCommandsNV (GLuint path,GLsizei commandStart,GLsizei commandsToDelete,GLsizei numCommands,const GLubyte *commands,GLsizei numCoords,GLenum coordType,const void *coords)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPathSubCommandsNV
                    ,path,commandStart,commandsToDelete,numCommands,commands,numCoords,coordType,coords
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glPathSubCoordsNV (GLuint path,GLsizei coordStart,GLsizei numCoords,GLenum coordType,const void *coords)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPathSubCoordsNV
                    ,path,coordStart,numCoords,coordType,coords
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glPathStringNV (GLuint path,GLenum format,GLsizei length,const void *pathString)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPathStringNV
                    ,path,format,length,pathString
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glPathGlyphsNV (GLuint firstPathName,GLenum fontTarget,const void *fontName,GLbitfield fontStyle,GLsizei numGlyphs,GLenum type,const void *charcodes,GLenum handleMissingGlyphs,GLuint pathParameterTemplate,GLfloat emScale)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPathGlyphsNV
                    ,firstPathName,fontTarget,fontName,fontStyle,numGlyphs,type,charcodes,handleMissingGlyphs,pathParameterTemplate,emScale
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glPathGlyphRangeNV (GLuint firstPathName,GLenum fontTarget,const void *fontName,GLbitfield fontStyle,GLuint firstGlyph,GLsizei numGlyphs,GLenum handleMissingGlyphs,GLuint pathParameterTemplate,GLfloat emScale)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPathGlyphRangeNV
                    ,firstPathName,fontTarget,fontName,fontStyle,firstGlyph,numGlyphs,handleMissingGlyphs,pathParameterTemplate,emScale
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glWeightPathsNV (GLuint resultPath,GLsizei numPaths,const GLuint *paths,const GLfloat *weights)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glWeightPathsNV
                    ,resultPath,numPaths,paths,weights
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCopyPathNV (GLuint resultPath,GLuint srcPath)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCopyPathNV
                    ,resultPath,srcPath
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glInterpolatePathsNV (GLuint resultPath,GLuint pathA,GLuint pathB,GLfloat weight)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glInterpolatePathsNV
                    ,resultPath,pathA,pathB,weight
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTransformPathNV (GLuint resultPath,GLuint srcPath,GLenum transformType,const GLfloat *transformValues)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTransformPathNV
                    ,resultPath,srcPath,transformType,transformValues
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glPathParameterivNV (GLuint path,GLenum pname,const GLint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPathParameterivNV
                    ,path,pname,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glPathParameteriNV (GLuint path,GLenum pname,GLint value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPathParameteriNV
                    ,path,pname,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glPathParameterfvNV (GLuint path,GLenum pname,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPathParameterfvNV
                    ,path,pname,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glPathParameterfNV (GLuint path,GLenum pname,GLfloat value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPathParameterfNV
                    ,path,pname,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glPathDashArrayNV (GLuint path,GLsizei dashCount,const GLfloat *dashArray)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPathDashArrayNV
                    ,path,dashCount,dashArray
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glPathStencilFuncNV (GLenum func,GLint ref,GLuint mask)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPathStencilFuncNV
                    ,func,ref,mask
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glPathStencilDepthOffsetNV (GLfloat factor,GLfloat units)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPathStencilDepthOffsetNV
                    ,factor,units
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glStencilFillPathNV (GLuint path,GLenum fillMode,GLuint mask)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glStencilFillPathNV
                    ,path,fillMode,mask
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glStencilStrokePathNV (GLuint path,GLint reference,GLuint mask)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glStencilStrokePathNV
                    ,path,reference,mask
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glStencilFillPathInstancedNV (GLsizei numPaths,GLenum pathNameType,const void *paths,GLuint pathBase,GLenum fillMode,GLuint mask,GLenum transformType,const GLfloat *transformValues)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glStencilFillPathInstancedNV
                    ,numPaths,pathNameType,paths,pathBase,fillMode,mask,transformType,transformValues
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glStencilStrokePathInstancedNV (GLsizei numPaths,GLenum pathNameType,const void *paths,GLuint pathBase,GLint reference,GLuint mask,GLenum transformType,const GLfloat *transformValues)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glStencilStrokePathInstancedNV
                    ,numPaths,pathNameType,paths,pathBase,reference,mask,transformType,transformValues
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glPathCoverDepthFuncNV (GLenum func)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPathCoverDepthFuncNV
                    ,func
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCoverFillPathNV (GLuint path,GLenum coverMode)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCoverFillPathNV
                    ,path,coverMode
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCoverStrokePathNV (GLuint path,GLenum coverMode)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCoverStrokePathNV
                    ,path,coverMode
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCoverFillPathInstancedNV (GLsizei numPaths,GLenum pathNameType,const void *paths,GLuint pathBase,GLenum coverMode,GLenum transformType,const GLfloat *transformValues)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCoverFillPathInstancedNV
                    ,numPaths,pathNameType,paths,pathBase,coverMode,transformType,transformValues
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCoverStrokePathInstancedNV (GLsizei numPaths,GLenum pathNameType,const void *paths,GLuint pathBase,GLenum coverMode,GLenum transformType,const GLfloat *transformValues)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCoverStrokePathInstancedNV
                    ,numPaths,pathNameType,paths,pathBase,coverMode,transformType,transformValues
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetPathParameterivNV (GLuint path,GLenum pname,GLint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetPathParameterivNV
                    ,path,pname,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetPathParameterfvNV (GLuint path,GLenum pname,GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetPathParameterfvNV
                    ,path,pname,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetPathCommandsNV (GLuint path,GLubyte *commands)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetPathCommandsNV
                    ,path,commands
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetPathCoordsNV (GLuint path,GLfloat *coords)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetPathCoordsNV
                    ,path,coords
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetPathDashArrayNV (GLuint path,GLfloat *dashArray)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetPathDashArrayNV
                    ,path,dashArray
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetPathMetricsNV (GLbitfield metricQueryMask,GLsizei numPaths,GLenum pathNameType,const void *paths,GLuint pathBase,GLsizei stride,GLfloat *metrics)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetPathMetricsNV
                    ,metricQueryMask,numPaths,pathNameType,paths,pathBase,stride,metrics
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetPathMetricRangeNV (GLbitfield metricQueryMask,GLuint firstPathName,GLsizei numPaths,GLsizei stride,GLfloat *metrics)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetPathMetricRangeNV
                    ,metricQueryMask,firstPathName,numPaths,stride,metrics
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetPathSpacingNV (GLenum pathListMode,GLsizei numPaths,GLenum pathNameType,const void *paths,GLuint pathBase,GLfloat advanceScale,GLfloat kerningScale,GLenum transformType,GLfloat *returnedSpacing)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetPathSpacingNV
                    ,pathListMode,numPaths,pathNameType,paths,pathBase,advanceScale,kerningScale,transformType,returnedSpacing
                    );
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsPointInFillPathNV (GLuint path,GLuint mask,GLfloat x,GLfloat y)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsPointInFillPathNV
                    ,path,mask,x,y
                    );
    return retVal;
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsPointInStrokePathNV (GLuint path,GLfloat x,GLfloat y)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsPointInStrokePathNV
                    ,path,x,y
                    );
    return retVal;
}


GLUEY_APICALL  GLfloat GLUEY_APIENTRY  glGetPathLengthNV (GLuint path,GLsizei startSegment,GLsizei numSegments)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetPathLengthNV
                    ,path,startSegment,numSegments
                    );
    return retVal;
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glPointAlongPathNV (GLuint path,GLsizei startSegment,GLsizei numSegments,GLfloat distance,GLfloat *x,GLfloat *y,GLfloat *tangentX,GLfloat *tangentY)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPointAlongPathNV
                    ,path,startSegment,numSegments,distance,x,y,tangentX,tangentY
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glMatrixLoad3x2fNV (GLenum matrixMode,const GLfloat *m)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glMatrixLoad3x2fNV
                    ,matrixMode,m
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glMatrixLoad3x3fNV (GLenum matrixMode,const GLfloat *m)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glMatrixLoad3x3fNV
                    ,matrixMode,m
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glMatrixLoadTranspose3x3fNV (GLenum matrixMode,const GLfloat *m)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glMatrixLoadTranspose3x3fNV
                    ,matrixMode,m
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glMatrixMult3x2fNV (GLenum matrixMode,const GLfloat *m)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glMatrixMult3x2fNV
                    ,matrixMode,m
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glMatrixMult3x3fNV (GLenum matrixMode,const GLfloat *m)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glMatrixMult3x3fNV
                    ,matrixMode,m
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glMatrixMultTranspose3x3fNV (GLenum matrixMode,const GLfloat *m)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glMatrixMultTranspose3x3fNV
                    ,matrixMode,m
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glStencilThenCoverFillPathNV (GLuint path,GLenum fillMode,GLuint mask,GLenum coverMode)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glStencilThenCoverFillPathNV
                    ,path,fillMode,mask,coverMode
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glStencilThenCoverStrokePathNV (GLuint path,GLint reference,GLuint mask,GLenum coverMode)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glStencilThenCoverStrokePathNV
                    ,path,reference,mask,coverMode
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glStencilThenCoverFillPathInstancedNV (GLsizei numPaths,GLenum pathNameType,const void *paths,GLuint pathBase,GLenum fillMode,GLuint mask,GLenum coverMode,GLenum transformType,const GLfloat *transformValues)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glStencilThenCoverFillPathInstancedNV
                    ,numPaths,pathNameType,paths,pathBase,fillMode,mask,coverMode,transformType,transformValues
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glStencilThenCoverStrokePathInstancedNV (GLsizei numPaths,GLenum pathNameType,const void *paths,GLuint pathBase,GLint reference,GLuint mask,GLenum coverMode,GLenum transformType,const GLfloat *transformValues)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glStencilThenCoverStrokePathInstancedNV
                    ,numPaths,pathNameType,paths,pathBase,reference,mask,coverMode,transformType,transformValues
                    );
}


GLUEY_APICALL  GLenum GLUEY_APIENTRY  glPathGlyphIndexRangeNV (GLenum fontTarget,const void *fontName,GLbitfield fontStyle,GLuint pathParameterTemplate,GLfloat emScale,GLuint baseAndCount[2])
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPathGlyphIndexRangeNV
                    ,fontTarget,fontName,fontStyle,pathParameterTemplate,emScale,baseAndCount
                    );
    return retVal;
}


GLUEY_APICALL  GLenum GLUEY_APIENTRY  glPathGlyphIndexArrayNV (GLuint firstPathName,GLenum fontTarget,const void *fontName,GLbitfield fontStyle,GLuint firstGlyphIndex,GLsizei numGlyphs,GLuint pathParameterTemplate,GLfloat emScale)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPathGlyphIndexArrayNV
                    ,firstPathName,fontTarget,fontName,fontStyle,firstGlyphIndex,numGlyphs,pathParameterTemplate,emScale
                    );
    return retVal;
}


GLUEY_APICALL  GLenum GLUEY_APIENTRY  glPathMemoryGlyphIndexArrayNV (GLuint firstPathName,GLenum fontTarget,GLsizeiptr fontSize,const void *fontData,GLsizei faceIndex,GLuint firstGlyphIndex,GLsizei numGlyphs,GLuint pathParameterTemplate,GLfloat emScale)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPathMemoryGlyphIndexArrayNV
                    ,firstPathName,fontTarget,fontSize,fontData,faceIndex,firstGlyphIndex,numGlyphs,pathParameterTemplate,emScale
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramPathFragmentInputGenNV (GLuint program,GLint location,GLenum genMode,GLint components,const GLfloat *coeffs)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramPathFragmentInputGenNV
                    ,program,location,genMode,components,coeffs
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetProgramResourcefvNV (GLuint program,GLenum programInterface,GLuint index,GLsizei propCount,const GLenum *props,GLsizei bufSize,GLsizei *length,GLfloat *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetProgramResourcefvNV
                    ,program,programInterface,index,propCount,props,bufSize,length,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glPolygonModeNV (GLenum face,GLenum mode)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPolygonModeNV
                    ,face,mode
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glReadBufferNV (GLenum mode)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glReadBufferNV
                    ,mode
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glFramebufferSampleLocationsfvNV (GLenum target,GLuint start,GLsizei count,const GLfloat *v)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFramebufferSampleLocationsfvNV
                    ,target,start,count,v
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glNamedFramebufferSampleLocationsfvNV (GLuint framebuffer,GLuint start,GLsizei count,const GLfloat *v)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glNamedFramebufferSampleLocationsfvNV
                    ,framebuffer,start,count,v
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glResolveDepthValuesNV ()
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glResolveDepthValuesNV
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glViewportArrayvNV (GLuint first,GLsizei count,const GLfloat *v)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glViewportArrayvNV
                    ,first,count,v
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glViewportIndexedfNV (GLuint index,GLfloat x,GLfloat y,GLfloat w,GLfloat h)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glViewportIndexedfNV
                    ,index,x,y,w,h
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glViewportIndexedfvNV (GLuint index,const GLfloat *v)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glViewportIndexedfvNV
                    ,index,v
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glScissorArrayvNV (GLuint first,GLsizei count,const GLint *v)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glScissorArrayvNV
                    ,first,count,v
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glScissorIndexedNV (GLuint index,GLint left,GLint bottom,GLsizei width,GLsizei height)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glScissorIndexedNV
                    ,index,left,bottom,width,height
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glScissorIndexedvNV (GLuint index,const GLint *v)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glScissorIndexedvNV
                    ,index,v
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDepthRangeArrayfvNV (GLuint first,GLsizei count,const GLfloat *v)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDepthRangeArrayfvNV
                    ,first,count,v
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDepthRangeIndexedfNV (GLuint index,GLfloat n,GLfloat f)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDepthRangeIndexedfNV
                    ,index,n,f
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetFloati_vNV (GLenum target,GLuint index,GLfloat *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetFloati_vNV
                    ,target,index,data
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glEnableiNV (GLenum target,GLuint index)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glEnableiNV
                    ,target,index
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDisableiNV (GLenum target,GLuint index)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDisableiNV
                    ,target,index
                    );
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsEnablediNV (GLenum target,GLuint index)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsEnablediNV
                    ,target,index
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glViewportSwizzleNV (GLuint index,GLenum swizzlex,GLenum swizzley,GLenum swizzlez,GLenum swizzlew)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glViewportSwizzleNV
                    ,index,swizzlex,swizzley,swizzlez,swizzlew
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glFramebufferTextureMultiviewOVR (GLenum target,GLenum attachment,GLuint texture,GLint level,GLint baseViewIndex,GLsizei numViews)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFramebufferTextureMultiviewOVR
                    ,target,attachment,texture,level,baseViewIndex,numViews
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glFramebufferTextureMultisampleMultiviewOVR (GLenum target,GLenum attachment,GLuint texture,GLint level,GLsizei samples,GLint baseViewIndex,GLsizei numViews)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFramebufferTextureMultisampleMultiviewOVR
                    ,target,attachment,texture,level,samples,baseViewIndex,numViews
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glAlphaFuncQCOM (GLenum func,GLclampf ref)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glAlphaFuncQCOM
                    ,func,ref
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetDriverControlsQCOM (GLint *num,GLsizei size,GLuint *driverControls)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetDriverControlsQCOM
                    ,num,size,driverControls
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetDriverControlStringQCOM (GLuint driverControl,GLsizei bufSize,GLsizei *length,GLchar *driverControlString)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetDriverControlStringQCOM
                    ,driverControl,bufSize,length,driverControlString
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glEnableDriverControlQCOM (GLuint driverControl)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glEnableDriverControlQCOM
                    ,driverControl
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDisableDriverControlQCOM (GLuint driverControl)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDisableDriverControlQCOM
                    ,driverControl
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glExtGetTexturesQCOM (GLuint *textures,GLint maxTextures,GLint *numTextures)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glExtGetTexturesQCOM
                    ,textures,maxTextures,numTextures
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glExtGetBuffersQCOM (GLuint *buffers,GLint maxBuffers,GLint *numBuffers)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glExtGetBuffersQCOM
                    ,buffers,maxBuffers,numBuffers
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glExtGetRenderbuffersQCOM (GLuint *renderbuffers,GLint maxRenderbuffers,GLint *numRenderbuffers)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glExtGetRenderbuffersQCOM
                    ,renderbuffers,maxRenderbuffers,numRenderbuffers
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glExtGetFramebuffersQCOM (GLuint *framebuffers,GLint maxFramebuffers,GLint *numFramebuffers)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glExtGetFramebuffersQCOM
                    ,framebuffers,maxFramebuffers,numFramebuffers
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glExtGetTexLevelParameterivQCOM (GLuint texture,GLenum face,GLint level,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glExtGetTexLevelParameterivQCOM
                    ,texture,face,level,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glExtTexObjectStateOverrideiQCOM (GLenum target,GLenum pname,GLint param)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glExtTexObjectStateOverrideiQCOM
                    ,target,pname,param
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glExtGetTexSubImageQCOM (GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLenum type,void *texels)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glExtGetTexSubImageQCOM
                    ,target,level,xoffset,yoffset,zoffset,width,height,depth,format,type,texels
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glExtGetBufferPointervQCOM (GLenum target,void **params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glExtGetBufferPointervQCOM
                    ,target,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glExtGetShadersQCOM (GLuint *shaders,GLint maxShaders,GLint *numShaders)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glExtGetShadersQCOM
                    ,shaders,maxShaders,numShaders
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glExtGetProgramsQCOM (GLuint *programs,GLint maxPrograms,GLint *numPrograms)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glExtGetProgramsQCOM
                    ,programs,maxPrograms,numPrograms
                    );
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glExtIsProgramBinaryQCOM (GLuint program)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glExtIsProgramBinaryQCOM
                    ,program
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glExtGetProgramBinarySourceQCOM (GLuint program,GLenum shadertype,GLchar *source,GLint *length)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glExtGetProgramBinarySourceQCOM
                    ,program,shadertype,source,length
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glStartTilingQCOM (GLuint x,GLuint y,GLuint width,GLuint height,GLbitfield preserveMask)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glStartTilingQCOM
                    ,x,y,width,height,preserveMask
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glEndTilingQCOM (GLbitfield preserveMask)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glEndTilingQCOM
                    ,preserveMask
                    );
}

