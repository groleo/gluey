# gluey

An header-only library, used to install hooks on functions.
This is intented to be used as a wrapper around EGL/GL API.

A function hook has a type, (enum SPUType) and an attribute (enum HookAttributes).
SPUType describes what that hook should be doing; for example
SPU_TYPE_SHIM is the entry point, SPU_TYPE_DUMP dumps the function name
SPU_TYPE_ORIG_FPTR invokes the original function address (obtained via dladdr).

Each hook can be disabled or enabled or always call.

An example is found under src/hooks/egl/egl_init.cpp, where
we first hook eglCreateContext, eglSwapBuffers and eglGetDisplay
then we set the original function addresses using hook_set_orig().

# building

cmake .
make

# testing
./bin/gluey /usr/bin/glmark2-es2
