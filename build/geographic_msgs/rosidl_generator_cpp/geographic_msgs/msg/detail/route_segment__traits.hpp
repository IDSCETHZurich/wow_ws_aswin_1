// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from geographic_msgs:msg/RouteSegment.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_SEGMENT__TRAITS_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_SEGMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "geographic_msgs/msg/detail/route_segment__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'id'
// Member 'start'
// Member 'end'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'props'
#include "geographic_msgs/msg/detail/key_value__traits.hpp"

namespace geographic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RouteSegment & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    to_flow_style_yaml(msg.id, out);
    out << ", ";
  }

  // member: start
  {
    out << "start: ";
    to_flow_style_yaml(msg.start, out);
    out << ", ";
  }

  // member: end
  {
    out << "end: ";
    to_flow_style_yaml(msg.end, out);
    out << ", ";
  }

  // member: props
  {
    if (msg.props.size() == 0) {
      out << "props: []";
    } else {
      out << "props: [";
      size_t pending_items = msg.props.size();
      for (auto item : msg.props) {
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
  const RouteSegment & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id:\n";
    to_block_style_yaml(msg.id, out, indentation + 2);
  }

  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start:\n";
    to_block_style_yaml(msg.start, out, indentation + 2);
  }

  // member: end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end:\n";
    to_block_style_yaml(msg.end, out, indentation + 2);
  }

  // member: props
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.props.size() == 0) {
      out << "props: []\n";
    } else {
      out << "props:\n";
      for (auto item : msg.props) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RouteSegment & msg, bool use_flow_style = false)
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
  const geographic_msgs::msg::RouteSegment & msg,
  std::ostream & out, size_t indentation = 0)
{
  geographic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use geographic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const geographic_msgs::msg::RouteSegment & msg)
{
  return geographic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<geographic_msgs::msg::RouteSegment>()
{
  return "geographic_msgs::msg::RouteSegment";
}

template<>
inline const char * name<geographic_msgs::msg::RouteSegment>()
{
  return "geographic_msgs/msg/RouteSegment";
}

template<>
struct has_fixed_size<geographic_msgs::msg::RouteSegment>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<geographic_msgs::msg::RouteSegment>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<geographic_msgs::msg::RouteSegment>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_SEGMENT__TRAITS_HPP_
