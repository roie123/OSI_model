# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

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
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/royivri/networking/OSI_MODEL/networking_project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/royivri/networking/OSI_MODEL/networking_project/build

# Include any dependencies generated for this target.
include CMakeFiles/networking_project.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/networking_project.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/networking_project.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/networking_project.dir/flags.make

CMakeFiles/networking_project.dir/codegen:
.PHONY : CMakeFiles/networking_project.dir/codegen

CMakeFiles/networking_project.dir/main.c.o: CMakeFiles/networking_project.dir/flags.make
CMakeFiles/networking_project.dir/main.c.o: /home/royivri/networking/OSI_MODEL/networking_project/main.c
CMakeFiles/networking_project.dir/main.c.o: CMakeFiles/networking_project.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/royivri/networking/OSI_MODEL/networking_project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/networking_project.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/networking_project.dir/main.c.o -MF CMakeFiles/networking_project.dir/main.c.o.d -o CMakeFiles/networking_project.dir/main.c.o -c /home/royivri/networking/OSI_MODEL/networking_project/main.c

CMakeFiles/networking_project.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/networking_project.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/royivri/networking/OSI_MODEL/networking_project/main.c > CMakeFiles/networking_project.dir/main.c.i

CMakeFiles/networking_project.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/networking_project.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/royivri/networking/OSI_MODEL/networking_project/main.c -o CMakeFiles/networking_project.dir/main.c.s

# Object files for target networking_project
networking_project_OBJECTS = \
"CMakeFiles/networking_project.dir/main.c.o"

# External object files for target networking_project
networking_project_EXTERNAL_OBJECTS =

networking_project: CMakeFiles/networking_project.dir/main.c.o
networking_project: CMakeFiles/networking_project.dir/build.make
networking_project: CMakeFiles/networking_project.dir/compiler_depend.ts
networking_project: CMakeFiles/networking_project.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/royivri/networking/OSI_MODEL/networking_project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable networking_project"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/networking_project.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/networking_project.dir/build: networking_project
.PHONY : CMakeFiles/networking_project.dir/build

CMakeFiles/networking_project.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/networking_project.dir/cmake_clean.cmake
.PHONY : CMakeFiles/networking_project.dir/clean

CMakeFiles/networking_project.dir/depend:
	cd /home/royivri/networking/OSI_MODEL/networking_project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/royivri/networking/OSI_MODEL/networking_project /home/royivri/networking/OSI_MODEL/networking_project /home/royivri/networking/OSI_MODEL/networking_project/build /home/royivri/networking/OSI_MODEL/networking_project/build /home/royivri/networking/OSI_MODEL/networking_project/build/CMakeFiles/networking_project.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/networking_project.dir/depend

