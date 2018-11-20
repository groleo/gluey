find_package(PythonInterp)

set(GEN_API
	egl-shim.h
	egl-xmacro.h
	eglext-shim.h
	eglext-xmacro.h
	gl2-shim.h
	gl2-xmacro.h
	gl2ext-shim.h
	gl2ext-xmacro.h
)
add_custom_command(OUTPUT ${GEN_API}
	COMMAND ${PYTHON_EXECUTABLE} ${PROJECT_SOURCE_DIR}/tools/genheaders.py         -apiname egl   -registry   ${PROJECT_SOURCE_DIR}/xml/khronos/egl.xml
	COMMAND ${PYTHON_EXECUTABLE} ${PROJECT_SOURCE_DIR}/tools/genapi.py -gen xmacro -apiname egl   -registry   ${PROJECT_SOURCE_DIR}/xml/khronos/egl.xml
	COMMAND ${PYTHON_EXECUTABLE} ${PROJECT_SOURCE_DIR}/tools/genapi.py -gen shim   -apiname egl   -registry   ${PROJECT_SOURCE_DIR}/xml/khronos/egl.xml
	COMMAND ${PYTHON_EXECUTABLE} ${PROJECT_SOURCE_DIR}/tools/genheaders.py         -apiname gles2 -registry   ${PROJECT_SOURCE_DIR}/xml/khronos/gl.xml
	COMMAND ${PYTHON_EXECUTABLE} ${PROJECT_SOURCE_DIR}/tools/genapi.py -gen xmacro -apiname gles2 -registry   ${PROJECT_SOURCE_DIR}/xml/khronos/gl.xml
	COMMAND ${PYTHON_EXECUTABLE} ${PROJECT_SOURCE_DIR}/tools/genapi.py -gen shim   -apiname gles2 -registry   ${PROJECT_SOURCE_DIR}/xml/khronos/gl.xml
	WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/gen
	DEPENDS ${GENERATOR}
	COMMENT "Generating API"
)
add_custom_target(gen DEPENDS ${GEN_API}
	COMMENT "Generating dependencies"
)
