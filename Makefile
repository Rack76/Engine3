# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.

# The CMake executable.
CMAKE_COMMAND = /data/data/ru.iiec.cxxdroid/files/bin/cmake

# The command to remove a file.
RM = /data/data/ru.iiec.cxxdroid/files/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /storage/emulated/0/Documents/Cxxdroid/Engine3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /storage/emulated/0/Documents/Cxxdroid/Engine3

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/data/data/ru.iiec.cxxdroid/files/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/data/data/ru.iiec.cxxdroid/files/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /storage/emulated/0/Documents/Cxxdroid/Engine3/CMakeFiles /storage/emulated/0/Documents/Cxxdroid/Engine3//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /storage/emulated/0/Documents/Cxxdroid/Engine3/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named a

# Build rule for target.
a : cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 a
.PHONY : a

# fast build rule for target.
a/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/a.dir/build.make CMakeFiles/a.dir/build
.PHONY : a/fast

#=============================================================================
# Target rules for targets named Demo

# Build rule for target.
Demo: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 Demo
.PHONY : Demo

# fast build rule for target.
Demo/fast:
	$(MAKE) $(MAKESILENT) -f demo/CMakeFiles/Demo.dir/build.make demo/CMakeFiles/Demo.dir/build
.PHONY : Demo/fast

src/Archetype.o: src/Archetype.cpp.o
.PHONY : src/Archetype.o

# target to build an object file
src/Archetype.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/a.dir/build.make CMakeFiles/a.dir/src/Archetype.cpp.o
.PHONY : src/Archetype.cpp.o

src/Archetype.i: src/Archetype.cpp.i
.PHONY : src/Archetype.i

# target to preprocess a source file
src/Archetype.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/a.dir/build.make CMakeFiles/a.dir/src/Archetype.cpp.i
.PHONY : src/Archetype.cpp.i

src/Archetype.s: src/Archetype.cpp.s
.PHONY : src/Archetype.s

# target to generate assembly for a file
src/Archetype.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/a.dir/build.make CMakeFiles/a.dir/src/Archetype.cpp.s
.PHONY : src/Archetype.cpp.s

src/Component.o: src/Component.cpp.o
.PHONY : src/Component.o

# target to build an object file
src/Component.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/a.dir/build.make CMakeFiles/a.dir/src/Component.cpp.o
.PHONY : src/Component.cpp.o

src/Component.i: src/Component.cpp.i
.PHONY : src/Component.i

# target to preprocess a source file
src/Component.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/a.dir/build.make CMakeFiles/a.dir/src/Component.cpp.i
.PHONY : src/Component.cpp.i

src/Component.s: src/Component.cpp.s
.PHONY : src/Component.s

# target to generate assembly for a file
src/Component.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/a.dir/build.make CMakeFiles/a.dir/src/Component.cpp.s
.PHONY : src/Component.cpp.s

src/ComponentManager.o: src/ComponentManager.cpp.o
.PHONY : src/ComponentManager.o

# target to build an object file
src/ComponentManager.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/a.dir/build.make CMakeFiles/a.dir/src/ComponentManager.cpp.o
.PHONY : src/ComponentManager.cpp.o

src/ComponentManager.i: src/ComponentManager.cpp.i
.PHONY : src/ComponentManager.i

# target to preprocess a source file
src/ComponentManager.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/a.dir/build.make CMakeFiles/a.dir/src/ComponentManager.cpp.i
.PHONY : src/ComponentManager.cpp.i

src/ComponentManager.s: src/ComponentManager.cpp.s
.PHONY : src/ComponentManager.s

# target to generate assembly for a file
src/ComponentManager.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/a.dir/build.make CMakeFiles/a.dir/src/ComponentManager.cpp.s
.PHONY : src/ComponentManager.cpp.s

src/EntityManager.o: src/EntityManager.cpp.o
.PHONY : src/EntityManager.o

# target to build an object file
src/EntityManager.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/a.dir/build.make CMakeFiles/a.dir/src/EntityManager.cpp.o
.PHONY : src/EntityManager.cpp.o

src/EntityManager.i: src/EntityManager.cpp.i
.PHONY : src/EntityManager.i

# target to preprocess a source file
src/EntityManager.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/a.dir/build.make CMakeFiles/a.dir/src/EntityManager.cpp.i
.PHONY : src/EntityManager.cpp.i

src/EntityManager.s: src/EntityManager.cpp.s
.PHONY : src/EntityManager.s

# target to generate assembly for a file
src/EntityManager.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/a.dir/build.make CMakeFiles/a.dir/src/EntityManager.cpp.s
.PHONY : src/EntityManager.cpp.s

src/Log.o: src/Log.cpp.o
.PHONY : src/Log.o

# target to build an object file
src/Log.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/a.dir/build.make CMakeFiles/a.dir/src/Log.cpp.o
.PHONY : src/Log.cpp.o

src/Log.i: src/Log.cpp.i
.PHONY : src/Log.i

# target to preprocess a source file
src/Log.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/a.dir/build.make CMakeFiles/a.dir/src/Log.cpp.i
.PHONY : src/Log.cpp.i

src/Log.s: src/Log.cpp.s
.PHONY : src/Log.s

# target to generate assembly for a file
src/Log.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/a.dir/build.make CMakeFiles/a.dir/src/Log.cpp.s
.PHONY : src/Log.cpp.s

src/NameAllocator.o: src/NameAllocator.cpp.o
.PHONY : src/NameAllocator.o

# target to build an object file
src/NameAllocator.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/a.dir/build.make CMakeFiles/a.dir/src/NameAllocator.cpp.o
.PHONY : src/NameAllocator.cpp.o

src/NameAllocator.i: src/NameAllocator.cpp.i
.PHONY : src/NameAllocator.i

# target to preprocess a source file
src/NameAllocator.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/a.dir/build.make CMakeFiles/a.dir/src/NameAllocator.cpp.i
.PHONY : src/NameAllocator.cpp.i

src/NameAllocator.s: src/NameAllocator.cpp.s
.PHONY : src/NameAllocator.s

# target to generate assembly for a file
src/NameAllocator.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/a.dir/build.make CMakeFiles/a.dir/src/NameAllocator.cpp.s
.PHONY : src/NameAllocator.cpp.s

src/PoolAllocator.o: src/PoolAllocator.cpp.o
.PHONY : src/PoolAllocator.o

# target to build an object file
src/PoolAllocator.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/a.dir/build.make CMakeFiles/a.dir/src/PoolAllocator.cpp.o
.PHONY : src/PoolAllocator.cpp.o

src/PoolAllocator.i: src/PoolAllocator.cpp.i
.PHONY : src/PoolAllocator.i

# target to preprocess a source file
src/PoolAllocator.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/a.dir/build.make CMakeFiles/a.dir/src/PoolAllocator.cpp.i
.PHONY : src/PoolAllocator.cpp.i

src/PoolAllocator.s: src/PoolAllocator.cpp.s
.PHONY : src/PoolAllocator.s

# target to generate assembly for a file
src/PoolAllocator.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/a.dir/build.make CMakeFiles/a.dir/src/PoolAllocator.cpp.s
.PHONY : src/PoolAllocator.cpp.s

src/VLUI64.o: src/VLUI64.cpp.o
.PHONY : src/VLUI64.o

# target to build an object file
src/VLUI64.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/a.dir/build.make CMakeFiles/a.dir/src/VLUI64.cpp.o
.PHONY : src/VLUI64.cpp.o

src/VLUI64.i: src/VLUI64.cpp.i
.PHONY : src/VLUI64.i

# target to preprocess a source file
src/VLUI64.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/a.dir/build.make CMakeFiles/a.dir/src/VLUI64.cpp.i
.PHONY : src/VLUI64.cpp.i

src/VLUI64.s: src/VLUI64.cpp.s
.PHONY : src/VLUI64.s

# target to generate assembly for a file
src/VLUI64.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/a.dir/build.make CMakeFiles/a.dir/src/VLUI64.cpp.s
.PHONY : src/VLUI64.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... Demo"
	@echo "... a"
	@echo "... src/Archetype.o"
	@echo "... src/Archetype.i"
	@echo "... src/Archetype.s"
	@echo "... src/Component.o"
	@echo "... src/Component.i"
	@echo "... src/Component.s"
	@echo "... src/ComponentManager.o"
	@echo "... src/ComponentManager.i"
	@echo "... src/ComponentManager.s"
	@echo "... src/EntityManager.o"
	@echo "... src/EntityManager.i"
	@echo "... src/EntityManager.s"
	@echo "... src/Log.o"
	@echo "... src/Log.i"
	@echo "... src/Log.s"
	@echo "... src/NameAllocator.o"
	@echo "... src/NameAllocator.i"
	@echo "... src/NameAllocator.s"
	@echo "... src/PoolAllocator.o"
	@echo "... src/PoolAllocator.i"
	@echo "... src/PoolAllocator.s"
	@echo "... src/VLUI64.o"
	@echo "... src/VLUI64.i"
	@echo "... src/VLUI64.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system
