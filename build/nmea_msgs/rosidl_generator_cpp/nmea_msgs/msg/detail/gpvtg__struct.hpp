// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nmea_msgs:msg/Gpvtg.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPVTG__STRUCT_HPP_
#define NMEA_MSGS__MSG__DETAIL__GPVTG__STRUCT_HPP_

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
# define DEPRECATED__nmea_msgs__msg__Gpvtg __attribute__((deprecated))
#else
# define DEPRECATED__nmea_msgs__msg__Gpvtg __declspec(deprecated)
#endif

namespace nmea_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Gpvtg_
{
  using Type = Gpvtg_<ContainerAllocator>;

  explicit Gpvtg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message_id = "";
      this->track_t = 0.0f;
      this->track_t_ref = "";
      this->track_m = 0.0f;
      this->track_m_ref = "";
      this->speed_n = 0.0f;
      this->speed_n_unit = "";
      this->speed_k = 0.0f;
      this->speed_k_unit = "";
      this->mode_indicator = "";
    }
  }

  explicit Gpvtg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    message_id(_alloc),
    track_t_ref(_alloc),
    track_m_ref(_alloc),
    speed_n_unit(_alloc),
    speed_k_unit(_alloc),
    mode_indicator(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message_id = "";
      this->track_t = 0.0f;
      this->track_t_ref = "";
      this->track_m = 0.0f;
      this->track_m_ref = "";
      this->speed_n = 0.0f;
      this->speed_n_unit = "";
      this->speed_k = 0.0f;
      this->speed_k_unit = "";
      this->mode_indicator = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _message_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_id_type message_id;
  using _track_t_type =
    float;
  _track_t_type track_t;
  using _track_t_ref_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _track_t_ref_type track_t_ref;
  using _track_m_type =
    float;
  _track_m_type track_m;
  using _track_m_ref_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _track_m_ref_type track_m_ref;
  using _speed_n_type =
    float;
  _speed_n_type speed_n;
  using _speed_n_unit_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _speed_n_unit_type speed_n_unit;
  using _speed_k_type =
    float;
  _speed_k_type speed_k;
  using _speed_k_unit_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _speed_k_unit_type speed_k_unit;
  using _mode_indicator_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mode_indicator_type mode_indicator;

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
  Type & set__track_t(
    const float & _arg)
  {
    this->track_t = _arg;
    return *this;
  }
  Type & set__track_t_ref(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->track_t_ref = _arg;
    return *this;
  }
  Type & set__track_m(
    const float & _arg)
  {
    this->track_m = _arg;
    return *this;
  }
  Type & set__track_m_ref(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->track_m_ref = _arg;
    return *this;
  }
  Type & set__speed_n(
    const float & _arg)
  {
    this->speed_n = _arg;
    return *this;
  }
  Type & set__speed_n_unit(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->speed_n_unit = _arg;
    return *this;
  }
  Type & set__speed_k(
    const float & _arg)
  {
    this->speed_k = _arg;
    return *this;
  }
  Type & set__speed_k_unit(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->speed_k_unit = _arg;
    return *this;
  }
  Type & set__mode_indicator(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mode_indicator = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nmea_msgs::msg::Gpvtg_<ContainerAllocator> *;
  using ConstRawPtr =
    const nmea_msgs::msg::Gpvtg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nmea_msgs::msg::Gpvtg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nmea_msgs::msg::Gpvtg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nmea_msgs::msg::Gpvtg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nmea_msgs::msg::Gpvtg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nmea_msgs::msg::Gpvtg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nmea_msgs::msg::Gpvtg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nmea_msgs::msg::Gpvtg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nmea_msgs::msg::Gpvtg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nmea_msgs__msg__Gpvtg
    std::shared_ptr<nmea_msgs::msg::Gpvtg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nmea_msgs__msg__Gpvtg
    std::shared_ptr<nmea_msgs::msg::Gpvtg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Gpvtg_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->message_id != other.message_id) {
      return false;
    }
    if (this->track_t != other.track_t) {
      return false;
    }
    if (this->track_t_ref != other.track_t_ref) {
      return false;
    }
    if (this->track_m != other.track_m) {
      return false;
    }
    if (this->track_m_ref != other.track_m_ref) {
      return false;
    }
    if (this->speed_n != other.speed_n) {
      return false;
    }
    if (this->speed_n_unit != other.speed_n_unit) {
      return false;
    }
    if (this->speed_k != other.speed_k) {
      return false;
    }
    if (this->speed_k_unit != other.speed_k_unit) {
      return false;
    }
    if (this->mode_indicator != other.mode_indicator) {
      return false;
    }
    return true;
  }
  bool operator!=(const Gpvtg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Gpvtg_

// alias to use template instance with default allocator
using Gpvtg =
  nmea_msgs::msg::Gpvtg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nmea_msgs

#endif  // NMEA_MSGS__MSG__DETAIL__GPVTG__STRUCT_HPP_
