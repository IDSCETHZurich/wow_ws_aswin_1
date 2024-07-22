// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from geographic_msgs:msg/GeoPoseWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE_WITH_COVARIANCE_STAMPED__BUILDER_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE_WITH_COVARIANCE_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "geographic_msgs/msg/detail/geo_pose_with_covariance_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace geographic_msgs
{

namespace msg
{

namespace builder
{

class Init_GeoPoseWithCovarianceStamped_pose
{
public:
  explicit Init_GeoPoseWithCovarianceStamped_pose(::geographic_msgs::msg::GeoPoseWithCovarianceStamped & msg)
  : msg_(msg)
  {}
  ::geographic_msgs::msg::GeoPoseWithCovarianceStamped pose(::geographic_msgs::msg::GeoPoseWithCovarianceStamped::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::geographic_msgs::msg::GeoPoseWithCovarianceStamped msg_;
};

class Init_GeoPoseWithCovarianceStamped_header
{
public:
  Init_GeoPoseWithCovarianceStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GeoPoseWithCovarianceStamped_pose header(::geographic_msgs::msg::GeoPoseWithCovarianceStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GeoPoseWithCovarianceStamped_pose(msg_);
  }

private:
  ::geographic_msgs::msg::GeoPoseWithCovarianceStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::geographic_msgs::msg::GeoPoseWithCovarianceStamped>()
{
  return geographic_msgs::msg::builder::Init_GeoPoseWithCovarianceStamped_header();
}

}  // namespace geographic_msgs

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE_WITH_COVARIANCE_STAMPED__BUILDER_HPP_
