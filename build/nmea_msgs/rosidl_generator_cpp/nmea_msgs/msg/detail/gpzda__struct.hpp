// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nmea_msgs:msg/Gpzda.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPZDA__STRUCT_HPP_
#define NMEA_MSGS__MSG__DETAIL__GPZDA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nmea_msgs__msg__Gpzda __attribute__((deprecated))
#else
# define DEPRECATED__nmea_msgs__msg__Gpzda __declspec(deprecated)
#endif

namespace nmea_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Gpzda_
{
  using Type = Gpzda_<ContainerAllocator>;

  explicit Gpzda_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message_id = "";
      this->utc_seconds = 0ul;
      this->day = 0;
      this->month = 0;
      this->year = 0;
      this->hour_offset_gmt = 0;
      this->minute_offset_gmt = 0;
    }
  }

  explicit Gpzda_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    message_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message_id = "";
      this->utc_seconds = 0ul;
      this->day = 0;
      this->month = 0;
      this->year = 0;
      this->hour_offset_gmt = 0;
      this->minute_offset_gmt = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _message_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_id_type message_id;
  using _utc_seconds_type =
    uint32_t;
  _utc_seconds_type utc_seconds;
  using _day_type =
    uint8_t;
  _day_type day;
  using _month_type =
    uint8_t;
  _month_type month;
  using _year_type =
    uint16_t;
  _year_type year;
  using _hour_offset_gmt_type =
    int8_t;
  _hour_offset_gmt_type hour_offset_gmt;
  using _minute_offset_gmt_type =
    uint8_t;
  _minute_offset_gmt_type minute_offset_gmt;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__message_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message_id = _arg;
    return *this;
  }
  Type & set__utc_seconds(
    const uint32_t & _arg)
  {
    this->utc_seconds = _arg;
    return *this;
  }
  Type & set__day(
    const uint8_t & _arg)
  {
    this->day = _arg;
    return *this;
  }
  Type & set__month(
    const uint8_t & _arg)
  {
    this->month = _arg;
    return *this;
  }
  Type & set__year(
    const uint16_t & _arg)
  {
    this->year = _arg;
    return *this;
  }
  Type & set__hour_offset_gmt(
    const int8_t & _arg)
  {
    this->hour_offset_gmt = _arg;
    return *this;
  }
  Type & set__minute_offset_gmt(
    const uint8_t & _arg)
  {
    this->minute_offset_gmt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nmea_msgs::msg::Gpzda_<ContainerAllocator> *;
  using ConstRawPtr =
    const nmea_msgs::msg::Gpzda_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nmea_msgs::msg::Gpzda_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nmea_msgs::msg::Gpzda_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nmea_msgs::msg::Gpzda_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nmea_msgs::msg::Gpzda_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nmea_msgs::msg::Gpzda_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nmea_msgs::msg::Gpzda_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nmea_msgs::msg::Gpzda_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nmea_msgs::msg::Gpzda_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nmea_msgs__msg__Gpzda
    std::shared_ptr<nmea_msgs::msg::Gpzda_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nmea_msgs__msg__Gpzda
    std::shared_ptr<nmea_msgs::msg::Gpzda_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Gpzda_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->message_id != other.message_id) {
      return false;
    }
    if (this->utc_seconds != other.utc_seconds) {
      return false;
    }
    if (this->day != other.day) {
      return false;
    }
    if (this->month != other.month) {
      return false;
    }
    if (this->year != other.year) {
      return false;
    }
    if (this->hour_offset_gmt != other.hour_offset_gmt) {
      return false;
    }
    if (this->minute_offset_gmt != other.minute_offset_gmt) {
      return false;
    }
    return true;
  }
  bool operator!=(const Gpzda_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Gpzda_

// alias to use template instance with default allocator
using Gpzda =
  nmea_msgs::msg::Gpzda_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nmea_msgs

#endif  // NMEA_MSGS__MSG__DETAIL__GPZDA__STRUCT_HPP_
