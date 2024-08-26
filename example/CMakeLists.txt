project(id_example)

file(GLOB_RECURSE SRC_FILES src/*.cpp src/*.h src/*.hpp)

add_executable(id_example ${SRC_FILES})

target_link_libraries(id_example idlib)

target_include_directories(id_example PUBLIC src)