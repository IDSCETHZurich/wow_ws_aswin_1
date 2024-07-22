// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nmea_msgs:msg/Gpzda.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPZDA__BUILDER_HPP_
#define NMEA_MSGS__MSG__DETAIL__GPZDA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nmea_msgs/msg/detail/gpzda__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nmea_msgs
{

namespace msg
{

namespace builder
{

class Init_Gpzda_minute_offset_gmt
{
public:
  explicit Init_Gpzda_minute_offset_gmt(::nmea_msgs::msg::Gpzda & msg)
  : msg_(msg)
  {}
  ::nmea_msgs::msg::Gpzda minute_offset_gmt(::nmea_msgs::msg::Gpzda::_minute_offset_gmt_type arg)
  {
    msg_.minute_offset_gmt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nmea_msgs::msg::Gpzda msg_;
};

class Init_Gpzda_hour_offset_gmt
{
public:
  explicit Init_Gpzda_hour_offset_gmt(::nmea_msgs::msg::Gpzda & msg)
  : msg_(msg)
  {}
  Init_Gpzda_minute_offset_gmt hour_offset_gmt(::nmea_msgs::msg::Gpzda::_hour_offset_gmt_type arg)
  {
    msg_.hour_offset_gmt = std::move(arg);
    return Init_Gpzda_minute_offset_gmt(msg_);
  }

private:
  ::nmea_msgs::msg::Gpzda msg_;
};

class Init_Gpzda_year
{
public:
  explicit Init_Gpzda_year(::nmea_msgs::msg::Gpzda & msg)
  : msg_(msg)
  {}
  Init_Gpzda_hour_offset_gmt year(::nmea_msgs::msg::Gpzda::_year_type arg)
  {
    msg_.year = std::move(arg);
    return Init_Gpzda_hour_offset_gmt(msg_);
  }

private:
  ::nmea_msgs::msg::Gpzda msg_;
};

class Init_Gpzda_month
{
public:
  explicit Init_Gpzda_month(::nmea_msgs::msg::Gpzda & msg)
  : msg_(msg)
  {}
  Init_Gpzda_year month(::nmea_msgs::msg::Gpzda::_month_type arg)
  {
    msg_.month = std::move(arg);
    return Init_Gpzda_year(msg_);
  }

private:
  ::nmea_msgs::msg::Gpzda msg_;
};

class Init_Gpzda_day
{
public:
  explicit Init_Gpzda_day(::nmea_msgs::msg::Gpzda & msg)
  : msg_(msg)
  {}
  Init_Gpzda_month day(::nmea_msgs::msg::Gpzda::_day_type arg)
  {
    msg_.day = std::move(arg);
    return Init_Gpzda_month(msg_);
  }

private:
  ::nmea_msgs::msg::Gpzda msg_;
};

class Init_Gpzda_utc_seconds
{
public:
  explicit Init_Gpzda_utc_seconds(::nmea_msgs::msg::Gpzda & msg)
  : msg_(msg)
  {}
  Init_Gpzda_day utc_seconds(::nmea_msgs::msg::Gpzda::_utc_seconds_type arg)
  {
    msg_.utc_seconds = std::move(arg);
    return Init_Gpzda_day(msg_);
  }

private:
  ::nmea_msgs::msg::Gpzda msg_;
};

class Init_Gpzda_message_id
{
public:
  explicit Init_Gpzda_message_id(::nmea_msgs::msg::Gpzda & msg)
  : msg_(msg)
  {}
  Init_Gpzda_utc_seconds message_id(::nmea_msgs::msg::Gpzda::_message_id_type arg)
  {
    msg_.message_id = std::move(arg);
    return Init_Gpzda_utc_seconds(msg_);
  }

private:
  ::nmea_msgs::msg::Gpzda msg_;
};

class Init_Gpzda_header
{
public:
  Init_Gpzda_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gpzda_message_id header(::nmea_msgs::msg::Gpzda::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Gpzda_message_id(msg_);
  }

private:
  ::nmea_msgs::msg::Gpzda msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nmea_msgs::msg::Gpzda>()
{
  return nmea_msgs::msg::builder::Init_Gpzda_header();
}

}  // namespace nmea_msgs

#endif  // NMEA_MSGS__MSG__DETAIL__GPZDA__BUILDER_HPP_
