cmake_minimum_required(VERSION 3.8)

project(Engine)

file(GLOB_RECURSE SOURCES "src/*.cpp")

file(GLOB_RECURSE HEADERS "headers/*.h")

add_library(a ${SOURCES} ${HEADERS})

set_target_properties(a PROPERTIES LINKER_LANGUAGE CXX)

include_directories(headers)

add_subdirectory(demo)

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SOURCES} ${HEADERS})