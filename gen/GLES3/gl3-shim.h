/* API: gles2
 * Profile: common
 * Versions considered: 2\.[0-9]|3\.0
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


GLUEY_APICALL  void GLUEY_APIENTRY  glReadBuffer (GLenum src)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glReadBuffer
                    ,src
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawRangeElements (GLenum mode,GLuint start,GLuint end,GLsizei count,GLenum type,const void *indices)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawRangeElements
                    ,mode,start,end,count,type,indices
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexImage3D (GLenum target,GLint level,GLint internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLenum format,GLenum type,const void *pixels)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexImage3D
                    ,target,level,internalformat,width,height,depth,border,format,type,pixels
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexSubImage3D (GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLenum type,const void *pixels)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexSubImage3D
                    ,target,level,xoffset,yoffset,zoffset,width,height,depth,format,type,pixels
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCopyTexSubImage3D (GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLint x,GLint y,GLsizei width,GLsizei height)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCopyTexSubImage3D
                    ,target,level,xoffset,yoffset,zoffset,x,y,width,height
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCompressedTexImage3D (GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLsizei imageSize,const void *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCompressedTexImage3D
                    ,target,level,internalformat,width,height,depth,border,imageSize,data
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCompressedTexSubImage3D (GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLsizei imageSize,const void *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCompressedTexSubImage3D
                    ,target,level,xoffset,yoffset,zoffset,width,height,depth,format,imageSize,data
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGenQueries (GLsizei n,GLuint *ids)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGenQueries
                    ,n,ids
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDeleteQueries (GLsizei n,const GLuint *ids)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDeleteQueries
                    ,n,ids
                    );
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsQuery (GLuint id)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsQuery
                    ,id
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBeginQuery (GLenum target,GLuint id)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBeginQuery
                    ,target,id
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glEndQuery (GLenum target)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glEndQuery
                    ,target
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetQueryiv (GLenum target,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetQueryiv
                    ,target,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetQueryObjectuiv (GLuint id,GLenum pname,GLuint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetQueryObjectuiv
                    ,id,pname,params
                    );
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glUnmapBuffer (GLenum target)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUnmapBuffer
                    ,target
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetBufferPointerv (GLenum target,GLenum pname,void **params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetBufferPointerv
                    ,target,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawBuffers (GLsizei n,const GLenum *bufs)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawBuffers
                    ,n,bufs
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniformMatrix2x3fv (GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniformMatrix2x3fv
                    ,location,count,transpose,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniformMatrix3x2fv (GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniformMatrix3x2fv
                    ,location,count,transpose,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniformMatrix2x4fv (GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniformMatrix2x4fv
                    ,location,count,transpose,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniformMatrix4x2fv (GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniformMatrix4x2fv
                    ,location,count,transpose,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniformMatrix3x4fv (GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniformMatrix3x4fv
                    ,location,count,transpose,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniformMatrix4x3fv (GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniformMatrix4x3fv
                    ,location,count,transpose,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBlitFramebuffer (GLint srcX0,GLint srcY0,GLint srcX1,GLint srcY1,GLint dstX0,GLint dstY0,GLint dstX1,GLint dstY1,GLbitfield mask,GLenum filter)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBlitFramebuffer
                    ,srcX0,srcY0,srcX1,srcY1,dstX0,dstY0,dstX1,dstY1,mask,filter
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glRenderbufferStorageMultisample (GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glRenderbufferStorageMultisample
                    ,target,samples,internalformat,width,height
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glFramebufferTextureLayer (GLenum target,GLenum attachment,GLuint texture,GLint level,GLint layer)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFramebufferTextureLayer
                    ,target,attachment,texture,level,layer
                    );
}


GLUEY_APICALL  void * GLUEY_APIENTRY  glMapBufferRange (GLenum target,GLintptr offset,GLsizeiptr length,GLbitfield access)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glMapBufferRange
                    ,target,offset,length,access
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glFlushMappedBufferRange (GLenum target,GLintptr offset,GLsizeiptr length)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFlushMappedBufferRange
                    ,target,offset,length
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBindVertexArray (GLuint array)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBindVertexArray
                    ,array
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDeleteVertexArrays (GLsizei n,const GLuint *arrays)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDeleteVertexArrays
                    ,n,arrays
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGenVertexArrays (GLsizei n,GLuint *arrays)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGenVertexArrays
                    ,n,arrays
                    );
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsVertexArray (GLuint array)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsVertexArray
                    ,array
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetIntegeri_v (GLenum target,GLuint index,GLint *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetIntegeri_v
                    ,target,index,data
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBeginTransformFeedback (GLenum primitiveMode)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBeginTransformFeedback
                    ,primitiveMode
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glEndTransformFeedback ()
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glEndTransformFeedback
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBindBufferRange (GLenum target,GLuint index,GLuint buffer,GLintptr offset,GLsizeiptr size)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBindBufferRange
                    ,target,index,buffer,offset,size
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBindBufferBase (GLenum target,GLuint index,GLuint buffer)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBindBufferBase
                    ,target,index,buffer
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTransformFeedbackVaryings (GLuint program,GLsizei count,const GLchar *const*varyings,GLenum bufferMode)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTransformFeedbackVaryings
                    ,program,count,varyings,bufferMode
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetTransformFeedbackVarying (GLuint program,GLuint index,GLsizei bufSize,GLsizei *length,GLsizei *size,GLenum *type,GLchar *name)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetTransformFeedbackVarying
                    ,program,index,bufSize,length,size,type,name
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttribIPointer (GLuint index,GLint size,GLenum type,GLsizei stride,const void *pointer)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttribIPointer
                    ,index,size,type,stride,pointer
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetVertexAttribIiv (GLuint index,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetVertexAttribIiv
                    ,index,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetVertexAttribIuiv (GLuint index,GLenum pname,GLuint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetVertexAttribIuiv
                    ,index,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttribI4i (GLuint index,GLint x,GLint y,GLint z,GLint w)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttribI4i
                    ,index,x,y,z,w
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttribI4ui (GLuint index,GLuint x,GLuint y,GLuint z,GLuint w)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttribI4ui
                    ,index,x,y,z,w
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttribI4iv (GLuint index,const GLint *v)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttribI4iv
                    ,index,v
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttribI4uiv (GLuint index,const GLuint *v)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttribI4uiv
                    ,index,v
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetUniformuiv (GLuint program,GLint location,GLuint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetUniformuiv
                    ,program,location,params
                    );
}


GLUEY_APICALL  GLint GLUEY_APIENTRY  glGetFragDataLocation (GLuint program,const GLchar *name)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetFragDataLocation
                    ,program,name
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform1ui (GLint location,GLuint v0)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform1ui
                    ,location,v0
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform2ui (GLint location,GLuint v0,GLuint v1)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform2ui
                    ,location,v0,v1
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform3ui (GLint location,GLuint v0,GLuint v1,GLuint v2)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform3ui
                    ,location,v0,v1,v2
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform4ui (GLint location,GLuint v0,GLuint v1,GLuint v2,GLuint v3)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform4ui
                    ,location,v0,v1,v2,v3
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform1uiv (GLint location,GLsizei count,const GLuint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform1uiv
                    ,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform2uiv (GLint location,GLsizei count,const GLuint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform2uiv
                    ,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform3uiv (GLint location,GLsizei count,const GLuint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform3uiv
                    ,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform4uiv (GLint location,GLsizei count,const GLuint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform4uiv
                    ,location,count,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glClearBufferiv (GLenum buffer,GLint drawbuffer,const GLint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glClearBufferiv
                    ,buffer,drawbuffer,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glClearBufferuiv (GLenum buffer,GLint drawbuffer,const GLuint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glClearBufferuiv
                    ,buffer,drawbuffer,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glClearBufferfv (GLenum buffer,GLint drawbuffer,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glClearBufferfv
                    ,buffer,drawbuffer,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glClearBufferfi (GLenum buffer,GLint drawbuffer,GLfloat depth,GLint stencil)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glClearBufferfi
                    ,buffer,drawbuffer,depth,stencil
                    );
}


GLUEY_APICALL  const GLubyte* GLUEY_APIENTRY  glGetStringi (GLenum name,GLuint index)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetStringi
                    ,name,index
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCopyBufferSubData (GLenum readTarget,GLenum writeTarget,GLintptr readOffset,GLintptr writeOffset,GLsizeiptr size)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCopyBufferSubData
                    ,readTarget,writeTarget,readOffset,writeOffset,size
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetUniformIndices (GLuint program,GLsizei uniformCount,const GLchar *const*uniformNames,GLuint *uniformIndices)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetUniformIndices
                    ,program,uniformCount,uniformNames,uniformIndices
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetActiveUniformsiv (GLuint program,GLsizei uniformCount,const GLuint *uniformIndices,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetActiveUniformsiv
                    ,program,uniformCount,uniformIndices,pname,params
                    );
}


GLUEY_APICALL  GLuint GLUEY_APIENTRY  glGetUniformBlockIndex (GLuint program,const GLchar *uniformBlockName)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetUniformBlockIndex
                    ,program,uniformBlockName
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetActiveUniformBlockiv (GLuint program,GLuint uniformBlockIndex,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetActiveUniformBlockiv
                    ,program,uniformBlockIndex,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetActiveUniformBlockName (GLuint program,GLuint uniformBlockIndex,GLsizei bufSize,GLsizei *length,GLchar *uniformBlockName)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetActiveUniformBlockName
                    ,program,uniformBlockIndex,bufSize,length,uniformBlockName
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniformBlockBinding (GLuint program,GLuint uniformBlockIndex,GLuint uniformBlockBinding)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniformBlockBinding
                    ,program,uniformBlockIndex,uniformBlockBinding
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawArraysInstanced (GLenum mode,GLint first,GLsizei count,GLsizei instancecount)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawArraysInstanced
                    ,mode,first,count,instancecount
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawElementsInstanced (GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei instancecount)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawElementsInstanced
                    ,mode,count,type,indices,instancecount
                    );
}


GLUEY_APICALL  GLsync GLUEY_APIENTRY  glFenceSync (GLenum condition,GLbitfield flags)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFenceSync
                    ,condition,flags
                    );
    return retVal;
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsSync (GLsync sync)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsSync
                    ,sync
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDeleteSync (GLsync sync)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDeleteSync
                    ,sync
                    );
}


GLUEY_APICALL  GLenum GLUEY_APIENTRY  glClientWaitSync (GLsync sync,GLbitfield flags,GLuint64 timeout)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glClientWaitSync
                    ,sync,flags,timeout
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glWaitSync (GLsync sync,GLbitfield flags,GLuint64 timeout)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glWaitSync
                    ,sync,flags,timeout
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetInteger64v (GLenum pname,GLint64 *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetInteger64v
                    ,pname,data
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetSynciv (GLsync sync,GLenum pname,GLsizei bufSize,GLsizei *length,GLint *values)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetSynciv
                    ,sync,pname,bufSize,length,values
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetInteger64i_v (GLenum target,GLuint index,GLint64 *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetInteger64i_v
                    ,target,index,data
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetBufferParameteri64v (GLenum target,GLenum pname,GLint64 *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetBufferParameteri64v
                    ,target,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGenSamplers (GLsizei count,GLuint *samplers)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGenSamplers
                    ,count,samplers
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDeleteSamplers (GLsizei count,const GLuint *samplers)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDeleteSamplers
                    ,count,samplers
                    );
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsSampler (GLuint sampler)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsSampler
                    ,sampler
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBindSampler (GLuint unit,GLuint sampler)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBindSampler
                    ,unit,sampler
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glSamplerParameteri (GLuint sampler,GLenum pname,GLint param)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glSamplerParameteri
                    ,sampler,pname,param
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glSamplerParameteriv (GLuint sampler,GLenum pname,const GLint *param)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glSamplerParameteriv
                    ,sampler,pname,param
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glSamplerParameterf (GLuint sampler,GLenum pname,GLfloat param)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glSamplerParameterf
                    ,sampler,pname,param
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glSamplerParameterfv (GLuint sampler,GLenum pname,const GLfloat *param)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glSamplerParameterfv
                    ,sampler,pname,param
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetSamplerParameteriv (GLuint sampler,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetSamplerParameteriv
                    ,sampler,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetSamplerParameterfv (GLuint sampler,GLenum pname,GLfloat *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetSamplerParameterfv
                    ,sampler,pname,params
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttribDivisor (GLuint index,GLuint divisor)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttribDivisor
                    ,index,divisor
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBindTransformFeedback (GLenum target,GLuint id)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBindTransformFeedback
                    ,target,id
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDeleteTransformFeedbacks (GLsizei n,const GLuint *ids)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDeleteTransformFeedbacks
                    ,n,ids
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGenTransformFeedbacks (GLsizei n,GLuint *ids)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGenTransformFeedbacks
                    ,n,ids
                    );
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsTransformFeedback (GLuint id)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsTransformFeedback
                    ,id
                    );
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glPauseTransformFeedback ()
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPauseTransformFeedback
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glResumeTransformFeedback ()
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glResumeTransformFeedback
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetProgramBinary (GLuint program,GLsizei bufSize,GLsizei *length,GLenum *binaryFormat,void *binary)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetProgramBinary
                    ,program,bufSize,length,binaryFormat,binary
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramBinary (GLuint program,GLenum binaryFormat,const void *binary,GLsizei length)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramBinary
                    ,program,binaryFormat,binary,length
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramParameteri (GLuint program,GLenum pname,GLint value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramParameteri
                    ,program,pname,value
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glInvalidateFramebuffer (GLenum target,GLsizei numAttachments,const GLenum *attachments)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glInvalidateFramebuffer
                    ,target,numAttachments,attachments
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glInvalidateSubFramebuffer (GLenum target,GLsizei numAttachments,const GLenum *attachments,GLint x,GLint y,GLsizei width,GLsizei height)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glInvalidateSubFramebuffer
                    ,target,numAttachments,attachments,x,y,width,height
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexStorage2D (GLenum target,GLsizei levels,GLenum internalformat,GLsizei width,GLsizei height)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexStorage2D
                    ,target,levels,internalformat,width,height
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexStorage3D (GLenum target,GLsizei levels,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexStorage3D
                    ,target,levels,internalformat,width,height,depth
                    );
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetInternalformativ (GLenum target,GLenum internalformat,GLenum pname,GLsizei bufSize,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetInternalformativ
                    ,target,internalformat,pname,bufSize,params
                    );
}

