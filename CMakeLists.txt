project(gluey C CXX)
cmake_minimum_required(VERSION 2.8.11)
set (CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")

option (ENABLE_TESTS        "Enable tests." OFF)

####################
include_directories(
	./
	src/
)

set(CMAKE_CXX_FLAGS "-g -fPIC -Wall -Werror -std=c++11" )
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,--no-undefined")
set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -fPIC -Wl,--no-undefined")


add_library(Hook SHARED
	src/hooks/gl/gl_init.cpp
	src/hooks/egl/egl_init.cpp
)
target_link_libraries(Hook ${CMAKE_DL_LIBS})

add_executable(gluey src/gluey.cpp)
add_subdirectory(gen)
