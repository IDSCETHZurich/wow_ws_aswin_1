// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geographic_msgs:msg/GeoPoseWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE_WITH_COVARIANCE__BUILDER_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE_WITH_COVARIANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "geographic_msgs/msg/detail/geo_pose_with_covariance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace geographic_msgs
{

namespace msg
{

namespace builder
{

class Init_GeoPoseWithCovariance_covariance
{
public:
  explicit Init_GeoPoseWithCovariance_covariance(::geographic_msgs::msg::GeoPoseWithCovariance & msg)
  : msg_(msg)
  {}
  ::geographic_msgs::msg::GeoPoseWithCovariance covariance(::geographic_msgs::msg::GeoPoseWithCovariance::_covariance_type arg)
  {
    msg_.covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geographic_msgs::msg::GeoPoseWithCovariance msg_;
};

class Init_GeoPoseWithCovariance_pose
{
public:
  Init_GeoPoseWithCovariance_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GeoPoseWithCovariance_covariance pose(::geographic_msgs::msg::GeoPoseWithCovariance::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_GeoPoseWithCovariance_covariance(msg_);
  }

private:
  ::geographic_msgs::msg::GeoPoseWithCovariance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geographic_msgs::msg::GeoPoseWithCovariance>()
{
  return geographic_msgs::msg::builder::Init_GeoPoseWithCovariance_pose();
}

}  // namespace geographic_msgs

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE_WITH_COVARIANCE__BUILDER_HPP_
