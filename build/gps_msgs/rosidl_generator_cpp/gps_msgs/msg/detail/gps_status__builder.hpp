// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gps_msgs:msg/GPSStatus.idl
// generated code does not contain a copyright notice

#ifndef GPS_MSGS__MSG__DETAIL__GPS_STATUS__BUILDER_HPP_
#define GPS_MSGS__MSG__DETAIL__GPS_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gps_msgs/msg/detail/gps_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gps_msgs
{

namespace msg
{

namespace builder
{

class Init_GPSStatus_position_source
{
public:
  explicit Init_GPSStatus_position_source(::gps_msgs::msg::GPSStatus & msg)
  : msg_(msg)
  {}
  ::gps_msgs::msg::GPSStatus position_source(::gps_msgs::msg::GPSStatus::_position_source_type arg)
  {
    msg_.position_source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gps_msgs::msg::GPSStatus msg_;
};

class Init_GPSStatus_orientation_source
{
public:
  explicit Init_GPSStatus_orientation_source(::gps_msgs::msg::GPSStatus & msg)
  : msg_(msg)
  {}
  Init_GPSStatus_position_source orientation_source(::gps_msgs::msg::GPSStatus::_orientation_source_type arg)
  {
    msg_.orientation_source = std::move(arg);
    return Init_GPSStatus_position_source(msg_);
  }

private:
  ::gps_msgs::msg::GPSStatus msg_;
};

class Init_GPSStatus_motion_source
{
public:
  explicit Init_GPSStatus_motion_source(::gps_msgs::msg::GPSStatus & msg)
  : msg_(msg)
  {}
  Init_GPSStatus_orientation_source motion_source(::gps_msgs::msg::GPSStatus::_motion_source_type arg)
  {
    msg_.motion_source = std::move(arg);
    return Init_GPSStatus_orientation_source(msg_);
  }

private:
  ::gps_msgs::msg::GPSStatus msg_;
};

class Init_GPSStatus_status
{
public:
  explicit Init_GPSStatus_status(::gps_msgs::msg::GPSStatus & msg)
  : msg_(msg)
  {}
  Init_GPSStatus_motion_source status(::gps_msgs::msg::GPSStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GPSStatus_motion_source(msg_);
  }

private:
  ::gps_msgs::msg::GPSStatus msg_;
};

class Init_GPSStatus_satellite_visible_snr
{
public:
  explicit Init_GPSStatus_satellite_visible_snr(::gps_msgs::msg::GPSStatus & msg)
  : msg_(msg)
  {}
  Init_GPSStatus_status satellite_visible_snr(::gps_msgs::msg::GPSStatus::_satellite_visible_snr_type arg)
  {
    msg_.satellite_visible_snr = std::move(arg);
    return Init_GPSStatus_status(msg_);
  }

private:
  ::gps_msgs::msg::GPSStatus msg_;
};

class Init_GPSStatus_satellite_visible_azimuth
{
public:
  explicit Init_GPSStatus_satellite_visible_azimuth(::gps_msgs::msg::GPSStatus & msg)
  : msg_(msg)
  {}
  Init_GPSStatus_satellite_visible_snr satellite_visible_azimuth(::gps_msgs::msg::GPSStatus::_satellite_visible_azimuth_type arg)
  {
    msg_.satellite_visible_azimuth = std::move(arg);
    return Init_GPSStatus_satellite_visible_snr(msg_);
  }

private:
  ::gps_msgs::msg::GPSStatus msg_;
};

class Init_GPSStatus_satellite_visible_z
{
public:
  explicit Init_GPSStatus_satellite_visible_z(::gps_msgs::msg::GPSStatus & msg)
  : msg_(msg)
  {}
  Init_GPSStatus_satellite_visible_azimuth satellite_visible_z(::gps_msgs::msg::GPSStatus::_satellite_visible_z_type arg)
  {
    msg_.satellite_visible_z = std::move(arg);
    return Init_GPSStatus_satellite_visible_azimuth(msg_);
  }

private:
  ::gps_msgs::msg::GPSStatus msg_;
};

class Init_GPSStatus_satellite_visible_prn
{
public:
  explicit Init_GPSStatus_satellite_visible_prn(::gps_msgs::msg::GPSStatus & msg)
  : msg_(msg)
  {}
  Init_GPSStatus_satellite_visible_z satellite_visible_prn(::gps_msgs::msg::GPSStatus::_satellite_visible_prn_type arg)
  {
    msg_.satellite_visible_prn = std::move(arg);
    return Init_GPSStatus_satellite_visible_z(msg_);
  }

private:
  ::gps_msgs::msg::GPSStatus msg_;
};

class Init_GPSStatus_satellites_visible
{
public:
  explicit Init_GPSStatus_satellites_visible(::gps_msgs::msg::GPSStatus & msg)
  : msg_(msg)
  {}
  Init_GPSStatus_satellite_visible_prn satellites_visible(::gps_msgs::msg::GPSStatus::_satellites_visible_type arg)
  {
    msg_.satellites_visible = std::move(arg);
    return Init_GPSStatus_satellite_visible_prn(msg_);
  }

private:
  ::gps_msgs::msg::GPSStatus msg_;
};

class Init_GPSStatus_satellite_used_prn
{
public:
  explicit Init_GPSStatus_satellite_used_prn(::gps_msgs::msg::GPSStatus & msg)
  : msg_(msg)
  {}
  Init_GPSStatus_satellites_visible satellite_used_prn(::gps_msgs::msg::GPSStatus::_satellite_used_prn_type arg)
  {
    msg_.satellite_used_prn = std::move(arg);
    return Init_GPSStatus_satellites_visible(msg_);
  }

private:
  ::gps_msgs::msg::GPSStatus msg_;
};

class Init_GPSStatus_satellites_used
{
public:
  explicit Init_GPSStatus_satellites_used(::gps_msgs::msg::GPSStatus & msg)
  : msg_(msg)
  {}
  Init_GPSStatus_satellite_used_prn satellites_used(::gps_msgs::msg::GPSStatus::_satellites_used_type arg)
  {
    msg_.satellites_used = std::move(arg);
    return Init_GPSStatus_satellite_used_prn(msg_);
  }

private:
  ::gps_msgs::msg::GPSStatus msg_;
};

class Init_GPSStatus_header
{
public:
  Init_GPSStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GPSStatus_satellites_used header(::gps_msgs::msg::GPSStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GPSStatus_satellites_used(msg_);
  }

private:
  ::gps_msgs::msg::GPSStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gps_msgs::msg::GPSStatus>()
{
  return gps_msgs::msg::builder::Init_GPSStatus_header();
}

}  // namespace gps_msgs

#endif  // GPS_MSGS__MSG__DETAIL__GPS_STATUS__BUILDER_HPP_
