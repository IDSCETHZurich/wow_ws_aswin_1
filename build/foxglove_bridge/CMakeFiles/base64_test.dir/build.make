# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_SOURCE_DIR = /home/pi/wow_ws/src/ros-foxglove-bridge

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pi/wow_ws/build/foxglove_bridge

# Include any dependencies generated for this target.
include CMakeFiles/base64_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/base64_test.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/base64_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/base64_test.dir/flags.make

CMakeFiles/base64_test.dir/foxglove_bridge_base/tests/base64_test.cpp.o: CMakeFiles/base64_test.dir/flags.make
CMakeFiles/base64_test.dir/foxglove_bridge_base/tests/base64_test.cpp.o: /home/pi/wow_ws/src/ros-foxglove-bridge/foxglove_bridge_base/tests/base64_test.cpp
CMakeFiles/base64_test.dir/foxglove_bridge_base/tests/base64_test.cpp.o: CMakeFiles/base64_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/wow_ws/build/foxglove_bridge/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/base64_test.dir/foxglove_bridge_base/tests/base64_test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/base64_test.dir/foxglove_bridge_base/tests/base64_test.cpp.o -MF CMakeFiles/base64_test.dir/foxglove_bridge_base/tests/base64_test.cpp.o.d -o CMakeFiles/base64_test.dir/foxglove_bridge_base/tests/base64_test.cpp.o -c /home/pi/wow_ws/src/ros-foxglove-bridge/foxglove_bridge_base/tests/base64_test.cpp

CMakeFiles/base64_test.dir/foxglove_bridge_base/tests/base64_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/base64_test.dir/foxglove_bridge_base/tests/base64_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/wow_ws/src/ros-foxglove-bridge/foxglove_bridge_base/tests/base64_test.cpp > CMakeFiles/base64_test.dir/foxglove_bridge_base/tests/base64_test.cpp.i

CMakeFiles/base64_test.dir/foxglove_bridge_base/tests/base64_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/base64_test.dir/foxglove_bridge_base/tests/base64_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/wow_ws/src/ros-foxglove-bridge/foxglove_bridge_base/tests/base64_test.cpp -o CMakeFiles/base64_test.dir/foxglove_bridge_base/tests/base64_test.cpp.s

# Object files for target base64_test
base64_test_OBJECTS = \
"CMakeFiles/base64_test.dir/foxglove_bridge_base/tests/base64_test.cpp.o"

# External object files for target base64_test
base64_test_EXTERNAL_OBJECTS =

base64_test: CMakeFiles/base64_test.dir/foxglove_bridge_base/tests/base64_test.cpp.o
base64_test: CMakeFiles/base64_test.dir/build.make
base64_test: gtest/libgtest_main.a
base64_test: gtest/libgtest.a
base64_test: libfoxglove_bridge_base.so
base64_test: /usr/lib/aarch64-linux-gnu/libssl.so
base64_test: /usr/lib/aarch64-linux-gnu/libcrypto.so
base64_test: /usr/lib/aarch64-linux-gnu/libz.so
base64_test: CMakeFiles/base64_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pi/wow_ws/build/foxglove_bridge/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable base64_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/base64_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/base64_test.dir/build: base64_test
.PHONY : CMakeFiles/base64_test.dir/build

CMakeFiles/base64_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/base64_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/base64_test.dir/clean

CMakeFiles/base64_test.dir/depend:
	cd /home/pi/wow_ws/build/foxglove_bridge && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pi/wow_ws/src/ros-foxglove-bridge /home/pi/wow_ws/src/ros-foxglove-bridge /home/pi/wow_ws/build/foxglove_bridge /home/pi/wow_ws/build/foxglove_bridge /home/pi/wow_ws/build/foxglove_bridge/CMakeFiles/base64_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/base64_test.dir/depend

