/* API: gles2
 * Profile: common
 * Versions considered: 2\.[0-9]|3\.[01]
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
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glAttachShader (GLuint program,GLuint shader)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glAttachShader
                    ,program,shader
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBindAttribLocation (GLuint program,GLuint index,const GLchar *name)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBindAttribLocation
                    ,program,index,name
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBindBuffer (GLenum target,GLuint buffer)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBindBuffer
                    ,target,buffer
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBindFramebuffer (GLenum target,GLuint framebuffer)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBindFramebuffer
                    ,target,framebuffer
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBindRenderbuffer (GLenum target,GLuint renderbuffer)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBindRenderbuffer
                    ,target,renderbuffer
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBindTexture (GLenum target,GLuint texture)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBindTexture
                    ,target,texture
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBlendColor (GLfloat red,GLfloat green,GLfloat blue,GLfloat alpha)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBlendColor
                    ,red,green,blue,alpha
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBlendEquation (GLenum mode)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBlendEquation
                    ,mode
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBlendEquationSeparate (GLenum modeRGB,GLenum modeAlpha)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBlendEquationSeparate
                    ,modeRGB,modeAlpha
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBlendFunc (GLenum sfactor,GLenum dfactor)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBlendFunc
                    ,sfactor,dfactor
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBlendFuncSeparate (GLenum sfactorRGB,GLenum dfactorRGB,GLenum sfactorAlpha,GLenum dfactorAlpha)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBlendFuncSeparate
                    ,sfactorRGB,dfactorRGB,sfactorAlpha,dfactorAlpha
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBufferData (GLenum target,GLsizeiptr size,const void *data,GLenum usage)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBufferData
                    ,target,size,data,usage
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBufferSubData (GLenum target,GLintptr offset,GLsizeiptr size,const void *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBufferSubData
                    ,target,offset,size,data
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  GLenum GLUEY_APIENTRY  glCheckFramebufferStatus (GLenum target)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCheckFramebufferStatus
                    ,target
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glClear (GLbitfield mask)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glClear
                    ,mask
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glClearColor (GLfloat red,GLfloat green,GLfloat blue,GLfloat alpha)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glClearColor
                    ,red,green,blue,alpha
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glClearDepthf (GLfloat d)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glClearDepthf
                    ,d
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glClearStencil (GLint s)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glClearStencil
                    ,s
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glColorMask (GLboolean red,GLboolean green,GLboolean blue,GLboolean alpha)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glColorMask
                    ,red,green,blue,alpha
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCompileShader (GLuint shader)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCompileShader
                    ,shader
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCompressedTexImage2D (GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLint border,GLsizei imageSize,const void *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCompressedTexImage2D
                    ,target,level,internalformat,width,height,border,imageSize,data
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCompressedTexSubImage2D (GLenum target,GLint level,GLint xoffset,GLint yoffset,GLsizei width,GLsizei height,GLenum format,GLsizei imageSize,const void *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCompressedTexSubImage2D
                    ,target,level,xoffset,yoffset,width,height,format,imageSize,data
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCopyTexImage2D (GLenum target,GLint level,GLenum internalformat,GLint x,GLint y,GLsizei width,GLsizei height,GLint border)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCopyTexImage2D
                    ,target,level,internalformat,x,y,width,height,border
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCopyTexSubImage2D (GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint x,GLint y,GLsizei width,GLsizei height)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCopyTexSubImage2D
                    ,target,level,xoffset,yoffset,x,y,width,height
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  GLuint GLUEY_APIENTRY  glCreateProgram ()
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCreateProgram
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  GLuint GLUEY_APIENTRY  glCreateShader (GLenum type)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCreateShader
                    ,type
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCullFace (GLenum mode)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCullFace
                    ,mode
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDeleteBuffers (GLsizei n,const GLuint *buffers)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDeleteBuffers
                    ,n,buffers
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDeleteFramebuffers (GLsizei n,const GLuint *framebuffers)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDeleteFramebuffers
                    ,n,framebuffers
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDeleteProgram (GLuint program)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDeleteProgram
                    ,program
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDeleteRenderbuffers (GLsizei n,const GLuint *renderbuffers)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDeleteRenderbuffers
                    ,n,renderbuffers
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDeleteShader (GLuint shader)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDeleteShader
                    ,shader
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDeleteTextures (GLsizei n,const GLuint *textures)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDeleteTextures
                    ,n,textures
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDepthFunc (GLenum func)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDepthFunc
                    ,func
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDepthMask (GLboolean flag)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDepthMask
                    ,flag
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDepthRangef (GLfloat n,GLfloat f)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDepthRangef
                    ,n,f
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDetachShader (GLuint program,GLuint shader)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDetachShader
                    ,program,shader
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDisable (GLenum cap)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDisable
                    ,cap
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDisableVertexAttribArray (GLuint index)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDisableVertexAttribArray
                    ,index
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawArrays (GLenum mode,GLint first,GLsizei count)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawArrays
                    ,mode,first,count
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawElements (GLenum mode,GLsizei count,GLenum type,const void *indices)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawElements
                    ,mode,count,type,indices
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glEnable (GLenum cap)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glEnable
                    ,cap
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glEnableVertexAttribArray (GLuint index)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glEnableVertexAttribArray
                    ,index
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glFinish ()
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFinish
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glFlush ()
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFlush
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glFramebufferRenderbuffer (GLenum target,GLenum attachment,GLenum renderbuffertarget,GLuint renderbuffer)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFramebufferRenderbuffer
                    ,target,attachment,renderbuffertarget,renderbuffer
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glFramebufferTexture2D (GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFramebufferTexture2D
                    ,target,attachment,textarget,texture,level
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glFrontFace (GLenum mode)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFrontFace
                    ,mode
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGenBuffers (GLsizei n,GLuint *buffers)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGenBuffers
                    ,n,buffers
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGenerateMipmap (GLenum target)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGenerateMipmap
                    ,target
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGenFramebuffers (GLsizei n,GLuint *framebuffers)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGenFramebuffers
                    ,n,framebuffers
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGenRenderbuffers (GLsizei n,GLuint *renderbuffers)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGenRenderbuffers
                    ,n,renderbuffers
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGenTextures (GLsizei n,GLuint *textures)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGenTextures
                    ,n,textures
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetActiveAttrib (GLuint program,GLuint index,GLsizei bufSize,GLsizei *length,GLint *size,GLenum *type,GLchar *name)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetActiveAttrib
                    ,program,index,bufSize,length,size,type,name
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetActiveUniform (GLuint program,GLuint index,GLsizei bufSize,GLsizei *length,GLint *size,GLenum *type,GLchar *name)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetActiveUniform
                    ,program,index,bufSize,length,size,type,name
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetAttachedShaders (GLuint program,GLsizei maxCount,GLsizei *count,GLuint *shaders)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetAttachedShaders
                    ,program,maxCount,count,shaders
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  GLint GLUEY_APIENTRY  glGetAttribLocation (GLuint program,const GLchar *name)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetAttribLocation
                    ,program,name
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetBooleanv (GLenum pname,GLboolean *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetBooleanv
                    ,pname,data
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetBufferParameteriv (GLenum target,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetBufferParameteriv
                    ,target,pname,params
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  GLenum GLUEY_APIENTRY  glGetError ()
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetError
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetFloatv (GLenum pname,GLfloat *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetFloatv
                    ,pname,data
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetFramebufferAttachmentParameteriv (GLenum target,GLenum attachment,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetFramebufferAttachmentParameteriv
                    ,target,attachment,pname,params
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetIntegerv (GLenum pname,GLint *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetIntegerv
                    ,pname,data
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetProgramiv (GLuint program,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetProgramiv
                    ,program,pname,params
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetProgramInfoLog (GLuint program,GLsizei bufSize,GLsizei *length,GLchar *infoLog)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetProgramInfoLog
                    ,program,bufSize,length,infoLog
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetRenderbufferParameteriv (GLenum target,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetRenderbufferParameteriv
                    ,target,pname,params
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetShaderiv (GLuint shader,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetShaderiv
                    ,shader,pname,params
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetShaderInfoLog (GLuint shader,GLsizei bufSize,GLsizei *length,GLchar *infoLog)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetShaderInfoLog
                    ,shader,bufSize,length,infoLog
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetShaderPrecisionFormat (GLenum shadertype,GLenum precisiontype,GLint *range,GLint *precision)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetShaderPrecisionFormat
                    ,shadertype,precisiontype,range,precision
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetShaderSource (GLuint shader,GLsizei bufSize,GLsizei *length,GLchar *source)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetShaderSource
                    ,shader,bufSize,length,source
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  const GLubyte* GLUEY_APIENTRY  glGetString (GLenum name)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetString
                    ,name
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetTexParameterfv (GLenum target,GLenum pname,GLfloat *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetTexParameterfv
                    ,target,pname,params
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetTexParameteriv (GLenum target,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetTexParameteriv
                    ,target,pname,params
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetUniformfv (GLuint program,GLint location,GLfloat *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetUniformfv
                    ,program,location,params
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetUniformiv (GLuint program,GLint location,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetUniformiv
                    ,program,location,params
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  GLint GLUEY_APIENTRY  glGetUniformLocation (GLuint program,const GLchar *name)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetUniformLocation
                    ,program,name
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetVertexAttribfv (GLuint index,GLenum pname,GLfloat *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetVertexAttribfv
                    ,index,pname,params
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetVertexAttribiv (GLuint index,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetVertexAttribiv
                    ,index,pname,params
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetVertexAttribPointerv (GLuint index,GLenum pname,void **pointer)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetVertexAttribPointerv
                    ,index,pname,pointer
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glHint (GLenum target,GLenum mode)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glHint
                    ,target,mode
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsBuffer (GLuint buffer)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsBuffer
                    ,buffer
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsEnabled (GLenum cap)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsEnabled
                    ,cap
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsFramebuffer (GLuint framebuffer)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsFramebuffer
                    ,framebuffer
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsProgram (GLuint program)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsProgram
                    ,program
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsRenderbuffer (GLuint renderbuffer)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsRenderbuffer
                    ,renderbuffer
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsShader (GLuint shader)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsShader
                    ,shader
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsTexture (GLuint texture)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsTexture
                    ,texture
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glLineWidth (GLfloat width)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glLineWidth
                    ,width
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glLinkProgram (GLuint program)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glLinkProgram
                    ,program
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glPixelStorei (GLenum pname,GLint param)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPixelStorei
                    ,pname,param
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glPolygonOffset (GLfloat factor,GLfloat units)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPolygonOffset
                    ,factor,units
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glReadPixels (GLint x,GLint y,GLsizei width,GLsizei height,GLenum format,GLenum type,void *pixels)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glReadPixels
                    ,x,y,width,height,format,type,pixels
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glReleaseShaderCompiler ()
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glReleaseShaderCompiler
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glRenderbufferStorage (GLenum target,GLenum internalformat,GLsizei width,GLsizei height)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glRenderbufferStorage
                    ,target,internalformat,width,height
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glSampleCoverage (GLfloat value,GLboolean invert)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glSampleCoverage
                    ,value,invert
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glScissor (GLint x,GLint y,GLsizei width,GLsizei height)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glScissor
                    ,x,y,width,height
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glShaderBinary (GLsizei count,const GLuint *shaders,GLenum binaryformat,const void *binary,GLsizei length)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glShaderBinary
                    ,count,shaders,binaryformat,binary,length
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glShaderSource (GLuint shader,GLsizei count,const GLchar *const*string,const GLint *length)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glShaderSource
                    ,shader,count,string,length
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glStencilFunc (GLenum func,GLint ref,GLuint mask)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glStencilFunc
                    ,func,ref,mask
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glStencilFuncSeparate (GLenum face,GLenum func,GLint ref,GLuint mask)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glStencilFuncSeparate
                    ,face,func,ref,mask
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glStencilMask (GLuint mask)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glStencilMask
                    ,mask
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glStencilMaskSeparate (GLenum face,GLuint mask)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glStencilMaskSeparate
                    ,face,mask
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glStencilOp (GLenum fail,GLenum zfail,GLenum zpass)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glStencilOp
                    ,fail,zfail,zpass
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glStencilOpSeparate (GLenum face,GLenum sfail,GLenum dpfail,GLenum dppass)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glStencilOpSeparate
                    ,face,sfail,dpfail,dppass
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexImage2D (GLenum target,GLint level,GLint internalformat,GLsizei width,GLsizei height,GLint border,GLenum format,GLenum type,const void *pixels)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexImage2D
                    ,target,level,internalformat,width,height,border,format,type,pixels
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexParameterf (GLenum target,GLenum pname,GLfloat param)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexParameterf
                    ,target,pname,param
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexParameterfv (GLenum target,GLenum pname,const GLfloat *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexParameterfv
                    ,target,pname,params
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexParameteri (GLenum target,GLenum pname,GLint param)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexParameteri
                    ,target,pname,param
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexParameteriv (GLenum target,GLenum pname,const GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexParameteriv
                    ,target,pname,params
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexSubImage2D (GLenum target,GLint level,GLint xoffset,GLint yoffset,GLsizei width,GLsizei height,GLenum format,GLenum type,const void *pixels)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexSubImage2D
                    ,target,level,xoffset,yoffset,width,height,format,type,pixels
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform1f (GLint location,GLfloat v0)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform1f
                    ,location,v0
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform1fv (GLint location,GLsizei count,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform1fv
                    ,location,count,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform1i (GLint location,GLint v0)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform1i
                    ,location,v0
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform1iv (GLint location,GLsizei count,const GLint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform1iv
                    ,location,count,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform2f (GLint location,GLfloat v0,GLfloat v1)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform2f
                    ,location,v0,v1
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform2fv (GLint location,GLsizei count,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform2fv
                    ,location,count,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform2i (GLint location,GLint v0,GLint v1)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform2i
                    ,location,v0,v1
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform2iv (GLint location,GLsizei count,const GLint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform2iv
                    ,location,count,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform3f (GLint location,GLfloat v0,GLfloat v1,GLfloat v2)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform3f
                    ,location,v0,v1,v2
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform3fv (GLint location,GLsizei count,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform3fv
                    ,location,count,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform3i (GLint location,GLint v0,GLint v1,GLint v2)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform3i
                    ,location,v0,v1,v2
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform3iv (GLint location,GLsizei count,const GLint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform3iv
                    ,location,count,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform4f (GLint location,GLfloat v0,GLfloat v1,GLfloat v2,GLfloat v3)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform4f
                    ,location,v0,v1,v2,v3
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform4fv (GLint location,GLsizei count,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform4fv
                    ,location,count,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform4i (GLint location,GLint v0,GLint v1,GLint v2,GLint v3)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform4i
                    ,location,v0,v1,v2,v3
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform4iv (GLint location,GLsizei count,const GLint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform4iv
                    ,location,count,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniformMatrix2fv (GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniformMatrix2fv
                    ,location,count,transpose,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniformMatrix3fv (GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniformMatrix3fv
                    ,location,count,transpose,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniformMatrix4fv (GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniformMatrix4fv
                    ,location,count,transpose,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUseProgram (GLuint program)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUseProgram
                    ,program
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glValidateProgram (GLuint program)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glValidateProgram
                    ,program
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttrib1f (GLuint index,GLfloat x)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttrib1f
                    ,index,x
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttrib1fv (GLuint index,const GLfloat *v)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttrib1fv
                    ,index,v
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttrib2f (GLuint index,GLfloat x,GLfloat y)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttrib2f
                    ,index,x,y
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttrib2fv (GLuint index,const GLfloat *v)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttrib2fv
                    ,index,v
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttrib3f (GLuint index,GLfloat x,GLfloat y,GLfloat z)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttrib3f
                    ,index,x,y,z
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttrib3fv (GLuint index,const GLfloat *v)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttrib3fv
                    ,index,v
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttrib4f (GLuint index,GLfloat x,GLfloat y,GLfloat z,GLfloat w)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttrib4f
                    ,index,x,y,z,w
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttrib4fv (GLuint index,const GLfloat *v)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttrib4fv
                    ,index,v
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttribPointer (GLuint index,GLint size,GLenum type,GLboolean normalized,GLsizei stride,const void *pointer)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttribPointer
                    ,index,size,type,normalized,stride,pointer
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glViewport (GLint x,GLint y,GLsizei width,GLsizei height)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glViewport
                    ,x,y,width,height
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glReadBuffer (GLenum src)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glReadBuffer
                    ,src
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawRangeElements (GLenum mode,GLuint start,GLuint end,GLsizei count,GLenum type,const void *indices)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawRangeElements
                    ,mode,start,end,count,type,indices
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexImage3D (GLenum target,GLint level,GLint internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLenum format,GLenum type,const void *pixels)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexImage3D
                    ,target,level,internalformat,width,height,depth,border,format,type,pixels
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexSubImage3D (GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLenum type,const void *pixels)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexSubImage3D
                    ,target,level,xoffset,yoffset,zoffset,width,height,depth,format,type,pixels
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCopyTexSubImage3D (GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLint x,GLint y,GLsizei width,GLsizei height)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCopyTexSubImage3D
                    ,target,level,xoffset,yoffset,zoffset,x,y,width,height
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCompressedTexImage3D (GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLsizei imageSize,const void *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCompressedTexImage3D
                    ,target,level,internalformat,width,height,depth,border,imageSize,data
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCompressedTexSubImage3D (GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLsizei imageSize,const void *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCompressedTexSubImage3D
                    ,target,level,xoffset,yoffset,zoffset,width,height,depth,format,imageSize,data
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGenQueries (GLsizei n,GLuint *ids)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGenQueries
                    ,n,ids
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDeleteQueries (GLsizei n,const GLuint *ids)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDeleteQueries
                    ,n,ids
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsQuery (GLuint id)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsQuery
                    ,id
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBeginQuery (GLenum target,GLuint id)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBeginQuery
                    ,target,id
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glEndQuery (GLenum target)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glEndQuery
                    ,target
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetQueryiv (GLenum target,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetQueryiv
                    ,target,pname,params
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetQueryObjectuiv (GLuint id,GLenum pname,GLuint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetQueryObjectuiv
                    ,id,pname,params
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glUnmapBuffer (GLenum target)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUnmapBuffer
                    ,target
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetBufferPointerv (GLenum target,GLenum pname,void **params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetBufferPointerv
                    ,target,pname,params
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawBuffers (GLsizei n,const GLenum *bufs)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawBuffers
                    ,n,bufs
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniformMatrix2x3fv (GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniformMatrix2x3fv
                    ,location,count,transpose,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniformMatrix3x2fv (GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniformMatrix3x2fv
                    ,location,count,transpose,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniformMatrix2x4fv (GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniformMatrix2x4fv
                    ,location,count,transpose,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniformMatrix4x2fv (GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniformMatrix4x2fv
                    ,location,count,transpose,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniformMatrix3x4fv (GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniformMatrix3x4fv
                    ,location,count,transpose,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniformMatrix4x3fv (GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniformMatrix4x3fv
                    ,location,count,transpose,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBlitFramebuffer (GLint srcX0,GLint srcY0,GLint srcX1,GLint srcY1,GLint dstX0,GLint dstY0,GLint dstX1,GLint dstY1,GLbitfield mask,GLenum filter)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBlitFramebuffer
                    ,srcX0,srcY0,srcX1,srcY1,dstX0,dstY0,dstX1,dstY1,mask,filter
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glRenderbufferStorageMultisample (GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glRenderbufferStorageMultisample
                    ,target,samples,internalformat,width,height
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glFramebufferTextureLayer (GLenum target,GLenum attachment,GLuint texture,GLint level,GLint layer)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFramebufferTextureLayer
                    ,target,attachment,texture,level,layer
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void * GLUEY_APIENTRY  glMapBufferRange (GLenum target,GLintptr offset,GLsizeiptr length,GLbitfield access)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glMapBufferRange
                    ,target,offset,length,access
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glFlushMappedBufferRange (GLenum target,GLintptr offset,GLsizeiptr length)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFlushMappedBufferRange
                    ,target,offset,length
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBindVertexArray (GLuint array)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBindVertexArray
                    ,array
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDeleteVertexArrays (GLsizei n,const GLuint *arrays)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDeleteVertexArrays
                    ,n,arrays
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGenVertexArrays (GLsizei n,GLuint *arrays)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGenVertexArrays
                    ,n,arrays
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsVertexArray (GLuint array)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsVertexArray
                    ,array
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetIntegeri_v (GLenum target,GLuint index,GLint *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetIntegeri_v
                    ,target,index,data
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBeginTransformFeedback (GLenum primitiveMode)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBeginTransformFeedback
                    ,primitiveMode
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glEndTransformFeedback ()
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glEndTransformFeedback
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBindBufferRange (GLenum target,GLuint index,GLuint buffer,GLintptr offset,GLsizeiptr size)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBindBufferRange
                    ,target,index,buffer,offset,size
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBindBufferBase (GLenum target,GLuint index,GLuint buffer)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBindBufferBase
                    ,target,index,buffer
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTransformFeedbackVaryings (GLuint program,GLsizei count,const GLchar *const*varyings,GLenum bufferMode)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTransformFeedbackVaryings
                    ,program,count,varyings,bufferMode
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetTransformFeedbackVarying (GLuint program,GLuint index,GLsizei bufSize,GLsizei *length,GLsizei *size,GLenum *type,GLchar *name)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetTransformFeedbackVarying
                    ,program,index,bufSize,length,size,type,name
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttribIPointer (GLuint index,GLint size,GLenum type,GLsizei stride,const void *pointer)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttribIPointer
                    ,index,size,type,stride,pointer
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetVertexAttribIiv (GLuint index,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetVertexAttribIiv
                    ,index,pname,params
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetVertexAttribIuiv (GLuint index,GLenum pname,GLuint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetVertexAttribIuiv
                    ,index,pname,params
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttribI4i (GLuint index,GLint x,GLint y,GLint z,GLint w)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttribI4i
                    ,index,x,y,z,w
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttribI4ui (GLuint index,GLuint x,GLuint y,GLuint z,GLuint w)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttribI4ui
                    ,index,x,y,z,w
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttribI4iv (GLuint index,const GLint *v)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttribI4iv
                    ,index,v
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttribI4uiv (GLuint index,const GLuint *v)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttribI4uiv
                    ,index,v
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetUniformuiv (GLuint program,GLint location,GLuint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetUniformuiv
                    ,program,location,params
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  GLint GLUEY_APIENTRY  glGetFragDataLocation (GLuint program,const GLchar *name)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetFragDataLocation
                    ,program,name
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform1ui (GLint location,GLuint v0)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform1ui
                    ,location,v0
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform2ui (GLint location,GLuint v0,GLuint v1)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform2ui
                    ,location,v0,v1
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform3ui (GLint location,GLuint v0,GLuint v1,GLuint v2)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform3ui
                    ,location,v0,v1,v2
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform4ui (GLint location,GLuint v0,GLuint v1,GLuint v2,GLuint v3)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform4ui
                    ,location,v0,v1,v2,v3
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform1uiv (GLint location,GLsizei count,const GLuint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform1uiv
                    ,location,count,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform2uiv (GLint location,GLsizei count,const GLuint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform2uiv
                    ,location,count,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform3uiv (GLint location,GLsizei count,const GLuint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform3uiv
                    ,location,count,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniform4uiv (GLint location,GLsizei count,const GLuint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniform4uiv
                    ,location,count,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glClearBufferiv (GLenum buffer,GLint drawbuffer,const GLint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glClearBufferiv
                    ,buffer,drawbuffer,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glClearBufferuiv (GLenum buffer,GLint drawbuffer,const GLuint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glClearBufferuiv
                    ,buffer,drawbuffer,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glClearBufferfv (GLenum buffer,GLint drawbuffer,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glClearBufferfv
                    ,buffer,drawbuffer,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glClearBufferfi (GLenum buffer,GLint drawbuffer,GLfloat depth,GLint stencil)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glClearBufferfi
                    ,buffer,drawbuffer,depth,stencil
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  const GLubyte* GLUEY_APIENTRY  glGetStringi (GLenum name,GLuint index)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetStringi
                    ,name,index
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glCopyBufferSubData (GLenum readTarget,GLenum writeTarget,GLintptr readOffset,GLintptr writeOffset,GLsizeiptr size)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCopyBufferSubData
                    ,readTarget,writeTarget,readOffset,writeOffset,size
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetUniformIndices (GLuint program,GLsizei uniformCount,const GLchar *const*uniformNames,GLuint *uniformIndices)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetUniformIndices
                    ,program,uniformCount,uniformNames,uniformIndices
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetActiveUniformsiv (GLuint program,GLsizei uniformCount,const GLuint *uniformIndices,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetActiveUniformsiv
                    ,program,uniformCount,uniformIndices,pname,params
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  GLuint GLUEY_APIENTRY  glGetUniformBlockIndex (GLuint program,const GLchar *uniformBlockName)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetUniformBlockIndex
                    ,program,uniformBlockName
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetActiveUniformBlockiv (GLuint program,GLuint uniformBlockIndex,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetActiveUniformBlockiv
                    ,program,uniformBlockIndex,pname,params
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetActiveUniformBlockName (GLuint program,GLuint uniformBlockIndex,GLsizei bufSize,GLsizei *length,GLchar *uniformBlockName)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetActiveUniformBlockName
                    ,program,uniformBlockIndex,bufSize,length,uniformBlockName
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUniformBlockBinding (GLuint program,GLuint uniformBlockIndex,GLuint uniformBlockBinding)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUniformBlockBinding
                    ,program,uniformBlockIndex,uniformBlockBinding
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawArraysInstanced (GLenum mode,GLint first,GLsizei count,GLsizei instancecount)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawArraysInstanced
                    ,mode,first,count,instancecount
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawElementsInstanced (GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei instancecount)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawElementsInstanced
                    ,mode,count,type,indices,instancecount
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  GLsync GLUEY_APIENTRY  glFenceSync (GLenum condition,GLbitfield flags)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFenceSync
                    ,condition,flags
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsSync (GLsync sync)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsSync
                    ,sync
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDeleteSync (GLsync sync)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDeleteSync
                    ,sync
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  GLenum GLUEY_APIENTRY  glClientWaitSync (GLsync sync,GLbitfield flags,GLuint64 timeout)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glClientWaitSync
                    ,sync,flags,timeout
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glWaitSync (GLsync sync,GLbitfield flags,GLuint64 timeout)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glWaitSync
                    ,sync,flags,timeout
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetInteger64v (GLenum pname,GLint64 *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetInteger64v
                    ,pname,data
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetSynciv (GLsync sync,GLenum pname,GLsizei bufSize,GLsizei *length,GLint *values)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetSynciv
                    ,sync,pname,bufSize,length,values
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetInteger64i_v (GLenum target,GLuint index,GLint64 *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetInteger64i_v
                    ,target,index,data
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetBufferParameteri64v (GLenum target,GLenum pname,GLint64 *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetBufferParameteri64v
                    ,target,pname,params
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGenSamplers (GLsizei count,GLuint *samplers)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGenSamplers
                    ,count,samplers
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDeleteSamplers (GLsizei count,const GLuint *samplers)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDeleteSamplers
                    ,count,samplers
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsSampler (GLuint sampler)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsSampler
                    ,sampler
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBindSampler (GLuint unit,GLuint sampler)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBindSampler
                    ,unit,sampler
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glSamplerParameteri (GLuint sampler,GLenum pname,GLint param)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glSamplerParameteri
                    ,sampler,pname,param
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glSamplerParameteriv (GLuint sampler,GLenum pname,const GLint *param)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glSamplerParameteriv
                    ,sampler,pname,param
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glSamplerParameterf (GLuint sampler,GLenum pname,GLfloat param)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glSamplerParameterf
                    ,sampler,pname,param
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glSamplerParameterfv (GLuint sampler,GLenum pname,const GLfloat *param)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glSamplerParameterfv
                    ,sampler,pname,param
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetSamplerParameteriv (GLuint sampler,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetSamplerParameteriv
                    ,sampler,pname,params
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetSamplerParameterfv (GLuint sampler,GLenum pname,GLfloat *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetSamplerParameterfv
                    ,sampler,pname,params
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttribDivisor (GLuint index,GLuint divisor)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttribDivisor
                    ,index,divisor
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBindTransformFeedback (GLenum target,GLuint id)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBindTransformFeedback
                    ,target,id
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDeleteTransformFeedbacks (GLsizei n,const GLuint *ids)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDeleteTransformFeedbacks
                    ,n,ids
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGenTransformFeedbacks (GLsizei n,GLuint *ids)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGenTransformFeedbacks
                    ,n,ids
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsTransformFeedback (GLuint id)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsTransformFeedback
                    ,id
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glPauseTransformFeedback ()
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glPauseTransformFeedback
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glResumeTransformFeedback ()
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glResumeTransformFeedback
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetProgramBinary (GLuint program,GLsizei bufSize,GLsizei *length,GLenum *binaryFormat,void *binary)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetProgramBinary
                    ,program,bufSize,length,binaryFormat,binary
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramBinary (GLuint program,GLenum binaryFormat,const void *binary,GLsizei length)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramBinary
                    ,program,binaryFormat,binary,length
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramParameteri (GLuint program,GLenum pname,GLint value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramParameteri
                    ,program,pname,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glInvalidateFramebuffer (GLenum target,GLsizei numAttachments,const GLenum *attachments)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glInvalidateFramebuffer
                    ,target,numAttachments,attachments
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glInvalidateSubFramebuffer (GLenum target,GLsizei numAttachments,const GLenum *attachments,GLint x,GLint y,GLsizei width,GLsizei height)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glInvalidateSubFramebuffer
                    ,target,numAttachments,attachments,x,y,width,height
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexStorage2D (GLenum target,GLsizei levels,GLenum internalformat,GLsizei width,GLsizei height)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexStorage2D
                    ,target,levels,internalformat,width,height
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexStorage3D (GLenum target,GLsizei levels,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexStorage3D
                    ,target,levels,internalformat,width,height,depth
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetInternalformativ (GLenum target,GLenum internalformat,GLenum pname,GLsizei bufSize,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetInternalformativ
                    ,target,internalformat,pname,bufSize,params
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDispatchCompute (GLuint num_groups_x,GLuint num_groups_y,GLuint num_groups_z)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDispatchCompute
                    ,num_groups_x,num_groups_y,num_groups_z
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDispatchComputeIndirect (GLintptr indirect)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDispatchComputeIndirect
                    ,indirect
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawArraysIndirect (GLenum mode,const void *indirect)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawArraysIndirect
                    ,mode,indirect
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDrawElementsIndirect (GLenum mode,GLenum type,const void *indirect)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDrawElementsIndirect
                    ,mode,type,indirect
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glFramebufferParameteri (GLenum target,GLenum pname,GLint param)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glFramebufferParameteri
                    ,target,pname,param
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetFramebufferParameteriv (GLenum target,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetFramebufferParameteriv
                    ,target,pname,params
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetProgramInterfaceiv (GLuint program,GLenum programInterface,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetProgramInterfaceiv
                    ,program,programInterface,pname,params
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  GLuint GLUEY_APIENTRY  glGetProgramResourceIndex (GLuint program,GLenum programInterface,const GLchar *name)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetProgramResourceIndex
                    ,program,programInterface,name
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetProgramResourceName (GLuint program,GLenum programInterface,GLuint index,GLsizei bufSize,GLsizei *length,GLchar *name)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetProgramResourceName
                    ,program,programInterface,index,bufSize,length,name
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetProgramResourceiv (GLuint program,GLenum programInterface,GLuint index,GLsizei propCount,const GLenum *props,GLsizei bufSize,GLsizei *length,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetProgramResourceiv
                    ,program,programInterface,index,propCount,props,bufSize,length,params
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  GLint GLUEY_APIENTRY  glGetProgramResourceLocation (GLuint program,GLenum programInterface,const GLchar *name)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetProgramResourceLocation
                    ,program,programInterface,name
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glUseProgramStages (GLuint pipeline,GLbitfield stages,GLuint program)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glUseProgramStages
                    ,pipeline,stages,program
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glActiveShaderProgram (GLuint pipeline,GLuint program)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glActiveShaderProgram
                    ,pipeline,program
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  GLuint GLUEY_APIENTRY  glCreateShaderProgramv (GLenum type,GLsizei count,const GLchar *const*strings)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glCreateShaderProgramv
                    ,type,count,strings
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBindProgramPipeline (GLuint pipeline)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBindProgramPipeline
                    ,pipeline
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glDeleteProgramPipelines (GLsizei n,const GLuint *pipelines)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glDeleteProgramPipelines
                    ,n,pipelines
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGenProgramPipelines (GLsizei n,GLuint *pipelines)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGenProgramPipelines
                    ,n,pipelines
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  GLboolean GLUEY_APIENTRY  glIsProgramPipeline (GLuint pipeline)
{
    auto retVal =
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glIsProgramPipeline
                    ,pipeline
                    );
    fprintf(stderr, "%s Done.\n", __func__);
    return retVal;
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetProgramPipelineiv (GLuint pipeline,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetProgramPipelineiv
                    ,pipeline,pname,params
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform1i (GLuint program,GLint location,GLint v0)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform1i
                    ,program,location,v0
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform2i (GLuint program,GLint location,GLint v0,GLint v1)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform2i
                    ,program,location,v0,v1
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform3i (GLuint program,GLint location,GLint v0,GLint v1,GLint v2)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform3i
                    ,program,location,v0,v1,v2
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform4i (GLuint program,GLint location,GLint v0,GLint v1,GLint v2,GLint v3)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform4i
                    ,program,location,v0,v1,v2,v3
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform1ui (GLuint program,GLint location,GLuint v0)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform1ui
                    ,program,location,v0
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform2ui (GLuint program,GLint location,GLuint v0,GLuint v1)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform2ui
                    ,program,location,v0,v1
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform3ui (GLuint program,GLint location,GLuint v0,GLuint v1,GLuint v2)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform3ui
                    ,program,location,v0,v1,v2
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform4ui (GLuint program,GLint location,GLuint v0,GLuint v1,GLuint v2,GLuint v3)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform4ui
                    ,program,location,v0,v1,v2,v3
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform1f (GLuint program,GLint location,GLfloat v0)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform1f
                    ,program,location,v0
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform2f (GLuint program,GLint location,GLfloat v0,GLfloat v1)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform2f
                    ,program,location,v0,v1
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform3f (GLuint program,GLint location,GLfloat v0,GLfloat v1,GLfloat v2)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform3f
                    ,program,location,v0,v1,v2
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform4f (GLuint program,GLint location,GLfloat v0,GLfloat v1,GLfloat v2,GLfloat v3)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform4f
                    ,program,location,v0,v1,v2,v3
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform1iv (GLuint program,GLint location,GLsizei count,const GLint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform1iv
                    ,program,location,count,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform2iv (GLuint program,GLint location,GLsizei count,const GLint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform2iv
                    ,program,location,count,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform3iv (GLuint program,GLint location,GLsizei count,const GLint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform3iv
                    ,program,location,count,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform4iv (GLuint program,GLint location,GLsizei count,const GLint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform4iv
                    ,program,location,count,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform1uiv (GLuint program,GLint location,GLsizei count,const GLuint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform1uiv
                    ,program,location,count,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform2uiv (GLuint program,GLint location,GLsizei count,const GLuint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform2uiv
                    ,program,location,count,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform3uiv (GLuint program,GLint location,GLsizei count,const GLuint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform3uiv
                    ,program,location,count,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform4uiv (GLuint program,GLint location,GLsizei count,const GLuint *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform4uiv
                    ,program,location,count,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform1fv (GLuint program,GLint location,GLsizei count,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform1fv
                    ,program,location,count,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform2fv (GLuint program,GLint location,GLsizei count,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform2fv
                    ,program,location,count,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform3fv (GLuint program,GLint location,GLsizei count,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform3fv
                    ,program,location,count,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniform4fv (GLuint program,GLint location,GLsizei count,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniform4fv
                    ,program,location,count,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniformMatrix2fv (GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniformMatrix2fv
                    ,program,location,count,transpose,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniformMatrix3fv (GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniformMatrix3fv
                    ,program,location,count,transpose,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniformMatrix4fv (GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniformMatrix4fv
                    ,program,location,count,transpose,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniformMatrix2x3fv (GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniformMatrix2x3fv
                    ,program,location,count,transpose,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniformMatrix3x2fv (GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniformMatrix3x2fv
                    ,program,location,count,transpose,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniformMatrix2x4fv (GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniformMatrix2x4fv
                    ,program,location,count,transpose,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniformMatrix4x2fv (GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniformMatrix4x2fv
                    ,program,location,count,transpose,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniformMatrix3x4fv (GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniformMatrix3x4fv
                    ,program,location,count,transpose,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glProgramUniformMatrix4x3fv (GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glProgramUniformMatrix4x3fv
                    ,program,location,count,transpose,value
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glValidateProgramPipeline (GLuint pipeline)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glValidateProgramPipeline
                    ,pipeline
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetProgramPipelineInfoLog (GLuint pipeline,GLsizei bufSize,GLsizei *length,GLchar *infoLog)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetProgramPipelineInfoLog
                    ,pipeline,bufSize,length,infoLog
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBindImageTexture (GLuint unit,GLuint texture,GLint level,GLboolean layered,GLint layer,GLenum access,GLenum format)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBindImageTexture
                    ,unit,texture,level,layered,layer,access,format
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetBooleani_v (GLenum target,GLuint index,GLboolean *data)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetBooleani_v
                    ,target,index,data
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glMemoryBarrier (GLbitfield barriers)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glMemoryBarrier
                    ,barriers
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glMemoryBarrierByRegion (GLbitfield barriers)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glMemoryBarrierByRegion
                    ,barriers
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glTexStorage2DMultisample (GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height,GLboolean fixedsamplelocations)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glTexStorage2DMultisample
                    ,target,samples,internalformat,width,height,fixedsamplelocations
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetMultisamplefv (GLenum pname,GLuint index,GLfloat *val)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetMultisamplefv
                    ,pname,index,val
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glSampleMaski (GLuint maskNumber,GLbitfield mask)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glSampleMaski
                    ,maskNumber,mask
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetTexLevelParameteriv (GLenum target,GLint level,GLenum pname,GLint *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetTexLevelParameteriv
                    ,target,level,pname,params
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glGetTexLevelParameterfv (GLenum target,GLint level,GLenum pname,GLfloat *params)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glGetTexLevelParameterfv
                    ,target,level,pname,params
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glBindVertexBuffer (GLuint bindingindex,GLuint buffer,GLintptr offset,GLsizei stride)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glBindVertexBuffer
                    ,bindingindex,buffer,offset,stride
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttribFormat (GLuint attribindex,GLint size,GLenum type,GLboolean normalized,GLuint relativeoffset)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttribFormat
                    ,attribindex,size,type,normalized,relativeoffset
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttribIFormat (GLuint attribindex,GLint size,GLenum type,GLuint relativeoffset)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttribIFormat
                    ,attribindex,size,type,relativeoffset
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexAttribBinding (GLuint attribindex,GLuint bindingindex)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexAttribBinding
                    ,attribindex,bindingindex
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}


GLUEY_APICALL  void GLUEY_APIENTRY  glVertexBindingDivisor (GLuint bindingindex,GLuint divisor)
{
    hook_invoke_from(g_libCtx, SPU_TYPE_SHIM
                    ,glVertexBindingDivisor
                    ,bindingindex,divisor
                    );
    fprintf(stderr, "%s Done.\n", __func__);
}

