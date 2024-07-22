// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gps_msgs:msg/GPSFix.idl
// generated code does not contain a copyright notice

#ifndef GPS_MSGS__MSG__DETAIL__GPS_FIX__BUILDER_HPP_
#define GPS_MSGS__MSG__DETAIL__GPS_FIX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gps_msgs/msg/detail/gps_fix__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gps_msgs
{

namespace msg
{

namespace builder
{

class Init_GPSFix_position_covariance_type
{
public:
  explicit Init_GPSFix_position_covariance_type(::gps_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  ::gps_msgs::msg::GPSFix position_covariance_type(::gps_msgs::msg::GPSFix::_position_covariance_type_type arg)
  {
    msg_.position_covariance_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gps_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_position_covariance
{
public:
  explicit Init_GPSFix_position_covariance(::gps_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_position_covariance_type position_covariance(::gps_msgs::msg::GPSFix::_position_covariance_type arg)
  {
    msg_.position_covariance = std::move(arg);
    return Init_GPSFix_position_covariance_type(msg_);
  }

private:
  ::gps_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_err_dip
{
public:
  explicit Init_GPSFix_err_dip(::gps_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_position_covariance err_dip(::gps_msgs::msg::GPSFix::_err_dip_type arg)
  {
    msg_.err_dip = std::move(arg);
    return Init_GPSFix_position_covariance(msg_);
  }

private:
  ::gps_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_err_roll
{
public:
  explicit Init_GPSFix_err_roll(::gps_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_err_dip err_roll(::gps_msgs::msg::GPSFix::_err_roll_type arg)
  {
    msg_.err_roll = std::move(arg);
    return Init_GPSFix_err_dip(msg_);
  }

private:
  ::gps_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_err_pitch
{
public:
  explicit Init_GPSFix_err_pitch(::gps_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_err_roll err_pitch(::gps_msgs::msg::GPSFix::_err_pitch_type arg)
  {
    msg_.err_pitch = std::move(arg);
    return Init_GPSFix_err_roll(msg_);
  }

private:
  ::gps_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_err_time
{
public:
  explicit Init_GPSFix_err_time(::gps_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_err_pitch err_time(::gps_msgs::msg::GPSFix::_err_time_type arg)
  {
    msg_.err_time = std::move(arg);
    return Init_GPSFix_err_pitch(msg_);
  }

private:
  ::gps_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_err_climb
{
public:
  explicit Init_GPSFix_err_climb(::gps_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_err_time err_climb(::gps_msgs::msg::GPSFix::_err_climb_type arg)
  {
    msg_.err_climb = std::move(arg);
    return Init_GPSFix_err_time(msg_);
  }

private:
  ::gps_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_err_speed
{
public:
  explicit Init_GPSFix_err_speed(::gps_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_err_climb err_speed(::gps_msgs::msg::GPSFix::_err_speed_type arg)
  {
    msg_.err_speed = std::move(arg);
    return Init_GPSFix_err_climb(msg_);
  }

private:
  ::gps_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_err_track
{
public:
  explicit Init_GPSFix_err_track(::gps_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_err_speed err_track(::gps_msgs::msg::GPSFix::_err_track_type arg)
  {
    msg_.err_track = std::move(arg);
    return Init_GPSFix_err_speed(msg_);
  }

private:
  ::gps_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_err_vert
{
public:
  explicit Init_GPSFix_err_vert(::gps_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_err_track err_vert(::gps_msgs::msg::GPSFix::_err_vert_type arg)
  {
    msg_.err_vert = std::move(arg);
    return Init_GPSFix_err_track(msg_);
  }

private:
  ::gps_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_err_horz
{
public:
  explicit Init_GPSFix_err_horz(::gps_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_err_vert err_horz(::gps_msgs::msg::GPSFix::_err_horz_type arg)
  {
    msg_.err_horz = std::move(arg);
    return Init_GPSFix_err_vert(msg_);
  }

private:
  ::gps_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_err
{
public:
  explicit Init_GPSFix_err(::gps_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_err_horz err(::gps_msgs::msg::GPSFix::_err_type arg)
  {
    msg_.err = std::move(arg);
    return Init_GPSFix_err_horz(msg_);
  }

private:
  ::gps_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_tdop
{
public:
  explicit Init_GPSFix_tdop(::gps_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_err tdop(::gps_msgs::msg::GPSFix::_tdop_type arg)
  {
    msg_.tdop = std::move(arg);
    return Init_GPSFix_err(msg_);
  }

private:
  ::gps_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_vdop
{
public:
  explicit Init_GPSFix_vdop(::gps_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_tdop vdop(::gps_msgs::msg::GPSFix::_vdop_type arg)
  {
    msg_.vdop = std::move(arg);
    return Init_GPSFix_tdop(msg_);
  }

private:
  ::gps_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_hdop
{
public:
  explicit Init_GPSFix_hdop(::gps_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_vdop hdop(::gps_msgs::msg::GPSFix::_hdop_type arg)
  {
    msg_.hdop = std::move(arg);
    return Init_GPSFix_vdop(msg_);
  }

private:
  ::gps_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_pdop
{
public:
  explicit Init_GPSFix_pdop(::gps_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_hdop pdop(::gps_msgs::msg::GPSFix::_pdop_type arg)
  {
    msg_.pdop = std::move(arg);
    return Init_GPSFix_hdop(msg_);
  }

private:
  ::gps_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_gdop
{
public:
  explicit Init_GPSFix_gdop(::gps_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_pdop gdop(::gps_msgs::msg::GPSFix::_gdop_type arg)
  {
    msg_.gdop = std::move(arg);
    return Init_GPSFix_pdop(msg_);
  }

private:
  ::gps_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_time
{
public:
  explicit Init_GPSFix_time(::gps_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_gdop time(::gps_msgs::msg::GPSFix::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_GPSFix_gdop(msg_);
  }

private:
  ::gps_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_dip
{
public:
  explicit Init_GPSFix_dip(::gps_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_time dip(::gps_msgs::msg::GPSFix::_dip_type arg)
  {
    msg_.dip = std::move(arg);
    return Init_GPSFix_time(msg_);
  }

private:
  ::gps_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_roll
{
public:
  explicit Init_GPSFix_roll(::gps_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_dip roll(::gps_msgs::msg::GPSFix::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_GPSFix_dip(msg_);
  }

private:
  ::gps_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_pitch
{
public:
  explicit Init_GPSFix_pitch(::gps_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_roll pitch(::gps_msgs::msg::GPSFix::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_GPSFix_roll(msg_);
  }

private:
  ::gps_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_climb
{
public:
  explicit Init_GPSFix_climb(::gps_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_pitch climb(::gps_msgs::msg::GPSFix::_climb_type arg)
  {
    msg_.climb = std::move(arg);
    return Init_GPSFix_pitch(msg_);
  }

private:
  ::gps_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_speed
{
public:
  explicit Init_GPSFix_speed(::gps_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_climb speed(::gps_msgs::msg::GPSFix::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_GPSFix_climb(msg_);
  }

private:
  ::gps_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_track
{
public:
  explicit Init_GPSFix_track(::gps_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_speed track(::gps_msgs::msg::GPSFix::_track_type arg)
  {
    msg_.track = std::move(arg);
    return Init_GPSFix_speed(msg_);
  }

private:
  ::gps_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_altitude
{
public:
  explicit Init_GPSFix_altitude(::gps_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_track altitude(::gps_msgs::msg::GPSFix::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_GPSFix_track(msg_);
  }

private:
  ::gps_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_longitude
{
public:
  explicit Init_GPSFix_longitude(::gps_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_altitude longitude(::gps_msgs::msg::GPSFix::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_GPSFix_altitude(msg_);
  }

private:
  ::gps_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_latitude
{
public:
  explicit Init_GPSFix_latitude(::gps_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_longitude latitude(::gps_msgs::msg::GPSFix::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_GPSFix_longitude(msg_);
  }

private:
  ::gps_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_status
{
public:
  explicit Init_GPSFix_status(::gps_msgs::msg::GPSFix & msg)
  : msg_(msg)
  {}
  Init_GPSFix_latitude status(::gps_msgs::msg::GPSFix::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GPSFix_latitude(msg_);
  }

private:
  ::gps_msgs::msg::GPSFix msg_;
};

class Init_GPSFix_header
{
public:
  Init_GPSFix_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GPSFix_status header(::gps_msgs::msg::GPSFix::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GPSFix_status(msg_);
  }

private:
  ::gps_msgs::msg::GPSFix msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gps_msgs::msg::GPSFix>()
{
  return gps_msgs::msg::builder::Init_GPSFix_header();
}

}  // namespace gps_msgs

#endif  // GPS_MSGS__MSG__DETAIL__GPS_FIX__BUILDER_HPP_
