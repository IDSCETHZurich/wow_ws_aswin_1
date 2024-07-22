// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from geographic_msgs:srv/GetGeoPath.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__SRV__DETAIL__GET_GEO_PATH__TRAITS_HPP_
#define GEOGRAPHIC_MSGS__SRV__DETAIL__GET_GEO_PATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "geographic_msgs/srv/detail/get_geo_path__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'start'
// Member 'goal'
#include "geographic_msgs/msg/detail/geo_point__traits.hpp"

namespace geographic_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetGeoPath_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: start
  {
    out << "start: ";
    to_flow_style_yaml(msg.start, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetGeoPath_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start:\n";
    to_block_style_yaml(msg.start, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetGeoPath_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace geographic_msgs

namespace rosidl_generator_traits
{

[[deprecated("use geographic_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const geographic_msgs::srv::GetGeoPath_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  geographic_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use geographic_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const geographic_msgs::srv::GetGeoPath_Request & msg)
{
  return geographic_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<geographic_msgs::srv::GetGeoPath_Request>()
{
  return "geographic_msgs::srv::GetGeoPath_Request";
}

template<>
inline const char * name<geographic_msgs::srv::GetGeoPath_Request>()
{
  return "geographic_msgs/srv/GetGeoPath_Request";
}

template<>
struct has_fixed_size<geographic_msgs::srv::GetGeoPath_Request>
  : std::integral_constant<bool, has_fixed_size<geographic_msgs::msg::GeoPoint>::value> {};

template<>
struct has_bounded_size<geographic_msgs::srv::GetGeoPath_Request>
  : std::integral_constant<bool, has_bounded_size<geographic_msgs::msg::GeoPoint>::value> {};

template<>
struct is_message<geographic_msgs::srv::GetGeoPath_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'plan'
#include "geographic_msgs/msg/detail/geo_path__traits.hpp"
// Member 'network'
// Member 'start_seg'
// Member 'goal_seg'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace geographic_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetGeoPath_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: plan
  {
    out << "plan: ";
    to_flow_style_yaml(msg.plan, out);
    out << ", ";
  }

  // member: network
  {
    out << "network: ";
    to_flow_style_yaml(msg.network, out);
    out << ", ";
  }

  // member: start_seg
  {
    out << "start_seg: ";
    to_flow_style_yaml(msg.start_seg, out);
    out << ", ";
  }

  // member: goal_seg
  {
    out << "goal_seg: ";
    to_flow_style_yaml(msg.goal_seg, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetGeoPath_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
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

  // member: plan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plan:\n";
    to_block_style_yaml(msg.plan, out, indentation + 2);
  }

  // member: network
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "network:\n";
    to_block_style_yaml(msg.network, out, indentation + 2);
  }

  // member: start_seg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_seg:\n";
    to_block_style_yaml(msg.start_seg, out, indentation + 2);
  }

  // member: goal_seg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_seg:\n";
    to_block_style_yaml(msg.goal_seg, out, indentation + 2);
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetGeoPath_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace geographic_msgs

namespace rosidl_generator_traits
{

[[deprecated("use geographic_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const geographic_msgs::srv::GetGeoPath_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  geographic_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use geographic_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const geographic_msgs::srv::GetGeoPath_Response & msg)
{
  return geographic_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<geographic_msgs::srv::GetGeoPath_Response>()
{
  return "geographic_msgs::srv::GetGeoPath_Response";
}

template<>
inline const char * name<geographic_msgs::srv::GetGeoPath_Response>()
{
  return "geographic_msgs/srv/GetGeoPath_Response";
}

template<>
struct has_fixed_size<geographic_msgs::srv::GetGeoPath_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<geographic_msgs::srv::GetGeoPath_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<geographic_msgs::srv::GetGeoPath_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace geographic_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetGeoPath_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
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
  const GetGeoPath_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetGeoPath_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace geographic_msgs

namespace rosidl_generator_traits
{

[[deprecated("use geographic_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const geographic_msgs::srv::GetGeoPath_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  geographic_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use geographic_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const geographic_msgs::srv::GetGeoPath_Event & msg)
{
  return geographic_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<geographic_msgs::srv::GetGeoPath_Event>()
{
  return "geographic_msgs::srv::GetGeoPath_Event";
}

template<>
inline const char * name<geographic_msgs::srv::GetGeoPath_Event>()
{
  return "geographic_msgs/srv/GetGeoPath_Event";
}

template<>
struct has_fixed_size<geographic_msgs::srv::GetGeoPath_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<geographic_msgs::srv::GetGeoPath_Event>
  : std::integral_constant<bool, has_bounded_size<geographic_msgs::srv::GetGeoPath_Request>::value && has_bounded_size<geographic_msgs::srv::GetGeoPath_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<geographic_msgs::srv::GetGeoPath_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<geographic_msgs::srv::GetGeoPath>()
{
  return "geographic_msgs::srv::GetGeoPath";
}

template<>
inline const char * name<geographic_msgs::srv::GetGeoPath>()
{
  return "geographic_msgs/srv/GetGeoPath";
}

template<>
struct has_fixed_size<geographic_msgs::srv::GetGeoPath>
  : std::integral_constant<
    bool,
    has_fixed_size<geographic_msgs::srv::GetGeoPath_Request>::value &&
    has_fixed_size<geographic_msgs::srv::GetGeoPath_Response>::value
  >
{
};

template<>
struct has_bounded_size<geographic_msgs::srv::GetGeoPath>
  : std::integral_constant<
    bool,
    has_bounded_size<geographic_msgs::srv::GetGeoPath_Request>::value &&
    has_bounded_size<geographic_msgs::srv::GetGeoPath_Response>::value
  >
{
};

template<>
struct is_service<geographic_msgs::srv::GetGeoPath>
  : std::true_type
{
};

template<>
struct is_service_request<geographic_msgs::srv::GetGeoPath_Request>
  : std::true_type
{
};

template<>
struct is_service_response<geographic_msgs::srv::GetGeoPath_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GEOGRAPHIC_MSGS__SRV__DETAIL__GET_GEO_PATH__TRAITS_HPP_
