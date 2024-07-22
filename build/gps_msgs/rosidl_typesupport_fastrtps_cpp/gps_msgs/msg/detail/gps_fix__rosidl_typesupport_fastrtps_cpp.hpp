// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from gps_msgs:msg/GPSFix.idl
// generated code does not contain a copyright notice

#ifndef GPS_MSGS__MSG__DETAIL__GPS_FIX__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define GPS_MSGS__MSG__DETAIL__GPS_FIX__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "gps_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "gps_msgs/msg/detail/gps_fix__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace gps_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gps_msgs
cdr_serialize(
  const gps_msgs::msg::GPSFix & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gps_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  gps_msgs::msg::GPSFix & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gps_msgs
get_serialized_size(
  const gps_msgs::msg::GPSFix & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gps_msgs
max_serialized_size_GPSFix(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace gps_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gps_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gps_msgs, msg, GPSFix)();

#ifdef __cplusplus
}
#endif

#endif  // GPS_MSGS__MSG__DETAIL__GPS_FIX__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
