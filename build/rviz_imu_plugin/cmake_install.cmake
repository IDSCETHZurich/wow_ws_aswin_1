# Install script for directory: /home/pi/wow_ws/src/imu_tools/rviz_imu_plugin

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/pi/wow_ws/install/rviz_imu_plugin")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/pi/wow_ws/build/rviz_imu_plugin/ament_cmake_symlink_install/ament_cmake_symlink_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librviz_imu_plugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librviz_imu_plugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librviz_imu_plugin.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/pi/wow_ws/build/rviz_imu_plugin/librviz_imu_plugin.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librviz_imu_plugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librviz_imu_plugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librviz_imu_plugin.so"
         OLD_RPATH "/home/pi/ros2_iron/install/rviz_common/lib:/home/pi/ros2_iron/install/rviz_rendering/lib:/home/pi/ros2_iron/install/sensor_msgs/lib:/home/pi/ros2_iron/install/tf2_ros/lib:/home/pi/ros2_iron/install/rviz_ogre_vendor/opt/rviz_ogre_vendor/lib:/home/pi/ros2_iron/install/resource_retriever/lib:/home/pi/ros2_iron/install/message_filters/lib:/home/pi/ros2_iron/install/tf2/lib:/home/pi/ros2_iron/install/rclcpp_action/lib:/home/pi/ros2_iron/install/rclcpp/lib:/home/pi/ros2_iron/install/libstatistics_collector/lib:/home/pi/ros2_iron/install/rosgraph_msgs/lib:/home/pi/ros2_iron/install/statistics_msgs/lib:/home/pi/ros2_iron/install/rcl_action/lib:/home/pi/ros2_iron/install/rcl/lib:/home/pi/ros2_iron/install/rcl_interfaces/lib:/home/pi/ros2_iron/install/rcl_yaml_param_parser/lib:/home/pi/ros2_iron/install/tracetools/lib:/home/pi/ros2_iron/install/rcl_logging_interface/lib:/home/pi/ros2_iron/install/rmw_implementation/lib:/home/pi/ros2_iron/install/type_description_interfaces/lib:/home/pi/ros2_iron/install/tf2_msgs/lib:/home/pi/ros2_iron/install/action_msgs/lib:/home/pi/ros2_iron/install/service_msgs/lib:/home/pi/ros2_iron/install/unique_identifier_msgs/lib:/home/pi/ros2_iron/install/geometry_msgs/lib:/home/pi/ros2_iron/install/std_msgs/lib:/home/pi/ros2_iron/install/builtin_interfaces/lib:/home/pi/ros2_iron/install/rosidl_typesupport_fastrtps_c/lib:/home/pi/ros2_iron/install/rosidl_typesupport_introspection_cpp/lib:/home/pi/ros2_iron/install/rosidl_typesupport_introspection_c/lib:/home/pi/ros2_iron/install/rosidl_typesupport_fastrtps_cpp/lib:/home/pi/ros2_iron/install/fastcdr/lib:/home/pi/ros2_iron/install/rmw/lib:/home/pi/ros2_iron/install/rosidl_dynamic_typesupport/lib:/home/pi/ros2_iron/install/rosidl_typesupport_cpp/lib:/home/pi/ros2_iron/install/rosidl_typesupport_c/lib:/home/pi/ros2_iron/install/rosidl_runtime_c/lib:/home/pi/ros2_iron/install/urdf/lib:/home/pi/ros2_iron/install/ament_index_cpp/lib:/home/pi/ros2_iron/install/class_loader/lib:/home/pi/ros2_iron/install/rcpputils/lib:/home/pi/ros2_iron/install/rcutils/lib:/home/pi/ros2_iron/install/urdfdom/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librviz_imu_plugin.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/pi/wow_ws/build/rviz_imu_plugin/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
