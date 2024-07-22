// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gps_msgs:msg/GPSStatus.idl
// generated code does not contain a copyright notice

#ifndef GPS_MSGS__MSG__DETAIL__GPS_STATUS__TRAITS_HPP_
#define GPS_MSGS__MSG__DETAIL__GPS_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gps_msgs/msg/detail/gps_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace gps_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GPSStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: satellites_used
  {
    out << "satellites_used: ";
    rosidl_generator_traits::value_to_yaml(msg.satellites_used, out);
    out << ", ";
  }

  // member: satellite_used_prn
  {
    if (msg.satellite_used_prn.size() == 0) {
      out << "satellite_used_prn: []";
    } else {
      out << "satellite_used_prn: [";
      size_t pending_items = msg.satellite_used_prn.size();
      for (auto item : msg.satellite_used_prn) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: satellites_visible
  {
    out << "satellites_visible: ";
    rosidl_generator_traits::value_to_yaml(msg.satellites_visible, out);
    out << ", ";
  }

  // member: satellite_visible_prn
  {
    if (msg.satellite_visible_prn.size() == 0) {
      out << "satellite_visible_prn: []";
    } else {
      out << "satellite_visible_prn: [";
      size_t pending_items = msg.satellite_visible_prn.size();
      for (auto item : msg.satellite_visible_prn) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: satellite_visible_z
  {
    if (msg.satellite_visible_z.size() == 0) {
      out << "satellite_visible_z: []";
    } else {
      out << "satellite_visible_z: [";
      size_t pending_items = msg.satellite_visible_z.size();
      for (auto item : msg.satellite_visible_z) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: satellite_visible_azimuth
  {
    if (msg.satellite_visible_azimuth.size() == 0) {
      out << "satellite_visible_azimuth: []";
    } else {
      out << "satellite_visible_azimuth: [";
      size_t pending_items = msg.satellite_visible_azimuth.size();
      for (auto item : msg.satellite_visible_azimuth) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: satellite_visible_snr
  {
    if (msg.satellite_visible_snr.size() == 0) {
      out << "satellite_visible_snr: []";
    } else {
      out << "satellite_visible_snr: [";
      size_t pending_items = msg.satellite_visible_snr.size();
      for (auto item : msg.satellite_visible_snr) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: motion_source
  {
    out << "motion_source: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_source, out);
    out << ", ";
  }

  // member: orientation_source
  {
    out << "orientation_source: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation_source, out);
    out << ", ";
  }

  // member: position_source
  {
    out << "position_source: ";
    rosidl_generator_traits::value_to_yaml(msg.position_source, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GPSStatus & msg,
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

  // member: satellites_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "satellites_used: ";
    rosidl_generator_traits::value_to_yaml(msg.satellites_used, out);
    out << "\n";
  }

  // member: satellite_used_prn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.satellite_used_prn.size() == 0) {
      out << "satellite_used_prn: []\n";
    } else {
      out << "satellite_used_prn:\n";
      for (auto item : msg.satellite_used_prn) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: satellites_visible
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "satellites_visible: ";
    rosidl_generator_traits::value_to_yaml(msg.satellites_visible, out);
    out << "\n";
  }

  // member: satellite_visible_prn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.satellite_visible_prn.size() == 0) {
      out << "satellite_visible_prn: []\n";
    } else {
      out << "satellite_visible_prn:\n";
      for (auto item : msg.satellite_visible_prn) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: satellite_visible_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.satellite_visible_z.size() == 0) {
      out << "satellite_visible_z: []\n";
    } else {
      out << "satellite_visible_z:\n";
      for (auto item : msg.satellite_visible_z) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: satellite_visible_azimuth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.satellite_visible_azimuth.size() == 0) {
      out << "satellite_visible_azimuth: []\n";
    } else {
      out << "satellite_visible_azimuth:\n";
      for (auto item : msg.satellite_visible_azimuth) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: satellite_visible_snr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.satellite_visible_snr.size() == 0) {
      out << "satellite_visible_snr: []\n";
    } else {
      out << "satellite_visible_snr:\n";
      for (auto item : msg.satellite_visible_snr) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: motion_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_source: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_source, out);
    out << "\n";
  }

  // member: orientation_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation_source: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation_source, out);
    out << "\n";
  }

  // member: position_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_source: ";
    rosidl_generator_traits::value_to_yaml(msg.position_source, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GPSStatus & msg, bool use_flow_style = false)
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
  const gps_msgs::msg::GPSStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  gps_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gps_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const gps_msgs::msg::GPSStatus & msg)
{
  return gps_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gps_msgs::msg::GPSStatus>()
{
  return "gps_msgs::msg::GPSStatus";
}

template<>
inline const char * name<gps_msgs::msg::GPSStatus>()
{
  return "gps_msgs/msg/GPSStatus";
}

template<>
struct has_fixed_size<gps_msgs::msg::GPSStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gps_msgs::msg::GPSStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gps_msgs::msg::GPSStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GPS_MSGS__MSG__DETAIL__GPS_STATUS__TRAITS_HPP_
