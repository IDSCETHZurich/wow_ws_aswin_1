// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from geographic_msgs:msg/GeographicMapChanges.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__GEOGRAPHIC_MAP_CHANGES__TRAITS_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__GEOGRAPHIC_MAP_CHANGES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "geographic_msgs/msg/detail/geographic_map_changes__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'diffs'
#include "geographic_msgs/msg/detail/geographic_map__traits.hpp"
// Member 'deletes'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace geographic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GeographicMapChanges & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: diffs
  {
    out << "diffs: ";
    to_flow_style_yaml(msg.diffs, out);
    out << ", ";
  }

  // member: deletes
  {
    if (msg.deletes.size() == 0) {
      out << "deletes: []";
    } else {
      out << "deletes: [";
      size_t pending_items = msg.deletes.size();
      for (auto item : msg.deletes) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GeographicMapChanges & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: diffs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diffs:\n";
    to_block_style_yaml(msg.diffs, out, indentation + 2);
  }

  // member: deletes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.deletes.size() == 0) {
      out << "deletes: []\n";
    } else {
      out << "deletes:\n";
      for (auto item : msg.deletes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GeographicMapChanges & msg, bool use_flow_style = false)
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
  const geographic_msgs::msg::GeographicMapChanges & msg,
  std::ostream & out, size_t indentation = 0)
{
  geographic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use geographic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const geographic_msgs::msg::GeographicMapChanges & msg)
{
  return geographic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<geographic_msgs::msg::GeographicMapChanges>()
{
  return "geographic_msgs::msg::GeographicMapChanges";
}

template<>
inline const char * name<geographic_msgs::msg::GeographicMapChanges>()
{
  return "geographic_msgs/msg/GeographicMapChanges";
}

template<>
struct has_fixed_size<geographic_msgs::msg::GeographicMapChanges>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<geographic_msgs::msg::GeographicMapChanges>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<geographic_msgs::msg::GeographicMapChanges>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__GEOGRAPHIC_MAP_CHANGES__TRAITS_HPP_
