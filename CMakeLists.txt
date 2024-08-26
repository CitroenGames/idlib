cmake_minimum_required(VERSION 3.16.3)

project(idlib)

option(IDLIB_BUILD_Example "Enable building the examples." ON)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE SOURCES "idlib/*.c" "idlib/*.cpp" "idlib/*.h" "idlib/*.hpp")

add_library(idlib STATIC ${SOURCES})

target_include_directories(idlib PUBLIC .)

#precompiled header
target_precompile_headers(idlib PUBLIC idlib/precompiled.h)

if(IDLIB_BUILD_Example)
  add_subdirectory(example)
endif()