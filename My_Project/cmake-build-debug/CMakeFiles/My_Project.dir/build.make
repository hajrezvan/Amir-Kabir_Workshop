# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /cygdrive/c/Users/hajrezvan/.CLion2019.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/hajrezvan/.CLion2019.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/d/Programming/C/My_Project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/d/Programming/C/My_Project/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/My_Project.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/My_Project.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/My_Project.dir/flags.make

CMakeFiles/My_Project.dir/main.c.o: CMakeFiles/My_Project.dir/flags.make
CMakeFiles/My_Project.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/Programming/C/My_Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/My_Project.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/My_Project.dir/main.c.o   -c /cygdrive/d/Programming/C/My_Project/main.c

CMakeFiles/My_Project.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/My_Project.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/d/Programming/C/My_Project/main.c > CMakeFiles/My_Project.dir/main.c.i

CMakeFiles/My_Project.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/My_Project.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/d/Programming/C/My_Project/main.c -o CMakeFiles/My_Project.dir/main.c.s

# Object files for target My_Project
My_Project_OBJECTS = \
"CMakeFiles/My_Project.dir/main.c.o"

# External object files for target My_Project
My_Project_EXTERNAL_OBJECTS =

My_Project.exe: CMakeFiles/My_Project.dir/main.c.o
My_Project.exe: CMakeFiles/My_Project.dir/build.make
My_Project.exe: CMakeFiles/My_Project.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/d/Programming/C/My_Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable My_Project.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/My_Project.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/My_Project.dir/build: My_Project.exe

.PHONY : CMakeFiles/My_Project.dir/build

CMakeFiles/My_Project.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/My_Project.dir/cmake_clean.cmake
.PHONY : CMakeFiles/My_Project.dir/clean

CMakeFiles/My_Project.dir/depend:
	cd /cygdrive/d/Programming/C/My_Project/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/d/Programming/C/My_Project /cygdrive/d/Programming/C/My_Project /cygdrive/d/Programming/C/My_Project/cmake-build-debug /cygdrive/d/Programming/C/My_Project/cmake-build-debug /cygdrive/d/Programming/C/My_Project/cmake-build-debug/CMakeFiles/My_Project.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/My_Project.dir/depend
