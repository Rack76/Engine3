cmake_minimum_required(VERSION 3.8)

project(Engine)

file(GLOB_RECURSE SOURCES "src/*.cpp")

file(GLOB_RECURSE HEADERS "headers/*.h")

add_library(a ${SOURCES} ${HEADERS})

set_target_properties(a PROPERTIES LINKER_LANGUAGE CXX)