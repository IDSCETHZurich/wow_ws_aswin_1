// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nmea_msgs:msg/Gpvtg.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPVTG__BUILDER_HPP_
#define NMEA_MSGS__MSG__DETAIL__GPVTG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nmea_msgs/msg/detail/gpvtg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nmea_msgs
{

namespace msg
{

namespace builder
{

class Init_Gpvtg_mode_indicator
{
public:
  explicit Init_Gpvtg_mode_indicator(::nmea_msgs::msg::Gpvtg & msg)
  : msg_(msg)
  {}
  ::nmea_msgs::msg::Gpvtg mode_indicator(::nmea_msgs::msg::Gpvtg::_mode_indicator_type arg)
  {
    msg_.mode_indicator = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nmea_msgs::msg::Gpvtg msg_;
};

class Init_Gpvtg_speed_k_unit
{
public:
  explicit Init_Gpvtg_speed_k_unit(::nmea_msgs::msg::Gpvtg & msg)
  : msg_(msg)
  {}
  Init_Gpvtg_mode_indicator speed_k_unit(::nmea_msgs::msg::Gpvtg::_speed_k_unit_type arg)
  {
    msg_.speed_k_unit = std::move(arg);
    return Init_Gpvtg_mode_indicator(msg_);
  }

private:
  ::nmea_msgs::msg::Gpvtg msg_;
};

class Init_Gpvtg_speed_k
{
public:
  explicit Init_Gpvtg_speed_k(::nmea_msgs::msg::Gpvtg & msg)
  : msg_(msg)
  {}
  Init_Gpvtg_speed_k_unit speed_k(::nmea_msgs::msg::Gpvtg::_speed_k_type arg)
  {
    msg_.speed_k = std::move(arg);
    return Init_Gpvtg_speed_k_unit(msg_);
  }

private:
  ::nmea_msgs::msg::Gpvtg msg_;
};

class Init_Gpvtg_speed_n_unit
{
public:
  explicit Init_Gpvtg_speed_n_unit(::nmea_msgs::msg::Gpvtg & msg)
  : msg_(msg)
  {}
  Init_Gpvtg_speed_k speed_n_unit(::nmea_msgs::msg::Gpvtg::_speed_n_unit_type arg)
  {
    msg_.speed_n_unit = std::move(arg);
    return Init_Gpvtg_speed_k(msg_);
  }

private:
  ::nmea_msgs::msg::Gpvtg msg_;
};

class Init_Gpvtg_speed_n
{
public:
  explicit Init_Gpvtg_speed_n(::nmea_msgs::msg::Gpvtg & msg)
  : msg_(msg)
  {}
  Init_Gpvtg_speed_n_unit speed_n(::nmea_msgs::msg::Gpvtg::_speed_n_type arg)
  {
    msg_.speed_n = std::move(arg);
    return Init_Gpvtg_speed_n_unit(msg_);
  }

private:
  ::nmea_msgs::msg::Gpvtg msg_;
};

class Init_Gpvtg_track_m_ref
{
public:
  explicit Init_Gpvtg_track_m_ref(::nmea_msgs::msg::Gpvtg & msg)
  : msg_(msg)
  {}
  Init_Gpvtg_speed_n track_m_ref(::nmea_msgs::msg::Gpvtg::_track_m_ref_type arg)
  {
    msg_.track_m_ref = std::move(arg);
    return Init_Gpvtg_speed_n(msg_);
  }

private:
  ::nmea_msgs::msg::Gpvtg msg_;
};

class Init_Gpvtg_track_m
{
public:
  explicit Init_Gpvtg_track_m(::nmea_msgs::msg::Gpvtg & msg)
  : msg_(msg)
  {}
  Init_Gpvtg_track_m_ref track_m(::nmea_msgs::msg::Gpvtg::_track_m_type arg)
  {
    msg_.track_m = std::move(arg);
    return Init_Gpvtg_track_m_ref(msg_);
  }

private:
  ::nmea_msgs::msg::Gpvtg msg_;
};

class Init_Gpvtg_track_t_ref
{
public:
  explicit Init_Gpvtg_track_t_ref(::nmea_msgs::msg::Gpvtg & msg)
  : msg_(msg)
  {}
  Init_Gpvtg_track_m track_t_ref(::nmea_msgs::msg::Gpvtg::_track_t_ref_type arg)
  {
    msg_.track_t_ref = std::move(arg);
    return Init_Gpvtg_track_m(msg_);
  }

private:
  ::nmea_msgs::msg::Gpvtg msg_;
};

class Init_Gpvtg_track_t
{
public:
  explicit Init_Gpvtg_track_t(::nmea_msgs::msg::Gpvtg & msg)
  : msg_(msg)
  {}
  Init_Gpvtg_track_t_ref track_t(::nmea_msgs::msg::Gpvtg::_track_t_type arg)
  {
    msg_.track_t = std::move(arg);
    return Init_Gpvtg_track_t_ref(msg_);
  }

private:
  ::nmea_msgs::msg::Gpvtg msg_;
};

class Init_Gpvtg_message_id
{
public:
  explicit Init_Gpvtg_message_id(::nmea_msgs::msg::Gpvtg & msg)
  : msg_(msg)
  {}
  Init_Gpvtg_track_t message_id(::nmea_msgs::msg::Gpvtg::_message_id_type arg)
  {
    msg_.message_id = std::move(arg);
    return Init_Gpvtg_track_t(msg_);
  }

private:
  ::nmea_msgs::msg::Gpvtg msg_;
};

class Init_Gpvtg_header
{
public:
  Init_Gpvtg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gpvtg_message_id header(::nmea_msgs::msg::Gpvtg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Gpvtg_message_id(msg_);
  }

private:
  ::nmea_msgs::msg::Gpvtg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nmea_msgs::msg::Gpvtg>()
{
  return nmea_msgs::msg::builder::Init_Gpvtg_header();
}

}  // namespace nmea_msgs

#endif  // NMEA_MSGS__MSG__DETAIL__GPVTG__BUILDER_HPP_
