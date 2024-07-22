// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nmea_msgs:msg/Gpvtg.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPVTG__TRAITS_HPP_
#define NMEA_MSGS__MSG__DETAIL__GPVTG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nmea_msgs/msg/detail/gpvtg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace nmea_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Gpvtg & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: message_id
  {
    out << "message_id: ";
    rosidl_generator_traits::value_to_yaml(msg.message_id, out);
    out << ", ";
  }

  // member: track_t
  {
    out << "track_t: ";
    rosidl_generator_traits::value_to_yaml(msg.track_t, out);
    out << ", ";
  }

  // member: track_t_ref
  {
    out << "track_t_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.track_t_ref, out);
    out << ", ";
  }

  // member: track_m
  {
    out << "track_m: ";
    rosidl_generator_traits::value_to_yaml(msg.track_m, out);
    out << ", ";
  }

  // member: track_m_ref
  {
    out << "track_m_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.track_m_ref, out);
    out << ", ";
  }

  // member: speed_n
  {
    out << "speed_n: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_n, out);
    out << ", ";
  }

  // member: speed_n_unit
  {
    out << "speed_n_unit: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_n_unit, out);
    out << ", ";
  }

  // member: speed_k
  {
    out << "speed_k: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_k, out);
    out << ", ";
  }

  // member: speed_k_unit
  {
    out << "speed_k_unit: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_k_unit, out);
    out << ", ";
  }

  // member: mode_indicator
  {
    out << "mode_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_indicator, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Gpvtg & msg,
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

  // member: message_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message_id: ";
    rosidl_generator_traits::value_to_yaml(msg.message_id, out);
    out << "\n";
  }

  // member: track_t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_t: ";
    rosidl_generator_traits::value_to_yaml(msg.track_t, out);
    out << "\n";
  }

  // member: track_t_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_t_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.track_t_ref, out);
    out << "\n";
  }

  // member: track_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_m: ";
    rosidl_generator_traits::value_to_yaml(msg.track_m, out);
    out << "\n";
  }

  // member: track_m_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_m_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.track_m_ref, out);
    out << "\n";
  }

  // member: speed_n
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_n: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_n, out);
    out << "\n";
  }

  // member: speed_n_unit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_n_unit: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_n_unit, out);
    out << "\n";
  }

  // member: speed_k
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_k: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_k, out);
    out << "\n";
  }

  // member: speed_k_unit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_k_unit: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_k_unit, out);
    out << "\n";
  }

  // member: mode_indicator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_indicator, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Gpvtg & msg, bool use_flow_style = false)
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

}  // namespace nmea_msgs

namespace rosidl_generator_traits
{

[[deprecated("use nmea_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nmea_msgs::msg::Gpvtg & msg,
  std::ostream & out, size_t indentation = 0)
{
  nmea_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nmea_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const nmea_msgs::msg::Gpvtg & msg)
{
  return nmea_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<nmea_msgs::msg::Gpvtg>()
{
  return "nmea_msgs::msg::Gpvtg";
}

template<>
inline const char * name<nmea_msgs::msg::Gpvtg>()
{
  return "nmea_msgs/msg/Gpvtg";
}

template<>
struct has_fixed_size<nmea_msgs::msg::Gpvtg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nmea_msgs::msg::Gpvtg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nmea_msgs::msg::Gpvtg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NMEA_MSGS__MSG__DETAIL__GPVTG__TRAITS_HPP_
