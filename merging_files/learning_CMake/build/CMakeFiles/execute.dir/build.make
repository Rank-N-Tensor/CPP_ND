# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/adi/CPP_ND/merging_files/learning_CMake

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/adi/CPP_ND/merging_files/learning_CMake/build

# Include any dependencies generated for this target.
include CMakeFiles/execute.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/execute.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/execute.dir/flags.make

CMakeFiles/execute.dir/src/add_sum_vec.cpp.o: CMakeFiles/execute.dir/flags.make
CMakeFiles/execute.dir/src/add_sum_vec.cpp.o: ../src/add_sum_vec.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adi/CPP_ND/merging_files/learning_CMake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/execute.dir/src/add_sum_vec.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/execute.dir/src/add_sum_vec.cpp.o -c /home/adi/CPP_ND/merging_files/learning_CMake/src/add_sum_vec.cpp

CMakeFiles/execute.dir/src/add_sum_vec.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/execute.dir/src/add_sum_vec.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adi/CPP_ND/merging_files/learning_CMake/src/add_sum_vec.cpp > CMakeFiles/execute.dir/src/add_sum_vec.cpp.i

CMakeFiles/execute.dir/src/add_sum_vec.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/execute.dir/src/add_sum_vec.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adi/CPP_ND/merging_files/learning_CMake/src/add_sum_vec.cpp -o CMakeFiles/execute.dir/src/add_sum_vec.cpp.s

# Object files for target execute
execute_OBJECTS = \
"CMakeFiles/execute.dir/src/add_sum_vec.cpp.o"

# External object files for target execute
execute_EXTERNAL_OBJECTS =

execute: CMakeFiles/execute.dir/src/add_sum_vec.cpp.o
execute: CMakeFiles/execute.dir/build.make
execute: CMakeFiles/execute.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/adi/CPP_ND/merging_files/learning_CMake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable execute"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/execute.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/execute.dir/build: execute

.PHONY : CMakeFiles/execute.dir/build

CMakeFiles/execute.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/execute.dir/cmake_clean.cmake
.PHONY : CMakeFiles/execute.dir/clean

CMakeFiles/execute.dir/depend:
	cd /home/adi/CPP_ND/merging_files/learning_CMake/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adi/CPP_ND/merging_files/learning_CMake /home/adi/CPP_ND/merging_files/learning_CMake /home/adi/CPP_ND/merging_files/learning_CMake/build /home/adi/CPP_ND/merging_files/learning_CMake/build /home/adi/CPP_ND/merging_files/learning_CMake/build/CMakeFiles/execute.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/execute.dir/depend

