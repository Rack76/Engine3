cmake_minimum_required(VERSION 3.8)

project(Demo)

file(GLOB_RECURSE SOURCES "main.cpp")
file(GLOB LIB "../build/Debug/a.lib")

add_executable(Demo ${SOURCES})

set_target_properties(Demo PROPERTIES LINKER_LANGUAGE CXX)

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SOURCES})

target_link_libraries(Demo ${LIB})