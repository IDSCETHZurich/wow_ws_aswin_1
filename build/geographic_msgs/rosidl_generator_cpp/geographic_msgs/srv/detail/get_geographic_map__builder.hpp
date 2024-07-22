// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geographic_msgs:srv/GetGeographicMap.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__SRV__DETAIL__GET_GEOGRAPHIC_MAP__BUILDER_HPP_
#define GEOGRAPHIC_MSGS__SRV__DETAIL__GET_GEOGRAPHIC_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "geographic_msgs/srv/detail/get_geographic_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace geographic_msgs
{

namespace srv
{

namespace builder
{

class Init_GetGeographicMap_Request_bounds
{
public:
  explicit Init_GetGeographicMap_Request_bounds(::geographic_msgs::srv::GetGeographicMap_Request & msg)
  : msg_(msg)
  {}
  ::geographic_msgs::srv::GetGeographicMap_Request bounds(::geographic_msgs::srv::GetGeographicMap_Request::_bounds_type arg)
  {
    msg_.bounds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geographic_msgs::srv::GetGeographicMap_Request msg_;
};

class Init_GetGeographicMap_Request_url
{
public:
  Init_GetGeographicMap_Request_url()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetGeographicMap_Request_bounds url(::geographic_msgs::srv::GetGeographicMap_Request::_url_type arg)
  {
    msg_.url = std::move(arg);
    return Init_GetGeographicMap_Request_bounds(msg_);
  }

private:
  ::geographic_msgs::srv::GetGeographicMap_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::geographic_msgs::srv::GetGeographicMap_Request>()
{
  return geographic_msgs::srv::builder::Init_GetGeographicMap_Request_url();
}

}  // namespace geographic_msgs


namespace geographic_msgs
{

namespace srv
{

namespace builder
{

class Init_GetGeographicMap_Response_map
{
public:
  explicit Init_GetGeographicMap_Response_map(::geographic_msgs::srv::GetGeographicMap_Response & msg)
  : msg_(msg)
  {}
  ::geographic_msgs::srv::GetGeographicMap_Response map(::geographic_msgs::srv::GetGeographicMap_Response::_map_type arg)
  {
    msg_.map = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geographic_msgs::srv::GetGeographicMap_Response msg_;
};

class Init_GetGeographicMap_Response_status
{
public:
  explicit Init_GetGeographicMap_Response_status(::geographic_msgs::srv::GetGeographicMap_Response & msg)
  : msg_(msg)
  {}
  Init_GetGeographicMap_Response_map status(::geographic_msgs::srv::GetGeographicMap_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GetGeographicMap_Response_map(msg_);
  }

private:
  ::geographic_msgs::srv::GetGeographicMap_Response msg_;
};

class Init_GetGeographicMap_Response_success
{
public:
  Init_GetGeographicMap_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetGeographicMap_Response_status success(::geographic_msgs::srv::GetGeographicMap_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetGeographicMap_Response_status(msg_);
  }

private:
  ::geographic_msgs::srv::GetGeographicMap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::geographic_msgs::srv::GetGeographicMap_Response>()
{
  return geographic_msgs::srv::builder::Init_GetGeographicMap_Response_success();
}

}  // namespace geographic_msgs


namespace geographic_msgs
{

namespace srv
{

namespace builder
{

class Init_GetGeographicMap_Event_response
{
public:
  explicit Init_GetGeographicMap_Event_response(::geographic_msgs::srv::GetGeographicMap_Event & msg)
  : msg_(msg)
  {}
  ::geographic_msgs::srv::GetGeographicMap_Event response(::geographic_msgs::srv::GetGeographicMap_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geographic_msgs::srv::GetGeographicMap_Event msg_;
};

class Init_GetGeographicMap_Event_request
{
public:
  explicit Init_GetGeographicMap_Event_request(::geographic_msgs::srv::GetGeographicMap_Event & msg)
  : msg_(msg)
  {}
  Init_GetGeographicMap_Event_response request(::geographic_msgs::srv::GetGeographicMap_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetGeographicMap_Event_response(msg_);
  }

private:
  ::geographic_msgs::srv::GetGeographicMap_Event msg_;
};

class Init_GetGeographicMap_Event_info
{
public:
  Init_GetGeographicMap_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetGeographicMap_Event_request info(::geographic_msgs::srv::GetGeographicMap_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetGeographicMap_Event_request(msg_);
  }

private:
  ::geographic_msgs::srv::GetGeographicMap_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::geographic_msgs::srv::GetGeographicMap_Event>()
{
  return geographic_msgs::srv::builder::Init_GetGeographicMap_Event_info();
}

}  // namespace geographic_msgs

#endif  // GEOGRAPHIC_MSGS__SRV__DETAIL__GET_GEOGRAPHIC_MAP__BUILDER_HPP_
