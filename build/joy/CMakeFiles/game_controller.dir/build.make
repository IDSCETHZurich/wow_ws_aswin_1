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
CMAKE_SOURCE_DIR = /home/pi/wow_ws/src/joystick_drivers/joy

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pi/wow_ws/build/joy

# Include any dependencies generated for this target.
include CMakeFiles/game_controller.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/game_controller.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/game_controller.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/game_controller.dir/flags.make

CMakeFiles/game_controller.dir/src/game_controller.cpp.o: CMakeFiles/game_controller.dir/flags.make
CMakeFiles/game_controller.dir/src/game_controller.cpp.o: /home/pi/wow_ws/src/joystick_drivers/joy/src/game_controller.cpp
CMakeFiles/game_controller.dir/src/game_controller.cpp.o: CMakeFiles/game_controller.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/wow_ws/build/joy/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/game_controller.dir/src/game_controller.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/game_controller.dir/src/game_controller.cpp.o -MF CMakeFiles/game_controller.dir/src/game_controller.cpp.o.d -o CMakeFiles/game_controller.dir/src/game_controller.cpp.o -c /home/pi/wow_ws/src/joystick_drivers/joy/src/game_controller.cpp

CMakeFiles/game_controller.dir/src/game_controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game_controller.dir/src/game_controller.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/wow_ws/src/joystick_drivers/joy/src/game_controller.cpp > CMakeFiles/game_controller.dir/src/game_controller.cpp.i

CMakeFiles/game_controller.dir/src/game_controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game_controller.dir/src/game_controller.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/wow_ws/src/joystick_drivers/joy/src/game_controller.cpp -o CMakeFiles/game_controller.dir/src/game_controller.cpp.s

# Object files for target game_controller
game_controller_OBJECTS = \
"CMakeFiles/game_controller.dir/src/game_controller.cpp.o"

# External object files for target game_controller
game_controller_EXTERNAL_OBJECTS =

libgame_controller.so: CMakeFiles/game_controller.dir/src/game_controller.cpp.o
libgame_controller.so: CMakeFiles/game_controller.dir/build.make
libgame_controller.so: /home/pi/ros2_iron/install/sensor_msgs/lib/libsensor_msgs__rosidl_typesupport_fastrtps_c.so
libgame_controller.so: /home/pi/ros2_iron/install/sensor_msgs/lib/libsensor_msgs__rosidl_typesupport_fastrtps_cpp.so
libgame_controller.so: /home/pi/ros2_iron/install/sensor_msgs/lib/libsensor_msgs__rosidl_typesupport_introspection_c.so
libgame_controller.so: /home/pi/ros2_iron/install/sensor_msgs/lib/libsensor_msgs__rosidl_typesupport_introspection_cpp.so
libgame_controller.so: /home/pi/ros2_iron/install/sensor_msgs/lib/libsensor_msgs__rosidl_generator_py.so
libgame_controller.so: /home/pi/wow_ws/install/sdl2_vendor/lib/libSDL2-2.0.so.0.18.2
libgame_controller.so: /home/pi/ros2_iron/install/geometry_msgs/lib/libgeometry_msgs__rosidl_typesupport_fastrtps_c.so
libgame_controller.so: /home/pi/ros2_iron/install/std_msgs/lib/libstd_msgs__rosidl_typesupport_fastrtps_c.so
libgame_controller.so: /home/pi/ros2_iron/install/geometry_msgs/lib/libgeometry_msgs__rosidl_typesupport_fastrtps_cpp.so
libgame_controller.so: /home/pi/ros2_iron/install/std_msgs/lib/libstd_msgs__rosidl_typesupport_fastrtps_cpp.so
libgame_controller.so: /home/pi/ros2_iron/install/geometry_msgs/lib/libgeometry_msgs__rosidl_typesupport_introspection_c.so
libgame_controller.so: /home/pi/ros2_iron/install/std_msgs/lib/libstd_msgs__rosidl_typesupport_introspection_c.so
libgame_controller.so: /home/pi/ros2_iron/install/geometry_msgs/lib/libgeometry_msgs__rosidl_typesupport_introspection_cpp.so
libgame_controller.so: /home/pi/ros2_iron/install/std_msgs/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so
libgame_controller.so: /home/pi/ros2_iron/install/sensor_msgs/lib/libsensor_msgs__rosidl_typesupport_c.so
libgame_controller.so: /home/pi/ros2_iron/install/geometry_msgs/lib/libgeometry_msgs__rosidl_generator_py.so
libgame_controller.so: /home/pi/ros2_iron/install/geometry_msgs/lib/libgeometry_msgs__rosidl_typesupport_c.so
libgame_controller.so: /home/pi/ros2_iron/install/std_msgs/lib/libstd_msgs__rosidl_generator_py.so
libgame_controller.so: /home/pi/ros2_iron/install/std_msgs/lib/libstd_msgs__rosidl_typesupport_c.so
libgame_controller.so: /home/pi/ros2_iron/install/sensor_msgs/lib/libsensor_msgs__rosidl_typesupport_cpp.so
libgame_controller.so: /home/pi/ros2_iron/install/sensor_msgs/lib/libsensor_msgs__rosidl_generator_c.so
libgame_controller.so: /home/pi/ros2_iron/install/geometry_msgs/lib/libgeometry_msgs__rosidl_typesupport_cpp.so
libgame_controller.so: /home/pi/ros2_iron/install/geometry_msgs/lib/libgeometry_msgs__rosidl_generator_c.so
libgame_controller.so: /home/pi/ros2_iron/install/std_msgs/lib/libstd_msgs__rosidl_typesupport_cpp.so
libgame_controller.so: /home/pi/ros2_iron/install/std_msgs/lib/libstd_msgs__rosidl_generator_c.so
libgame_controller.so: /home/pi/ros2_iron/install/rclcpp/lib/librclcpp.so
libgame_controller.so: /home/pi/ros2_iron/install/libstatistics_collector/lib/liblibstatistics_collector.so
libgame_controller.so: /home/pi/ros2_iron/install/rcl/lib/librcl.so
libgame_controller.so: /home/pi/ros2_iron/install/rcl_logging_interface/lib/librcl_logging_interface.so
libgame_controller.so: /home/pi/ros2_iron/install/rmw_implementation/lib/librmw_implementation.so
libgame_controller.so: /home/pi/ros2_iron/install/ament_index_cpp/lib/libament_index_cpp.so
libgame_controller.so: /home/pi/ros2_iron/install/type_description_interfaces/lib/libtype_description_interfaces__rosidl_typesupport_fastrtps_c.so
libgame_controller.so: /home/pi/ros2_iron/install/type_description_interfaces/lib/libtype_description_interfaces__rosidl_typesupport_introspection_c.so
libgame_controller.so: /home/pi/ros2_iron/install/type_description_interfaces/lib/libtype_description_interfaces__rosidl_typesupport_introspection_cpp.so
libgame_controller.so: /home/pi/ros2_iron/install/type_description_interfaces/lib/libtype_description_interfaces__rosidl_typesupport_fastrtps_cpp.so
libgame_controller.so: /home/pi/ros2_iron/install/type_description_interfaces/lib/libtype_description_interfaces__rosidl_typesupport_cpp.so
libgame_controller.so: /home/pi/ros2_iron/install/type_description_interfaces/lib/libtype_description_interfaces__rosidl_generator_py.so
libgame_controller.so: /home/pi/ros2_iron/install/type_description_interfaces/lib/libtype_description_interfaces__rosidl_typesupport_c.so
libgame_controller.so: /home/pi/ros2_iron/install/type_description_interfaces/lib/libtype_description_interfaces__rosidl_generator_c.so
libgame_controller.so: /home/pi/ros2_iron/install/rcl_interfaces/lib/librcl_interfaces__rosidl_typesupport_fastrtps_c.so
libgame_controller.so: /home/pi/ros2_iron/install/service_msgs/lib/libservice_msgs__rosidl_typesupport_fastrtps_c.so
libgame_controller.so: /home/pi/ros2_iron/install/rcl_interfaces/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
libgame_controller.so: /home/pi/ros2_iron/install/service_msgs/lib/libservice_msgs__rosidl_typesupport_introspection_c.so
libgame_controller.so: /home/pi/ros2_iron/install/rcl_interfaces/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
libgame_controller.so: /home/pi/ros2_iron/install/service_msgs/lib/libservice_msgs__rosidl_typesupport_introspection_cpp.so
libgame_controller.so: /home/pi/ros2_iron/install/rcl_interfaces/lib/librcl_interfaces__rosidl_typesupport_fastrtps_cpp.so
libgame_controller.so: /home/pi/ros2_iron/install/service_msgs/lib/libservice_msgs__rosidl_typesupport_fastrtps_cpp.so
libgame_controller.so: /home/pi/ros2_iron/install/rcl_interfaces/lib/librcl_interfaces__rosidl_typesupport_cpp.so
libgame_controller.so: /home/pi/ros2_iron/install/service_msgs/lib/libservice_msgs__rosidl_typesupport_cpp.so
libgame_controller.so: /home/pi/ros2_iron/install/rcl_interfaces/lib/librcl_interfaces__rosidl_generator_py.so
libgame_controller.so: /home/pi/ros2_iron/install/rcl_interfaces/lib/librcl_interfaces__rosidl_typesupport_c.so
libgame_controller.so: /home/pi/ros2_iron/install/rcl_interfaces/lib/librcl_interfaces__rosidl_generator_c.so
libgame_controller.so: /home/pi/ros2_iron/install/service_msgs/lib/libservice_msgs__rosidl_generator_py.so
libgame_controller.so: /home/pi/ros2_iron/install/service_msgs/lib/libservice_msgs__rosidl_typesupport_c.so
libgame_controller.so: /home/pi/ros2_iron/install/service_msgs/lib/libservice_msgs__rosidl_generator_c.so
libgame_controller.so: /home/pi/ros2_iron/install/rcl_yaml_param_parser/lib/librcl_yaml_param_parser.so
libgame_controller.so: /home/pi/ros2_iron/install/rosgraph_msgs/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_c.so
libgame_controller.so: /home/pi/ros2_iron/install/rosgraph_msgs/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_cpp.so
libgame_controller.so: /home/pi/ros2_iron/install/rosgraph_msgs/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
libgame_controller.so: /home/pi/ros2_iron/install/rosgraph_msgs/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
libgame_controller.so: /home/pi/ros2_iron/install/rosgraph_msgs/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
libgame_controller.so: /home/pi/ros2_iron/install/rosgraph_msgs/lib/librosgraph_msgs__rosidl_generator_py.so
libgame_controller.so: /home/pi/ros2_iron/install/rosgraph_msgs/lib/librosgraph_msgs__rosidl_typesupport_c.so
libgame_controller.so: /home/pi/ros2_iron/install/rosgraph_msgs/lib/librosgraph_msgs__rosidl_generator_c.so
libgame_controller.so: /home/pi/ros2_iron/install/statistics_msgs/lib/libstatistics_msgs__rosidl_typesupport_fastrtps_c.so
libgame_controller.so: /home/pi/ros2_iron/install/builtin_interfaces/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_c.so
libgame_controller.so: /home/pi/ros2_iron/install/rosidl_typesupport_fastrtps_c/lib/librosidl_typesupport_fastrtps_c.so
libgame_controller.so: /home/pi/ros2_iron/install/statistics_msgs/lib/libstatistics_msgs__rosidl_typesupport_fastrtps_cpp.so
libgame_controller.so: /home/pi/ros2_iron/install/builtin_interfaces/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_cpp.so
libgame_controller.so: /home/pi/ros2_iron/install/rosidl_typesupport_fastrtps_cpp/lib/librosidl_typesupport_fastrtps_cpp.so
libgame_controller.so: /home/pi/ros2_iron/install/fastcdr/lib/libfastcdr.so.1.0.27
libgame_controller.so: /home/pi/ros2_iron/install/rmw/lib/librmw.so
libgame_controller.so: /home/pi/ros2_iron/install/rosidl_dynamic_typesupport/lib/librosidl_dynamic_typesupport.so
libgame_controller.so: /home/pi/ros2_iron/install/statistics_msgs/lib/libstatistics_msgs__rosidl_typesupport_introspection_c.so
libgame_controller.so: /home/pi/ros2_iron/install/builtin_interfaces/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
libgame_controller.so: /home/pi/ros2_iron/install/statistics_msgs/lib/libstatistics_msgs__rosidl_typesupport_introspection_cpp.so
libgame_controller.so: /home/pi/ros2_iron/install/builtin_interfaces/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
libgame_controller.so: /home/pi/ros2_iron/install/rosidl_typesupport_introspection_cpp/lib/librosidl_typesupport_introspection_cpp.so
libgame_controller.so: /home/pi/ros2_iron/install/rosidl_typesupport_introspection_c/lib/librosidl_typesupport_introspection_c.so
libgame_controller.so: /home/pi/ros2_iron/install/statistics_msgs/lib/libstatistics_msgs__rosidl_typesupport_cpp.so
libgame_controller.so: /home/pi/ros2_iron/install/builtin_interfaces/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
libgame_controller.so: /home/pi/ros2_iron/install/rosidl_typesupport_cpp/lib/librosidl_typesupport_cpp.so
libgame_controller.so: /home/pi/ros2_iron/install/statistics_msgs/lib/libstatistics_msgs__rosidl_generator_py.so
libgame_controller.so: /home/pi/ros2_iron/install/builtin_interfaces/lib/libbuiltin_interfaces__rosidl_generator_py.so
libgame_controller.so: /home/pi/ros2_iron/install/statistics_msgs/lib/libstatistics_msgs__rosidl_typesupport_c.so
libgame_controller.so: /home/pi/ros2_iron/install/builtin_interfaces/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
libgame_controller.so: /home/pi/ros2_iron/install/statistics_msgs/lib/libstatistics_msgs__rosidl_generator_c.so
libgame_controller.so: /home/pi/ros2_iron/install/builtin_interfaces/lib/libbuiltin_interfaces__rosidl_generator_c.so
libgame_controller.so: /home/pi/ros2_iron/install/rosidl_typesupport_c/lib/librosidl_typesupport_c.so
libgame_controller.so: /home/pi/ros2_iron/install/rosidl_runtime_c/lib/librosidl_runtime_c.so
libgame_controller.so: /usr/lib/aarch64-linux-gnu/libpython3.11.so
libgame_controller.so: /home/pi/ros2_iron/install/tracetools/lib/libtracetools.so
libgame_controller.so: /home/pi/ros2_iron/install/class_loader/lib/libclass_loader.so
libgame_controller.so: /home/pi/ros2_iron/install/rcpputils/lib/librcpputils.so
libgame_controller.so: /home/pi/ros2_iron/install/rcutils/lib/librcutils.so
libgame_controller.so: /usr/lib/aarch64-linux-gnu/libconsole_bridge.so.1.0
libgame_controller.so: CMakeFiles/game_controller.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pi/wow_ws/build/joy/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libgame_controller.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/game_controller.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/game_controller.dir/build: libgame_controller.so
.PHONY : CMakeFiles/game_controller.dir/build

CMakeFiles/game_controller.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/game_controller.dir/cmake_clean.cmake
.PHONY : CMakeFiles/game_controller.dir/clean

CMakeFiles/game_controller.dir/depend:
	cd /home/pi/wow_ws/build/joy && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pi/wow_ws/src/joystick_drivers/joy /home/pi/wow_ws/src/joystick_drivers/joy /home/pi/wow_ws/build/joy /home/pi/wow_ws/build/joy /home/pi/wow_ws/build/joy/CMakeFiles/game_controller.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/game_controller.dir/depend

