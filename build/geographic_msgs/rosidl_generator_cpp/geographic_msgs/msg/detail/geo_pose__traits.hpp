// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from geographic_msgs:msg/GeoPose.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE__TRAITS_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "geographic_msgs/msg/detail/geo_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "geographic_msgs/msg/detail/geo_point__traits.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"

namespace geographic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GeoPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    to_flow_style_yaml(msg.orientation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GeoPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation:\n";
    to_block_style_yaml(msg.orientation, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GeoPose & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace geographic_msgs

namespace rosidl_generator_traits
{

[[deprecated("use geographic_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const geographic_msgs::msg::GeoPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  geographic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use geographic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const geographic_msgs::msg::GeoPose & msg)
{
  return geographic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<geographic_msgs::msg::GeoPose>()
{
  return "geographic_msgs::msg::GeoPose";
}

template<>
inline const char * name<geographic_msgs::msg::GeoPose>()
{
  return "geographic_msgs/msg/GeoPose";
}

template<>
struct has_fixed_size<geographic_msgs::msg::GeoPose>
  : std::integral_constant<bool, has_fixed_size<geographic_msgs::msg::GeoPoint>::value && has_fixed_size<geometry_msgs::msg::Quaternion>::value> {};

template<>
struct has_bounded_size<geographic_msgs::msg::GeoPose>
  : std::integral_constant<bool, has_bounded_size<geographic_msgs::msg::GeoPoint>::value && has_bounded_size<geometry_msgs::msg::Quaternion>::value> {};

template<>
struct is_message<geographic_msgs::msg::GeoPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE__TRAITS_HPP_
