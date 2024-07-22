// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gps_msgs:msg/GPSFix.idl
// generated code does not contain a copyright notice

#ifndef GPS_MSGS__MSG__DETAIL__GPS_FIX__TRAITS_HPP_
#define GPS_MSGS__MSG__DETAIL__GPS_FIX__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gps_msgs/msg/detail/gps_fix__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'status'
#include "gps_msgs/msg/detail/gps_status__traits.hpp"

namespace gps_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GPSFix & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: latitude
  {
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << ", ";
  }

  // member: longitude
  {
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << ", ";
  }

  // member: altitude
  {
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << ", ";
  }

  // member: track
  {
    out << "track: ";
    rosidl_generator_traits::value_to_yaml(msg.track, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: climb
  {
    out << "climb: ";
    rosidl_generator_traits::value_to_yaml(msg.climb, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: dip
  {
    out << "dip: ";
    rosidl_generator_traits::value_to_yaml(msg.dip, out);
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << ", ";
  }

  // member: gdop
  {
    out << "gdop: ";
    rosidl_generator_traits::value_to_yaml(msg.gdop, out);
    out << ", ";
  }

  // member: pdop
  {
    out << "pdop: ";
    rosidl_generator_traits::value_to_yaml(msg.pdop, out);
    out << ", ";
  }

  // member: hdop
  {
    out << "hdop: ";
    rosidl_generator_traits::value_to_yaml(msg.hdop, out);
    out << ", ";
  }

  // member: vdop
  {
    out << "vdop: ";
    rosidl_generator_traits::value_to_yaml(msg.vdop, out);
    out << ", ";
  }

  // member: tdop
  {
    out << "tdop: ";
    rosidl_generator_traits::value_to_yaml(msg.tdop, out);
    out << ", ";
  }

  // member: err
  {
    out << "err: ";
    rosidl_generator_traits::value_to_yaml(msg.err, out);
    out << ", ";
  }

  // member: err_horz
  {
    out << "err_horz: ";
    rosidl_generator_traits::value_to_yaml(msg.err_horz, out);
    out << ", ";
  }

  // member: err_vert
  {
    out << "err_vert: ";
    rosidl_generator_traits::value_to_yaml(msg.err_vert, out);
    out << ", ";
  }

  // member: err_track
  {
    out << "err_track: ";
    rosidl_generator_traits::value_to_yaml(msg.err_track, out);
    out << ", ";
  }

  // member: err_speed
  {
    out << "err_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.err_speed, out);
    out << ", ";
  }

  // member: err_climb
  {
    out << "err_climb: ";
    rosidl_generator_traits::value_to_yaml(msg.err_climb, out);
    out << ", ";
  }

  // member: err_time
  {
    out << "err_time: ";
    rosidl_generator_traits::value_to_yaml(msg.err_time, out);
    out << ", ";
  }

  // member: err_pitch
  {
    out << "err_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.err_pitch, out);
    out << ", ";
  }

  // member: err_roll
  {
    out << "err_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.err_roll, out);
    out << ", ";
  }

  // member: err_dip
  {
    out << "err_dip: ";
    rosidl_generator_traits::value_to_yaml(msg.err_dip, out);
    out << ", ";
  }

  // member: position_covariance
  {
    if (msg.position_covariance.size() == 0) {
      out << "position_covariance: []";
    } else {
      out << "position_covariance: [";
      size_t pending_items = msg.position_covariance.size();
      for (auto item : msg.position_covariance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: position_covariance_type
  {
    out << "position_covariance_type: ";
    rosidl_generator_traits::value_to_yaml(msg.position_covariance_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GPSFix & msg,
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

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << "\n";
  }

  // member: altitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << "\n";
  }

  // member: track
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track: ";
    rosidl_generator_traits::value_to_yaml(msg.track, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: climb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "climb: ";
    rosidl_generator_traits::value_to_yaml(msg.climb, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: dip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dip: ";
    rosidl_generator_traits::value_to_yaml(msg.dip, out);
    out << "\n";
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }

  // member: gdop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gdop: ";
    rosidl_generator_traits::value_to_yaml(msg.gdop, out);
    out << "\n";
  }

  // member: pdop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pdop: ";
    rosidl_generator_traits::value_to_yaml(msg.pdop, out);
    out << "\n";
  }

  // member: hdop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hdop: ";
    rosidl_generator_traits::value_to_yaml(msg.hdop, out);
    out << "\n";
  }

  // member: vdop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vdop: ";
    rosidl_generator_traits::value_to_yaml(msg.vdop, out);
    out << "\n";
  }

  // member: tdop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tdop: ";
    rosidl_generator_traits::value_to_yaml(msg.tdop, out);
    out << "\n";
  }

  // member: err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err: ";
    rosidl_generator_traits::value_to_yaml(msg.err, out);
    out << "\n";
  }

  // member: err_horz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_horz: ";
    rosidl_generator_traits::value_to_yaml(msg.err_horz, out);
    out << "\n";
  }

  // member: err_vert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_vert: ";
    rosidl_generator_traits::value_to_yaml(msg.err_vert, out);
    out << "\n";
  }

  // member: err_track
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_track: ";
    rosidl_generator_traits::value_to_yaml(msg.err_track, out);
    out << "\n";
  }

  // member: err_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.err_speed, out);
    out << "\n";
  }

  // member: err_climb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_climb: ";
    rosidl_generator_traits::value_to_yaml(msg.err_climb, out);
    out << "\n";
  }

  // member: err_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_time: ";
    rosidl_generator_traits::value_to_yaml(msg.err_time, out);
    out << "\n";
  }

  // member: err_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.err_pitch, out);
    out << "\n";
  }

  // member: err_roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.err_roll, out);
    out << "\n";
  }

  // member: err_dip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_dip: ";
    rosidl_generator_traits::value_to_yaml(msg.err_dip, out);
    out << "\n";
  }

  // member: position_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position_covariance.size() == 0) {
      out << "position_covariance: []\n";
    } else {
      out << "position_covariance:\n";
      for (auto item : msg.position_covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: position_covariance_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_covariance_type: ";
    rosidl_generator_traits::value_to_yaml(msg.position_covariance_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GPSFix & msg, bool use_flow_style = false)
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

}  // namespace gps_msgs

namespace rosidl_generator_traits
{

[[deprecated("use gps_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gps_msgs::msg::GPSFix & msg,
  std::ostream & out, size_t indentation = 0)
{
  gps_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gps_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const gps_msgs::msg::GPSFix & msg)
{
  return gps_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gps_msgs::msg::GPSFix>()
{
  return "gps_msgs::msg::GPSFix";
}

template<>
inline const char * name<gps_msgs::msg::GPSFix>()
{
  return "gps_msgs/msg/GPSFix";
}

template<>
struct has_fixed_size<gps_msgs::msg::GPSFix>
  : std::integral_constant<bool, has_fixed_size<gps_msgs::msg::GPSStatus>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<gps_msgs::msg::GPSFix>
  : std::integral_constant<bool, has_bounded_size<gps_msgs::msg::GPSStatus>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<gps_msgs::msg::GPSFix>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GPS_MSGS__MSG__DETAIL__GPS_FIX__TRAITS_HPP_
