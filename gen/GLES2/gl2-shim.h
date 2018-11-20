/* API: gles2
 * Profile: common
 * Versions considered: 2\.[0-9]
 * Versions emitted: .*
 * Default extensions included: None
 * Additional extensions included: _nomatch_^
 * Extensions removed: _nomatch_^
 */

GLUEY_APICALL  void GLUEY_APIENTRY  glActiveTexture (GLenum texture)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glActiveTexture
                    ,texture
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glAttachShader (GLuint program,GLuint shader)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glAttachShader
                    ,program,shader
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBindAttribLocation (GLuint program,GLuint index,const GLchar *name)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBindAttribLocation
                    ,program,index,name
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBindBuffer (GLenum target,GLuint buffer)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBindBuffer
                    ,target,buffer
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBindFramebuffer (GLenum target,GLuint framebuffer)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBindFramebuffer
                    ,target,framebuffer
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBindRenderbuffer (GLenum target,GLuint renderbuffer)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBindRenderbuffer
                    ,target,renderbuffer
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBindTexture (GLenum target,GLuint texture)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBindTexture
                    ,target,texture
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBlendColor (GLfloat red,GLfloat green,GLfloat blue,GLfloat alpha)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBlendColor
                    ,red,green,blue,alpha
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBlendEquation (GLenum mode)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBlendEquation
                    ,mode
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBlendEquationSeparate (GLenum modeRGB,GLenum modeAlpha)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBlendEquationSeparate
                    ,modeRGB,modeAlpha
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBlendFunc (GLenum sfactor,GLenum dfactor)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBlendFunc
                    ,sfactor,dfactor
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBlendFuncSeparate (GLenum sfactorRGB,GLenum dfactorRGB,GLenum sfactorAlpha,GLenum dfactorAlpha)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBlendFuncSeparate
                    ,sfactorRGB,dfactorRGB,sfactorAlpha,dfactorAlpha
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBufferData (GLenum target,GLsizeiptr size,const void *data,GLenum usage)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBufferData
                    ,target,size,data,usage
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBufferSubData (GLenum target,GLintptr offset,GLsizeiptr size,const void *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBufferSubData
                    ,target,offset,size,data
                    );
}


GLUEY_APICALL  GLenum GLUEY_APIENTRY  glCheckFramebufferStatus (GLenum target)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCheckFramebufferStatus
                    ,target
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glClear (GLbitfield mask)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glClear
                    ,mask
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glClearColor (GLfloat red,GLfloat green,GLfloat blue,GLfloat alpha)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glClearColor
                    ,red,green,blue,alpha
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glClearDepthf (GLfloat d)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glClearDepthf
                    ,d
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glClearStencil (GLint s)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glClearStencil
                    ,s
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glColorMask (GLboolean red,GLboolean green,GLboolean blue,GLboolean alpha)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glColorMask
                    ,red,green,blue,alpha
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCompileShader (GLuint shader)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCompileShader
                    ,shader
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCompressedTexImage2D (GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLint border,GLsizei imageSize,const void *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCompressedTexImage2D
                    ,target,level,internalformat,width,height,border,imageSize,data
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCompressedTexSubImage2D (GLenum target,GLint level,GLint xoffset,GLint yoffset,GLsizei width,GLsizei height,GLenum format,GLsizei imageSize,const void *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCompressedTexSubImage2D
                    ,target,level,xoffset,yoffset,width,height,format,imageSize,data
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCopyTexImage2D (GLenum target,GLint level,GLenum internalformat,GLint x,GLint y,GLsizei width,GLsizei height,GLint border)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCopyTexImage2D
                    ,target,level,internalformat,x,y,width,height,border
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCopyTexSubImage2D (GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint x,GLint y,GLsizei width,GLsizei height)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCopyTexSubImage2D
                    ,target,level,xoffset,yoffset,x,y,width,height
                    );
}


GLUEY_APICALL  GLuint GLUEY_APIENTRY  glCreateProgram ()
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCreateProgram
                    );
    return retVal;
}


GLUEY_APICALL  GLuint GLUEY_APIENTRY  glCreateShader (GLenum type)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCreateShader
                    ,type
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCullFace (GLenum mode)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCullFace
                    ,mode
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDeleteBuffers (GLsizei n,const GLuint *buffers)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDeleteBuffers
                    ,n,buffers
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDeleteFramebuffers (GLsizei n,const GLuint *framebuffers)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDeleteFramebuffers
                    ,n,framebuffers
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDeleteProgram (GLuint program)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDeleteProgram
                    ,program
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDeleteRenderbuffers (GLsizei n,const GLuint *renderbuffers)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDeleteRenderbuffers
                    ,n,renderbuffers
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDeleteShader (GLuint shader)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDeleteShader
                    ,shader
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDeleteTextures (GLsizei n,const GLuint *textures)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDeleteTextures
                    ,n,textures
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDepthFunc (GLenum func)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDepthFunc
                    ,func
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDepthMask (GLboolean flag)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDepthMask
                    ,flag
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDepthRangef (GLfloat n,GLfloat f)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDepthRangef
                    ,n,f
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDetachShader (GLuint program,GLuint shader)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDetachShader
                    ,program,shader
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDisable (GLenum cap)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDisable
                    ,cap
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDisableVertexAttribArray (GLuint index)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDisableVertexAttribArray
                    ,index
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawArrays (GLenum mode,GLint first,GLsizei count)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawArrays
                    ,mode,first,count
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawElements (GLenum mode,GLsizei count,GLenum type,const void *indices)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawElements
                    ,mode,count,type,indices
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glEnable (GLenum cap)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glEnable
                    ,cap
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glEnableVertexAttribArray (GLuint index)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glEnableVertexAttribArray
                    ,index
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glFinish ()
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFinish
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glFlush ()
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFlush
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glFramebufferRenderbuffer (GLenum target,GLenum attachment,GLenum renderbuffertarget,GLuint renderbuffer)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFramebufferRenderbuffer
                    ,target,attachment,renderbuffertarget,renderbuffer
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glFramebufferTexture2D (GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFramebufferTexture2D
                    ,target,attachment,textarget,texture,level
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glFrontFace (GLenum mode)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFrontFace
                    ,mode
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGenBuffers (GLsizei n,GLuint *buffers)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGenBuffers
                    ,n,buffers
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGenerateMipmap (GLenum target)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGenerateMipmap
                    ,target
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGenFramebuffers (GLsizei n,GLuint *framebuffers)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGenFramebuffers
                    ,n,framebuffers
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGenRenderbuffers (GLsizei n,GLuint *renderbuffers)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGenRenderbuffers
                    ,n,renderbuffers
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGenTextures (GLsizei n,GLuint *textures)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGenTextures
                    ,n,textures
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetActiveAttrib (GLuint program,GLuint index,GLsizei bufSize,GLsizei *length,GLint *size,GLenum *type,GLchar *name)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetActiveAttrib
                    ,program,index,bufSize,length,size,type,name
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetActiveUniform (GLuint program,GLuint index,GLsizei bufSize,GLsizei *length,GLint *size,GLenum *type,GLchar *name)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetActiveUniform
                    ,program,index,bufSize,length,size,type,name
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetAttachedShaders (GLuint program,GLsizei maxCount,GLsizei *count,GLuint *shaders)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetAttachedShaders
                    ,program,maxCount,count,shaders
                    );
}


GLUEY_APICALL  GLint GLUEY_APIENTRY  glGetAttribLocation (GLuint program,const GLchar *name)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetAttribLocation
                    ,program,name
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetBooleanv (GLenum pname,GLboolean *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetBooleanv
                    ,pname,data
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetBufferParameteriv (GLenum target,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetBufferParameteriv
                    ,target,pname,params
                    );
}


GLUEY_APICALL  GLenum GLUEY_APIENTRY  glGetError ()
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetError
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetFloatv (GLenum pname,GLfloat *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetFloatv
                    ,pname,data
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetFramebufferAttachmentParameteriv (GLenum target,GLenum attachment,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetFramebufferAttachmentParameteriv
                    ,target,attachment,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetIntegerv (GLenum pname,GLint *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetIntegerv
                    ,pname,data
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetProgramiv (GLuint program,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetProgramiv
                    ,program,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetProgramInfoLog (GLuint program,GLsizei bufSize,GLsizei *length,GLchar *infoLog)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetProgramInfoLog
                    ,program,bufSize,length,infoLog
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetRenderbufferParameteriv (GLenum target,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetRenderbufferParameteriv
                    ,target,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetShaderiv (GLuint shader,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetShaderiv
                    ,shader,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetShaderInfoLog (GLuint shader,GLsizei bufSize,GLsizei *length,GLchar *infoLog)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetShaderInfoLog
                    ,shader,bufSize,length,infoLog
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetShaderPrecisionFormat (GLenum shadertype,GLenum precisiontype,GLint *range,GLint *precision)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetShaderPrecisionFormat
                    ,shadertype,precisiontype,range,precision
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetShaderSource (GLuint shader,GLsizei bufSize,GLsizei *length,GLchar *source)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetShaderSource
                    ,shader,bufSize,length,source
                    );
}


GLUEY_APICALL  const GLubyte* GLUEY_APIENTRY  glGetString (GLenum name)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetString
                    ,name
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetTexParameterfv (GLenum target,GLenum pname,GLfloat *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetTexParameterfv
                    ,target,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetTexParameteriv (GLenum target,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetTexParameteriv
                    ,target,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetUniformfv (GLuint program,GLint location,GLfloat *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetUniformfv
                    ,program,location,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetUniformiv (GLuint program,GLint location,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetUniformiv
                    ,program,location,params
                    );
}


GLUEY_APICALL  GLint GLUEY_APIENTRY  glGetUniformLocation (GLuint program,const GLchar *name)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetUniformLocation
                    ,program,name
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetVertexAttribfv (GLuint index,GLenum pname,GLfloat *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetVertexAttribfv
                    ,index,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetVertexAttribiv (GLuint index,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetVertexAttribiv
                    ,index,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetVertexAttribPointerv (GLuint index,GLenum pname,void **pointer)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetVertexAttribPointerv
                    ,index,pname,pointer
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glHint (GLenum target,GLenum mode)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glHint
                    ,target,mode
                    );
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsBuffer (GLuint buffer)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsBuffer
                    ,buffer
                    );
    return retVal;
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsEnabled (GLenum cap)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsEnabled
                    ,cap
                    );
    return retVal;
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsFramebuffer (GLuint framebuffer)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsFramebuffer
                    ,framebuffer
                    );
    return retVal;
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsProgram (GLuint program)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsProgram
                    ,program
                    );
    return retVal;
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsRenderbuffer (GLuint renderbuffer)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsRenderbuffer
                    ,renderbuffer
                    );
    return retVal;
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsShader (GLuint shader)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsShader
                    ,shader
                    );
    return retVal;
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsTexture (GLuint texture)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsTexture
                    ,texture
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glLineWidth (GLfloat width)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glLineWidth
                    ,width
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glLinkProgram (GLuint program)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glLinkProgram
                    ,program
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glPixelStorei (GLenum pname,GLint param)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPixelStorei
                    ,pname,param
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glPolygonOffset (GLfloat factor,GLfloat units)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPolygonOffset
                    ,factor,units
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glReadPixels (GLint x,GLint y,GLsizei width,GLsizei height,GLenum format,GLenum type,void *pixels)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glReadPixels
                    ,x,y,width,height,format,type,pixels
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glReleaseShaderCompiler ()
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glReleaseShaderCompiler
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glRenderbufferStorage (GLenum target,GLenum internalformat,GLsizei width,GLsizei height)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glRenderbufferStorage
                    ,target,internalformat,width,height
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glSampleCoverage (GLfloat value,GLboolean invert)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glSampleCoverage
                    ,value,invert
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glScissor (GLint x,GLint y,GLsizei width,GLsizei height)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glScissor
                    ,x,y,width,height
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glShaderBinary (GLsizei count,const GLuint *shaders,GLenum binaryformat,const void *binary,GLsizei length)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glShaderBinary
                    ,count,shaders,binaryformat,binary,length
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glShaderSource (GLuint shader,GLsizei count,const GLchar *const*string,const GLint *length)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glShaderSource
                    ,shader,count,string,length
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glStencilFunc (GLenum func,GLint ref,GLuint mask)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glStencilFunc
                    ,func,ref,mask
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glStencilFuncSeparate (GLenum face,GLenum func,GLint ref,GLuint mask)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glStencilFuncSeparate
                    ,face,func,ref,mask
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glStencilMask (GLuint mask)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glStencilMask
                    ,mask
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glStencilMaskSeparate (GLenum face,GLuint mask)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glStencilMaskSeparate
                    ,face,mask
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glStencilOp (GLenum fail,GLenum zfail,GLenum zpass)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glStencilOp
                    ,fail,zfail,zpass
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glStencilOpSeparate (GLenum face,GLenum sfail,GLenum dpfail,GLenum dppass)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glStencilOpSeparate
                    ,face,sfail,dpfail,dppass
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexImage2D (GLenum target,GLint level,GLint internalformat,GLsizei width,GLsizei height,GLint border,GLenum format,GLenum type,const void *pixels)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexImage2D
                    ,target,level,internalformat,width,height,border,format,type,pixels
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexParameterf (GLenum target,GLenum pname,GLfloat param)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexParameterf
                    ,target,pname,param
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexParameterfv (GLenum target,GLenum pname,const GLfloat *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexParameterfv
                    ,target,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexParameteri (GLenum target,GLenum pname,GLint param)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexParameteri
                    ,target,pname,param
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexParameteriv (GLenum target,GLenum pname,const GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexParameteriv
                    ,target,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexSubImage2D (GLenum target,GLint level,GLint xoffset,GLint yoffset,GLsizei width,GLsizei height,GLenum format,GLenum type,const void *pixels)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexSubImage2D
                    ,target,level,xoffset,yoffset,width,height,format,type,pixels
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform1f (GLint location,GLfloat v0)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform1f
                    ,location,v0
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform1fv (GLint location,GLsizei count,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform1fv
                    ,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform1i (GLint location,GLint v0)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform1i
                    ,location,v0
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform1iv (GLint location,GLsizei count,const GLint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform1iv
                    ,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform2f (GLint location,GLfloat v0,GLfloat v1)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform2f
                    ,location,v0,v1
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform2fv (GLint location,GLsizei count,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform2fv
                    ,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform2i (GLint location,GLint v0,GLint v1)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform2i
                    ,location,v0,v1
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform2iv (GLint location,GLsizei count,const GLint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform2iv
                    ,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform3f (GLint location,GLfloat v0,GLfloat v1,GLfloat v2)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform3f
                    ,location,v0,v1,v2
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform3fv (GLint location,GLsizei count,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform3fv
                    ,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform3i (GLint location,GLint v0,GLint v1,GLint v2)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform3i
                    ,location,v0,v1,v2
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform3iv (GLint location,GLsizei count,const GLint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform3iv
                    ,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform4f (GLint location,GLfloat v0,GLfloat v1,GLfloat v2,GLfloat v3)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform4f
                    ,location,v0,v1,v2,v3
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform4fv (GLint location,GLsizei count,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform4fv
                    ,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform4i (GLint location,GLint v0,GLint v1,GLint v2,GLint v3)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform4i
                    ,location,v0,v1,v2,v3
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform4iv (GLint location,GLsizei count,const GLint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform4iv
                    ,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniformMatrix2fv (GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniformMatrix2fv
                    ,location,count,transpose,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniformMatrix3fv (GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniformMatrix3fv
                    ,location,count,transpose,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniformMatrix4fv (GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniformMatrix4fv
                    ,location,count,transpose,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUseProgram (GLuint program)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUseProgram
                    ,program
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glValidateProgram (GLuint program)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glValidateProgram
                    ,program
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttrib1f (GLuint index,GLfloat x)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttrib1f
                    ,index,x
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttrib1fv (GLuint index,const GLfloat *v)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttrib1fv
                    ,index,v
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttrib2f (GLuint index,GLfloat x,GLfloat y)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttrib2f
                    ,index,x,y
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttrib2fv (GLuint index,const GLfloat *v)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttrib2fv
                    ,index,v
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttrib3f (GLuint index,GLfloat x,GLfloat y,GLfloat z)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttrib3f
                    ,index,x,y,z
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttrib3fv (GLuint index,const GLfloat *v)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttrib3fv
                    ,index,v
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttrib4f (GLuint index,GLfloat x,GLfloat y,GLfloat z,GLfloat w)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttrib4f
                    ,index,x,y,z,w
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttrib4fv (GLuint index,const GLfloat *v)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttrib4fv
                    ,index,v
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttribPointer (GLuint index,GLint size,GLenum type,GLboolean normalized,GLsizei stride,const void *pointer)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttribPointer
                    ,index,size,type,normalized,stride,pointer
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glViewport (GLint x,GLint y,GLsizei width,GLsizei height)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glViewport
                    ,x,y,width,height
                    );
}

