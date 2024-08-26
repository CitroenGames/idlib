cmake_minimum_required(VERSION 3.16.3)

project(idlib)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE SOURCES "src/*.c" "src/*.cpp" "src/*.h" "src/*.hpp")

add_library(idlib STATIC ${SOURCES})

target_include_directories(idlib PUBLIC "src")