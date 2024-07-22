// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from geographic_msgs:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__BOUNDING_BOX__TRAITS_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__BOUNDING_BOX__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "geographic_msgs/msg/detail/bounding_box__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'min_pt'
// Member 'max_pt'
#include "geographic_msgs/msg/detail/geo_point__traits.hpp"

namespace geographic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BoundingBox & msg,
  std::ostream & out)
{
  out << "{";
  // member: min_pt
  {
    out << "min_pt: ";
    to_flow_style_yaml(msg.min_pt, out);
    out << ", ";
  }

  // member: max_pt
  {
    out << "max_pt: ";
    to_flow_style_yaml(msg.max_pt, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BoundingBox & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: min_pt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_pt:\n";
    to_block_style_yaml(msg.min_pt, out, indentation + 2);
  }

  // member: max_pt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_pt:\n";
    to_block_style_yaml(msg.max_pt, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BoundingBox & msg, bool use_flow_style = false)
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
  const geographic_msgs::msg::BoundingBox & msg,
  std::ostream & out, size_t indentation = 0)
{
  geographic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use geographic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const geographic_msgs::msg::BoundingBox & msg)
{
  return geographic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<geographic_msgs::msg::BoundingBox>()
{
  return "geographic_msgs::msg::BoundingBox";
}

template<>
inline const char * name<geographic_msgs::msg::BoundingBox>()
{
  return "geographic_msgs/msg/BoundingBox";
}

template<>
struct has_fixed_size<geographic_msgs::msg::BoundingBox>
  : std::integral_constant<bool, has_fixed_size<geographic_msgs::msg::GeoPoint>::value> {};

template<>
struct has_bounded_size<geographic_msgs::msg::BoundingBox>
  : std::integral_constant<bool, has_bounded_size<geographic_msgs::msg::GeoPoint>::value> {};

template<>
struct is_message<geographic_msgs::msg::BoundingBox>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__BOUNDING_BOX__TRAITS_HPP_
