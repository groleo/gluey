/* API: gles2
 * Profile: common
 * Versions considered: 2\.[0-9]|3\.[01]
 * Versions emitted: .*
 * Default extensions included: None
 * Additional extensions included: _nomatch_^
 * Extensions removed: _nomatch_^
 */
#if !defined(XMACRO)
#error XMACRO must be defined.
#endif
XMACRO(void, glActiveTexture, GLenum texture)
XMACRO(void, glAttachShader, GLuint program,GLuint shader)
XMACRO(void, glBindAttribLocation, GLuint program,GLuint index,const GLchar *name)
XMACRO(void, glBindBuffer, GLenum target,GLuint buffer)
XMACRO(void, glBindFramebuffer, GLenum target,GLuint framebuffer)
XMACRO(void, glBindRenderbuffer, GLenum target,GLuint renderbuffer)
XMACRO(void, glBindTexture, GLenum target,GLuint texture)
XMACRO(void, glBlendColor, GLfloat red,GLfloat green,GLfloat blue,GLfloat alpha)
XMACRO(void, glBlendEquation, GLenum mode)
XMACRO(void, glBlendEquationSeparate, GLenum modeRGB,GLenum modeAlpha)
XMACRO(void, glBlendFunc, GLenum sfactor,GLenum dfactor)
XMACRO(void, glBlendFuncSeparate, GLenum sfactorRGB,GLenum dfactorRGB,GLenum sfactorAlpha,GLenum dfactorAlpha)
XMACRO(void, glBufferData, GLenum target,GLsizeiptr size,const void *data,GLenum usage)
XMACRO(void, glBufferSubData, GLenum target,GLintptr offset,GLsizeiptr size,const void *data)
XMACRO(GLenum, glCheckFramebufferStatus, GLenum target)
XMACRO(void, glClear, GLbitfield mask)
XMACRO(void, glClearColor, GLfloat red,GLfloat green,GLfloat blue,GLfloat alpha)
XMACRO(void, glClearDepthf, GLfloat d)
XMACRO(void, glClearStencil, GLint s)
XMACRO(void, glColorMask, GLboolean red,GLboolean green,GLboolean blue,GLboolean alpha)
XMACRO(void, glCompileShader, GLuint shader)
XMACRO(void, glCompressedTexImage2D, GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLint border,GLsizei imageSize,const void *data)
XMACRO(void, glCompressedTexSubImage2D, GLenum target,GLint level,GLint xoffset,GLint yoffset,GLsizei width,GLsizei height,GLenum format,GLsizei imageSize,const void *data)
XMACRO(void, glCopyTexImage2D, GLenum target,GLint level,GLenum internalformat,GLint x,GLint y,GLsizei width,GLsizei height,GLint border)
XMACRO(void, glCopyTexSubImage2D, GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint x,GLint y,GLsizei width,GLsizei height)
XMACRO(GLuint, glCreateProgram)
XMACRO(GLuint, glCreateShader, GLenum type)
XMACRO(void, glCullFace, GLenum mode)
XMACRO(void, glDeleteBuffers, GLsizei n,const GLuint *buffers)
XMACRO(void, glDeleteFramebuffers, GLsizei n,const GLuint *framebuffers)
XMACRO(void, glDeleteProgram, GLuint program)
XMACRO(void, glDeleteRenderbuffers, GLsizei n,const GLuint *renderbuffers)
XMACRO(void, glDeleteShader, GLuint shader)
XMACRO(void, glDeleteTextures, GLsizei n,const GLuint *textures)
XMACRO(void, glDepthFunc, GLenum func)
XMACRO(void, glDepthMask, GLboolean flag)
XMACRO(void, glDepthRangef, GLfloat n,GLfloat f)
XMACRO(void, glDetachShader, GLuint program,GLuint shader)
XMACRO(void, glDisable, GLenum cap)
XMACRO(void, glDisableVertexAttribArray, GLuint index)
XMACRO(void, glDrawArrays, GLenum mode,GLint first,GLsizei count)
XMACRO(void, glDrawElements, GLenum mode,GLsizei count,GLenum type,const void *indices)
XMACRO(void, glEnable, GLenum cap)
XMACRO(void, glEnableVertexAttribArray, GLuint index)
XMACRO(void, glFinish)
XMACRO(void, glFlush)
XMACRO(void, glFramebufferRenderbuffer, GLenum target,GLenum attachment,GLenum renderbuffertarget,GLuint renderbuffer)
XMACRO(void, glFramebufferTexture2D, GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level)
XMACRO(void, glFrontFace, GLenum mode)
XMACRO(void, glGenBuffers, GLsizei n,GLuint *buffers)
XMACRO(void, glGenerateMipmap, GLenum target)
XMACRO(void, glGenFramebuffers, GLsizei n,GLuint *framebuffers)
XMACRO(void, glGenRenderbuffers, GLsizei n,GLuint *renderbuffers)
XMACRO(void, glGenTextures, GLsizei n,GLuint *textures)
XMACRO(void, glGetActiveAttrib, GLuint program,GLuint index,GLsizei bufSize,GLsizei *length,GLint *size,GLenum *type,GLchar *name)
XMACRO(void, glGetActiveUniform, GLuint program,GLuint index,GLsizei bufSize,GLsizei *length,GLint *size,GLenum *type,GLchar *name)
XMACRO(void, glGetAttachedShaders, GLuint program,GLsizei maxCount,GLsizei *count,GLuint *shaders)
XMACRO(GLint, glGetAttribLocation, GLuint program,const GLchar *name)
XMACRO(void, glGetBooleanv, GLenum pname,GLboolean *data)
XMACRO(void, glGetBufferParameteriv, GLenum target,GLenum pname,GLint *params)
XMACRO(GLenum, glGetError)
XMACRO(void, glGetFloatv, GLenum pname,GLfloat *data)
XMACRO(void, glGetFramebufferAttachmentParameteriv, GLenum target,GLenum attachment,GLenum pname,GLint *params)
XMACRO(void, glGetIntegerv, GLenum pname,GLint *data)
XMACRO(void, glGetProgramiv, GLuint program,GLenum pname,GLint *params)
XMACRO(void, glGetProgramInfoLog, GLuint program,GLsizei bufSize,GLsizei *length,GLchar *infoLog)
XMACRO(void, glGetRenderbufferParameteriv, GLenum target,GLenum pname,GLint *params)
XMACRO(void, glGetShaderiv, GLuint shader,GLenum pname,GLint *params)
XMACRO(void, glGetShaderInfoLog, GLuint shader,GLsizei bufSize,GLsizei *length,GLchar *infoLog)
XMACRO(void, glGetShaderPrecisionFormat, GLenum shadertype,GLenum precisiontype,GLint *range,GLint *precision)
XMACRO(void, glGetShaderSource, GLuint shader,GLsizei bufSize,GLsizei *length,GLchar *source)
XMACRO(const GLubyte*, glGetString, GLenum name)
XMACRO(void, glGetTexParameterfv, GLenum target,GLenum pname,GLfloat *params)
XMACRO(void, glGetTexParameteriv, GLenum target,GLenum pname,GLint *params)
XMACRO(void, glGetUniformfv, GLuint program,GLint location,GLfloat *params)
XMACRO(void, glGetUniformiv, GLuint program,GLint location,GLint *params)
XMACRO(GLint, glGetUniformLocation, GLuint program,const GLchar *name)
XMACRO(void, glGetVertexAttribfv, GLuint index,GLenum pname,GLfloat *params)
XMACRO(void, glGetVertexAttribiv, GLuint index,GLenum pname,GLint *params)
XMACRO(void, glGetVertexAttribPointerv, GLuint index,GLenum pname,void **pointer)
XMACRO(void, glHint, GLenum target,GLenum mode)
XMACRO(GLboolean, glIsBuffer, GLuint buffer)
XMACRO(GLboolean, glIsEnabled, GLenum cap)
XMACRO(GLboolean, glIsFramebuffer, GLuint framebuffer)
XMACRO(GLboolean, glIsProgram, GLuint program)
XMACRO(GLboolean, glIsRenderbuffer, GLuint renderbuffer)
XMACRO(GLboolean, glIsShader, GLuint shader)
XMACRO(GLboolean, glIsTexture, GLuint texture)
XMACRO(void, glLineWidth, GLfloat width)
XMACRO(void, glLinkProgram, GLuint program)
XMACRO(void, glPixelStorei, GLenum pname,GLint param)
XMACRO(void, glPolygonOffset, GLfloat factor,GLfloat units)
XMACRO(void, glReadPixels, GLint x,GLint y,GLsizei width,GLsizei height,GLenum format,GLenum type,void *pixels)
XMACRO(void, glReleaseShaderCompiler)
XMACRO(void, glRenderbufferStorage, GLenum target,GLenum internalformat,GLsizei width,GLsizei height)
XMACRO(void, glSampleCoverage, GLfloat value,GLboolean invert)
XMACRO(void, glScissor, GLint x,GLint y,GLsizei width,GLsizei height)
XMACRO(void, glShaderBinary, GLsizei count,const GLuint *shaders,GLenum binaryformat,const void *binary,GLsizei length)
XMACRO(void, glShaderSource, GLuint shader,GLsizei count,const GLchar *const*string,const GLint *length)
XMACRO(void, glStencilFunc, GLenum func,GLint ref,GLuint mask)
XMACRO(void, glStencilFuncSeparate, GLenum face,GLenum func,GLint ref,GLuint mask)
XMACRO(void, glStencilMask, GLuint mask)
XMACRO(void, glStencilMaskSeparate, GLenum face,GLuint mask)
XMACRO(void, glStencilOp, GLenum fail,GLenum zfail,GLenum zpass)
XMACRO(void, glStencilOpSeparate, GLenum face,GLenum sfail,GLenum dpfail,GLenum dppass)
XMACRO(void, glTexImage2D, GLenum target,GLint level,GLint internalformat,GLsizei width,GLsizei height,GLint border,GLenum format,GLenum type,const void *pixels)
XMACRO(void, glTexParameterf, GLenum target,GLenum pname,GLfloat param)
XMACRO(void, glTexParameterfv, GLenum target,GLenum pname,const GLfloat *params)
XMACRO(void, glTexParameteri, GLenum target,GLenum pname,GLint param)
XMACRO(void, glTexParameteriv, GLenum target,GLenum pname,const GLint *params)
XMACRO(void, glTexSubImage2D, GLenum target,GLint level,GLint xoffset,GLint yoffset,GLsizei width,GLsizei height,GLenum format,GLenum type,const void *pixels)
XMACRO(void, glUniform1f, GLint location,GLfloat v0)
XMACRO(void, glUniform1fv, GLint location,GLsizei count,const GLfloat *value)
XMACRO(void, glUniform1i, GLint location,GLint v0)
XMACRO(void, glUniform1iv, GLint location,GLsizei count,const GLint *value)
XMACRO(void, glUniform2f, GLint location,GLfloat v0,GLfloat v1)
XMACRO(void, glUniform2fv, GLint location,GLsizei count,const GLfloat *value)
XMACRO(void, glUniform2i, GLint location,GLint v0,GLint v1)
XMACRO(void, glUniform2iv, GLint location,GLsizei count,const GLint *value)
XMACRO(void, glUniform3f, GLint location,GLfloat v0,GLfloat v1,GLfloat v2)
XMACRO(void, glUniform3fv, GLint location,GLsizei count,const GLfloat *value)
XMACRO(void, glUniform3i, GLint location,GLint v0,GLint v1,GLint v2)
XMACRO(void, glUniform3iv, GLint location,GLsizei count,const GLint *value)
XMACRO(void, glUniform4f, GLint location,GLfloat v0,GLfloat v1,GLfloat v2,GLfloat v3)
XMACRO(void, glUniform4fv, GLint location,GLsizei count,const GLfloat *value)
XMACRO(void, glUniform4i, GLint location,GLint v0,GLint v1,GLint v2,GLint v3)
XMACRO(void, glUniform4iv, GLint location,GLsizei count,const GLint *value)
XMACRO(void, glUniformMatrix2fv, GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
XMACRO(void, glUniformMatrix3fv, GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
XMACRO(void, glUniformMatrix4fv, GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
XMACRO(void, glUseProgram, GLuint program)
XMACRO(void, glValidateProgram, GLuint program)
XMACRO(void, glVertexAttrib1f, GLuint index,GLfloat x)
XMACRO(void, glVertexAttrib1fv, GLuint index,const GLfloat *v)
XMACRO(void, glVertexAttrib2f, GLuint index,GLfloat x,GLfloat y)
XMACRO(void, glVertexAttrib2fv, GLuint index,const GLfloat *v)
XMACRO(void, glVertexAttrib3f, GLuint index,GLfloat x,GLfloat y,GLfloat z)
XMACRO(void, glVertexAttrib3fv, GLuint index,const GLfloat *v)
XMACRO(void, glVertexAttrib4f, GLuint index,GLfloat x,GLfloat y,GLfloat z,GLfloat w)
XMACRO(void, glVertexAttrib4fv, GLuint index,const GLfloat *v)
XMACRO(void, glVertexAttribPointer, GLuint index,GLint size,GLenum type,GLboolean normalized,GLsizei stride,const void *pointer)
XMACRO(void, glViewport, GLint x,GLint y,GLsizei width,GLsizei height)
XMACRO(void, glReadBuffer, GLenum src)
XMACRO(void, glDrawRangeElements, GLenum mode,GLuint start,GLuint end,GLsizei count,GLenum type,const void *indices)
XMACRO(void, glTexImage3D, GLenum target,GLint level,GLint internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLenum format,GLenum type,const void *pixels)
XMACRO(void, glTexSubImage3D, GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLenum type,const void *pixels)
XMACRO(void, glCopyTexSubImage3D, GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLint x,GLint y,GLsizei width,GLsizei height)
XMACRO(void, glCompressedTexImage3D, GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLsizei imageSize,const void *data)
XMACRO(void, glCompressedTexSubImage3D, GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLsizei imageSize,const void *data)
XMACRO(void, glGenQueries, GLsizei n,GLuint *ids)
XMACRO(void, glDeleteQueries, GLsizei n,const GLuint *ids)
XMACRO(GLboolean, glIsQuery, GLuint id)
XMACRO(void, glBeginQuery, GLenum target,GLuint id)
XMACRO(void, glEndQuery, GLenum target)
XMACRO(void, glGetQueryiv, GLenum target,GLenum pname,GLint *params)
XMACRO(void, glGetQueryObjectuiv, GLuint id,GLenum pname,GLuint *params)
XMACRO(GLboolean, glUnmapBuffer, GLenum target)
XMACRO(void, glGetBufferPointerv, GLenum target,GLenum pname,void **params)
XMACRO(void, glDrawBuffers, GLsizei n,const GLenum *bufs)
XMACRO(void, glUniformMatrix2x3fv, GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
XMACRO(void, glUniformMatrix3x2fv, GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
XMACRO(void, glUniformMatrix2x4fv, GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
XMACRO(void, glUniformMatrix4x2fv, GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
XMACRO(void, glUniformMatrix3x4fv, GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
XMACRO(void, glUniformMatrix4x3fv, GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
XMACRO(void, glBlitFramebuffer, GLint srcX0,GLint srcY0,GLint srcX1,GLint srcY1,GLint dstX0,GLint dstY0,GLint dstX1,GLint dstY1,GLbitfield mask,GLenum filter)
XMACRO(void, glRenderbufferStorageMultisample, GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height)
XMACRO(void, glFramebufferTextureLayer, GLenum target,GLenum attachment,GLuint texture,GLint level,GLint layer)
XMACRO(void *, glMapBufferRange, GLenum target,GLintptr offset,GLsizeiptr length,GLbitfield access)
XMACRO(void, glFlushMappedBufferRange, GLenum target,GLintptr offset,GLsizeiptr length)
XMACRO(void, glBindVertexArray, GLuint array)
XMACRO(void, glDeleteVertexArrays, GLsizei n,const GLuint *arrays)
XMACRO(void, glGenVertexArrays, GLsizei n,GLuint *arrays)
XMACRO(GLboolean, glIsVertexArray, GLuint array)
XMACRO(void, glGetIntegeri_v, GLenum target,GLuint index,GLint *data)
XMACRO(void, glBeginTransformFeedback, GLenum primitiveMode)
XMACRO(void, glEndTransformFeedback)
XMACRO(void, glBindBufferRange, GLenum target,GLuint index,GLuint buffer,GLintptr offset,GLsizeiptr size)
XMACRO(void, glBindBufferBase, GLenum target,GLuint index,GLuint buffer)
XMACRO(void, glTransformFeedbackVaryings, GLuint program,GLsizei count,const GLchar *const*varyings,GLenum bufferMode)
XMACRO(void, glGetTransformFeedbackVarying, GLuint program,GLuint index,GLsizei bufSize,GLsizei *length,GLsizei *size,GLenum *type,GLchar *name)
XMACRO(void, glVertexAttribIPointer, GLuint index,GLint size,GLenum type,GLsizei stride,const void *pointer)
XMACRO(void, glGetVertexAttribIiv, GLuint index,GLenum pname,GLint *params)
XMACRO(void, glGetVertexAttribIuiv, GLuint index,GLenum pname,GLuint *params)
XMACRO(void, glVertexAttribI4i, GLuint index,GLint x,GLint y,GLint z,GLint w)
XMACRO(void, glVertexAttribI4ui, GLuint index,GLuint x,GLuint y,GLuint z,GLuint w)
XMACRO(void, glVertexAttribI4iv, GLuint index,const GLint *v)
XMACRO(void, glVertexAttribI4uiv, GLuint index,const GLuint *v)
XMACRO(void, glGetUniformuiv, GLuint program,GLint location,GLuint *params)
XMACRO(GLint, glGetFragDataLocation, GLuint program,const GLchar *name)
XMACRO(void, glUniform1ui, GLint location,GLuint v0)
XMACRO(void, glUniform2ui, GLint location,GLuint v0,GLuint v1)
XMACRO(void, glUniform3ui, GLint location,GLuint v0,GLuint v1,GLuint v2)
XMACRO(void, glUniform4ui, GLint location,GLuint v0,GLuint v1,GLuint v2,GLuint v3)
XMACRO(void, glUniform1uiv, GLint location,GLsizei count,const GLuint *value)
XMACRO(void, glUniform2uiv, GLint location,GLsizei count,const GLuint *value)
XMACRO(void, glUniform3uiv, GLint location,GLsizei count,const GLuint *value)
XMACRO(void, glUniform4uiv, GLint location,GLsizei count,const GLuint *value)
XMACRO(void, glClearBufferiv, GLenum buffer,GLint drawbuffer,const GLint *value)
XMACRO(void, glClearBufferuiv, GLenum buffer,GLint drawbuffer,const GLuint *value)
XMACRO(void, glClearBufferfv, GLenum buffer,GLint drawbuffer,const GLfloat *value)
XMACRO(void, glClearBufferfi, GLenum buffer,GLint drawbuffer,GLfloat depth,GLint stencil)
XMACRO(const GLubyte*, glGetStringi, GLenum name,GLuint index)
XMACRO(void, glCopyBufferSubData, GLenum readTarget,GLenum writeTarget,GLintptr readOffset,GLintptr writeOffset,GLsizeiptr size)
XMACRO(void, glGetUniformIndices, GLuint program,GLsizei uniformCount,const GLchar *const*uniformNames,GLuint *uniformIndices)
XMACRO(void, glGetActiveUniformsiv, GLuint program,GLsizei uniformCount,const GLuint *uniformIndices,GLenum pname,GLint *params)
XMACRO(GLuint, glGetUniformBlockIndex, GLuint program,const GLchar *uniformBlockName)
XMACRO(void, glGetActiveUniformBlockiv, GLuint program,GLuint uniformBlockIndex,GLenum pname,GLint *params)
XMACRO(void, glGetActiveUniformBlockName, GLuint program,GLuint uniformBlockIndex,GLsizei bufSize,GLsizei *length,GLchar *uniformBlockName)
XMACRO(void, glUniformBlockBinding, GLuint program,GLuint uniformBlockIndex,GLuint uniformBlockBinding)
XMACRO(void, glDrawArraysInstanced, GLenum mode,GLint first,GLsizei count,GLsizei instancecount)
XMACRO(void, glDrawElementsInstanced, GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei instancecount)
XMACRO(GLsync, glFenceSync, GLenum condition,GLbitfield flags)
XMACRO(GLboolean, glIsSync, GLsync sync)
XMACRO(void, glDeleteSync, GLsync sync)
XMACRO(GLenum, glClientWaitSync, GLsync sync,GLbitfield flags,GLuint64 timeout)
XMACRO(void, glWaitSync, GLsync sync,GLbitfield flags,GLuint64 timeout)
XMACRO(void, glGetInteger64v, GLenum pname,GLint64 *data)
XMACRO(void, glGetSynciv, GLsync sync,GLenum pname,GLsizei bufSize,GLsizei *length,GLint *values)
XMACRO(void, glGetInteger64i_v, GLenum target,GLuint index,GLint64 *data)
XMACRO(void, glGetBufferParameteri64v, GLenum target,GLenum pname,GLint64 *params)
XMACRO(void, glGenSamplers, GLsizei count,GLuint *samplers)
XMACRO(void, glDeleteSamplers, GLsizei count,const GLuint *samplers)
XMACRO(GLboolean, glIsSampler, GLuint sampler)
XMACRO(void, glBindSampler, GLuint unit,GLuint sampler)
XMACRO(void, glSamplerParameteri, GLuint sampler,GLenum pname,GLint param)
XMACRO(void, glSamplerParameteriv, GLuint sampler,GLenum pname,const GLint *param)
XMACRO(void, glSamplerParameterf, GLuint sampler,GLenum pname,GLfloat param)
XMACRO(void, glSamplerParameterfv, GLuint sampler,GLenum pname,const GLfloat *param)
XMACRO(void, glGetSamplerParameteriv, GLuint sampler,GLenum pname,GLint *params)
XMACRO(void, glGetSamplerParameterfv, GLuint sampler,GLenum pname,GLfloat *params)
XMACRO(void, glVertexAttribDivisor, GLuint index,GLuint divisor)
XMACRO(void, glBindTransformFeedback, GLenum target,GLuint id)
XMACRO(void, glDeleteTransformFeedbacks, GLsizei n,const GLuint *ids)
XMACRO(void, glGenTransformFeedbacks, GLsizei n,GLuint *ids)
XMACRO(GLboolean, glIsTransformFeedback, GLuint id)
XMACRO(void, glPauseTransformFeedback)
XMACRO(void, glResumeTransformFeedback)
XMACRO(void, glGetProgramBinary, GLuint program,GLsizei bufSize,GLsizei *length,GLenum *binaryFormat,void *binary)
XMACRO(void, glProgramBinary, GLuint program,GLenum binaryFormat,const void *binary,GLsizei length)
XMACRO(void, glProgramParameteri, GLuint program,GLenum pname,GLint value)
XMACRO(void, glInvalidateFramebuffer, GLenum target,GLsizei numAttachments,const GLenum *attachments)
XMACRO(void, glInvalidateSubFramebuffer, GLenum target,GLsizei numAttachments,const GLenum *attachments,GLint x,GLint y,GLsizei width,GLsizei height)
XMACRO(void, glTexStorage2D, GLenum target,GLsizei levels,GLenum internalformat,GLsizei width,GLsizei height)
XMACRO(void, glTexStorage3D, GLenum target,GLsizei levels,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth)
XMACRO(void, glGetInternalformativ, GLenum target,GLenum internalformat,GLenum pname,GLsizei bufSize,GLint *params)
XMACRO(void, glDispatchCompute, GLuint num_groups_x,GLuint num_groups_y,GLuint num_groups_z)
XMACRO(void, glDispatchComputeIndirect, GLintptr indirect)
XMACRO(void, glDrawArraysIndirect, GLenum mode,const void *indirect)
XMACRO(void, glDrawElementsIndirect, GLenum mode,GLenum type,const void *indirect)
XMACRO(void, glFramebufferParameteri, GLenum target,GLenum pname,GLint param)
XMACRO(void, glGetFramebufferParameteriv, GLenum target,GLenum pname,GLint *params)
XMACRO(void, glGetProgramInterfaceiv, GLuint program,GLenum programInterface,GLenum pname,GLint *params)
XMACRO(GLuint, glGetProgramResourceIndex, GLuint program,GLenum programInterface,const GLchar *name)
XMACRO(void, glGetProgramResourceName, GLuint program,GLenum programInterface,GLuint index,GLsizei bufSize,GLsizei *length,GLchar *name)
XMACRO(void, glGetProgramResourceiv, GLuint program,GLenum programInterface,GLuint index,GLsizei propCount,const GLenum *props,GLsizei bufSize,GLsizei *length,GLint *params)
XMACRO(GLint, glGetProgramResourceLocation, GLuint program,GLenum programInterface,const GLchar *name)
XMACRO(void, glUseProgramStages, GLuint pipeline,GLbitfield stages,GLuint program)
XMACRO(void, glActiveShaderProgram, GLuint pipeline,GLuint program)
XMACRO(GLuint, glCreateShaderProgramv, GLenum type,GLsizei count,const GLchar *const*strings)
XMACRO(void, glBindProgramPipeline, GLuint pipeline)
XMACRO(void, glDeleteProgramPipelines, GLsizei n,const GLuint *pipelines)
XMACRO(void, glGenProgramPipelines, GLsizei n,GLuint *pipelines)
XMACRO(GLboolean, glIsProgramPipeline, GLuint pipeline)
XMACRO(void, glGetProgramPipelineiv, GLuint pipeline,GLenum pname,GLint *params)
XMACRO(void, glProgramUniform1i, GLuint program,GLint location,GLint v0)
XMACRO(void, glProgramUniform2i, GLuint program,GLint location,GLint v0,GLint v1)
XMACRO(void, glProgramUniform3i, GLuint program,GLint location,GLint v0,GLint v1,GLint v2)
XMACRO(void, glProgramUniform4i, GLuint program,GLint location,GLint v0,GLint v1,GLint v2,GLint v3)
XMACRO(void, glProgramUniform1ui, GLuint program,GLint location,GLuint v0)
XMACRO(void, glProgramUniform2ui, GLuint program,GLint location,GLuint v0,GLuint v1)
XMACRO(void, glProgramUniform3ui, GLuint program,GLint location,GLuint v0,GLuint v1,GLuint v2)
XMACRO(void, glProgramUniform4ui, GLuint program,GLint location,GLuint v0,GLuint v1,GLuint v2,GLuint v3)
XMACRO(void, glProgramUniform1f, GLuint program,GLint location,GLfloat v0)
XMACRO(void, glProgramUniform2f, GLuint program,GLint location,GLfloat v0,GLfloat v1)
XMACRO(void, glProgramUniform3f, GLuint program,GLint location,GLfloat v0,GLfloat v1,GLfloat v2)
XMACRO(void, glProgramUniform4f, GLuint program,GLint location,GLfloat v0,GLfloat v1,GLfloat v2,GLfloat v3)
XMACRO(void, glProgramUniform1iv, GLuint program,GLint location,GLsizei count,const GLint *value)
XMACRO(void, glProgramUniform2iv, GLuint program,GLint location,GLsizei count,const GLint *value)
XMACRO(void, glProgramUniform3iv, GLuint program,GLint location,GLsizei count,const GLint *value)
XMACRO(void, glProgramUniform4iv, GLuint program,GLint location,GLsizei count,const GLint *value)
XMACRO(void, glProgramUniform1uiv, GLuint program,GLint location,GLsizei count,const GLuint *value)
XMACRO(void, glProgramUniform2uiv, GLuint program,GLint location,GLsizei count,const GLuint *value)
XMACRO(void, glProgramUniform3uiv, GLuint program,GLint location,GLsizei count,const GLuint *value)
XMACRO(void, glProgramUniform4uiv, GLuint program,GLint location,GLsizei count,const GLuint *value)
XMACRO(void, glProgramUniform1fv, GLuint program,GLint location,GLsizei count,const GLfloat *value)
XMACRO(void, glProgramUniform2fv, GLuint program,GLint location,GLsizei count,const GLfloat *value)
XMACRO(void, glProgramUniform3fv, GLuint program,GLint location,GLsizei count,const GLfloat *value)
XMACRO(void, glProgramUniform4fv, GLuint program,GLint location,GLsizei count,const GLfloat *value)
XMACRO(void, glProgramUniformMatrix2fv, GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
XMACRO(void, glProgramUniformMatrix3fv, GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
XMACRO(void, glProgramUniformMatrix4fv, GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
XMACRO(void, glProgramUniformMatrix2x3fv, GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
XMACRO(void, glProgramUniformMatrix3x2fv, GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
XMACRO(void, glProgramUniformMatrix2x4fv, GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
XMACRO(void, glProgramUniformMatrix4x2fv, GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
XMACRO(void, glProgramUniformMatrix3x4fv, GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
XMACRO(void, glProgramUniformMatrix4x3fv, GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
XMACRO(void, glValidateProgramPipeline, GLuint pipeline)
XMACRO(void, glGetProgramPipelineInfoLog, GLuint pipeline,GLsizei bufSize,GLsizei *length,GLchar *infoLog)
XMACRO(void, glBindImageTexture, GLuint unit,GLuint texture,GLint level,GLboolean layered,GLint layer,GLenum access,GLenum format)
XMACRO(void, glGetBooleani_v, GLenum target,GLuint index,GLboolean *data)
XMACRO(void, glMemoryBarrier, GLbitfield barriers)
XMACRO(void, glMemoryBarrierByRegion, GLbitfield barriers)
XMACRO(void, glTexStorage2DMultisample, GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height,GLboolean fixedsamplelocations)
XMACRO(void, glGetMultisamplefv, GLenum pname,GLuint index,GLfloat *val)
XMACRO(void, glSampleMaski, GLuint maskNumber,GLbitfield mask)
XMACRO(void, glGetTexLevelParameteriv, GLenum target,GLint level,GLenum pname,GLint *params)
XMACRO(void, glGetTexLevelParameterfv, GLenum target,GLint level,GLenum pname,GLfloat *params)
XMACRO(void, glBindVertexBuffer, GLuint bindingindex,GLuint buffer,GLintptr offset,GLsizei stride)
XMACRO(void, glVertexAttribFormat, GLuint attribindex,GLint size,GLenum type,GLboolean normalized,GLuint relativeoffset)
XMACRO(void, glVertexAttribIFormat, GLuint attribindex,GLint size,GLenum type,GLuint relativeoffset)
XMACRO(void, glVertexAttribBinding, GLuint attribindex,GLuint bindingindex)
XMACRO(void, glVertexBindingDivisor, GLuint bindingindex,GLuint divisor)
