# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /snap/clion/129/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/129/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/skat/Desktop/HW1Glava/4 Глава 1 Номер"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/skat/Desktop/HW1Glava/4 Глава 1 Номер/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/4__1_.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/4__1_.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/4__1_.dir/flags.make

CMakeFiles/4__1_.dir/main.cpp.o: CMakeFiles/4__1_.dir/flags.make
CMakeFiles/4__1_.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/skat/Desktop/HW1Glava/4 Глава 1 Номер/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/4__1_.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/4__1_.dir/main.cpp.o -c "/home/skat/Desktop/HW1Glava/4 Глава 1 Номер/main.cpp"

CMakeFiles/4__1_.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/4__1_.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/skat/Desktop/HW1Glava/4 Глава 1 Номер/main.cpp" > CMakeFiles/4__1_.dir/main.cpp.i

CMakeFiles/4__1_.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/4__1_.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/skat/Desktop/HW1Glava/4 Глава 1 Номер/main.cpp" -o CMakeFiles/4__1_.dir/main.cpp.s

# Object files for target 4__1_
4__1__OBJECTS = \
"CMakeFiles/4__1_.dir/main.cpp.o"

# External object files for target 4__1_
4__1__EXTERNAL_OBJECTS =

4__1_: CMakeFiles/4__1_.dir/main.cpp.o
4__1_: CMakeFiles/4__1_.dir/build.make
4__1_: CMakeFiles/4__1_.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/skat/Desktop/HW1Glava/4 Глава 1 Номер/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 4__1_"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/4__1_.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/4__1_.dir/build: 4__1_

.PHONY : CMakeFiles/4__1_.dir/build

CMakeFiles/4__1_.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/4__1_.dir/cmake_clean.cmake
.PHONY : CMakeFiles/4__1_.dir/clean

CMakeFiles/4__1_.dir/depend:
	cd "/home/skat/Desktop/HW1Glava/4 Глава 1 Номер/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/skat/Desktop/HW1Glava/4 Глава 1 Номер" "/home/skat/Desktop/HW1Glava/4 Глава 1 Номер" "/home/skat/Desktop/HW1Glava/4 Глава 1 Номер/cmake-build-debug" "/home/skat/Desktop/HW1Glava/4 Глава 1 Номер/cmake-build-debug" "/home/skat/Desktop/HW1Glava/4 Глава 1 Номер/cmake-build-debug/CMakeFiles/4__1_.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/4__1_.dir/depend

