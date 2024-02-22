cmake_minimum_required(VERSION 3.8)

project(Demo)

file(GLOB_RECURSE SOURCES "main.cpp")

if(CMAKE_GENERATOR MATCHES "Visual Studio")
	source_group(TREE 												${CMAKE_CURRENT_SOURCE_DIR} FILES 		${SOURCES})
	file(GLOB LIB "../build/Debug/a.lib")
else()
	file(GLOB LIB "../liba.a")
endif()

add_executable(Demo ${SOURCES})

set_target_properties(Demo PROPERTIES LINKER_LANGUAGE CXX)

target_link_libraries(Demo ${LIB})