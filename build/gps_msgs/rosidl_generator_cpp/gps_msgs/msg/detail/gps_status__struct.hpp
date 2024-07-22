// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gps_msgs:msg/GPSStatus.idl
// generated code does not contain a copyright notice

#ifndef GPS_MSGS__MSG__DETAIL__GPS_STATUS__STRUCT_HPP_
#define GPS_MSGS__MSG__DETAIL__GPS_STATUS__STRUCT_HPP_

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
# define DEPRECATED__gps_msgs__msg__GPSStatus __attribute__((deprecated))
#else
# define DEPRECATED__gps_msgs__msg__GPSStatus __declspec(deprecated)
#endif

namespace gps_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GPSStatus_
{
  using Type = GPSStatus_<ContainerAllocator>;

  explicit GPSStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->satellites_used = 0;
      this->satellites_visible = 0;
      this->status = 0;
      this->motion_source = 0;
      this->orientation_source = 0;
      this->position_source = 0;
    }
  }

  explicit GPSStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->satellites_used = 0;
      this->satellites_visible = 0;
      this->status = 0;
      this->motion_source = 0;
      this->orientation_source = 0;
      this->position_source = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _satellites_used_type =
    uint16_t;
  _satellites_used_type satellites_used;
  using _satellite_used_prn_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _satellite_used_prn_type satellite_used_prn;
  using _satellites_visible_type =
    uint16_t;
  _satellites_visible_type satellites_visible;
  using _satellite_visible_prn_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _satellite_visible_prn_type satellite_visible_prn;
  using _satellite_visible_z_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _satellite_visible_z_type satellite_visible_z;
  using _satellite_visible_azimuth_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _satellite_visible_azimuth_type satellite_visible_azimuth;
  using _satellite_visible_snr_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _satellite_visible_snr_type satellite_visible_snr;
  using _status_type =
    int16_t;
  _status_type status;
  using _motion_source_type =
    uint16_t;
  _motion_source_type motion_source;
  using _orientation_source_type =
    uint16_t;
  _orientation_source_type orientation_source;
  using _position_source_type =
    uint16_t;
  _position_source_type position_source;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__satellites_used(
    const uint16_t & _arg)
  {
    this->satellites_used = _arg;
    return *this;
  }
  Type & set__satellite_used_prn(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->satellite_used_prn = _arg;
    return *this;
  }
  Type & set__satellites_visible(
    const uint16_t & _arg)
  {
    this->satellites_visible = _arg;
    return *this;
  }
  Type & set__satellite_visible_prn(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->satellite_visible_prn = _arg;
    return *this;
  }
  Type & set__satellite_visible_z(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->satellite_visible_z = _arg;
    return *this;
  }
  Type & set__satellite_visible_azimuth(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->satellite_visible_azimuth = _arg;
    return *this;
  }
  Type & set__satellite_visible_snr(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->satellite_visible_snr = _arg;
    return *this;
  }
  Type & set__status(
    const int16_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__motion_source(
    const uint16_t & _arg)
  {
    this->motion_source = _arg;
    return *this;
  }
  Type & set__orientation_source(
    const uint16_t & _arg)
  {
    this->orientation_source = _arg;
    return *this;
  }
  Type & set__position_source(
    const uint16_t & _arg)
  {
    this->position_source = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int16_t STATUS_NO_FIX =
    -1;
  static constexpr int16_t STATUS_FIX =
    0;
  static constexpr int16_t STATUS_SBAS_FIX =
    1;
  static constexpr int16_t STATUS_GBAS_FIX =
    2;
  static constexpr int16_t STATUS_DGPS_FIX =
    18;
  static constexpr int16_t STATUS_RTK_FIX =
    19;
  static constexpr int16_t STATUS_RTK_FLOAT =
    20;
  static constexpr int16_t STATUS_WAAS_FIX =
    33;
  static constexpr uint16_t SOURCE_NONE =
    0u;
  static constexpr uint16_t SOURCE_GPS =
    1u;
  static constexpr uint16_t SOURCE_POINTS =
    2u;
  static constexpr uint16_t SOURCE_DOPPLER =
    4u;
  static constexpr uint16_t SOURCE_ALTIMETER =
    8u;
  static constexpr uint16_t SOURCE_MAGNETIC =
    16u;
  static constexpr uint16_t SOURCE_GYRO =
    32u;
  static constexpr uint16_t SOURCE_ACCEL =
    64u;

  // pointer types
  using RawPtr =
    gps_msgs::msg::GPSStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const gps_msgs::msg::GPSStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gps_msgs::msg::GPSStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gps_msgs::msg::GPSStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gps_msgs::msg::GPSStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gps_msgs::msg::GPSStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gps_msgs::msg::GPSStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gps_msgs::msg::GPSStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gps_msgs::msg::GPSStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gps_msgs::msg::GPSStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gps_msgs__msg__GPSStatus
    std::shared_ptr<gps_msgs::msg::GPSStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gps_msgs__msg__GPSStatus
    std::shared_ptr<gps_msgs::msg::GPSStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GPSStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->satellites_used != other.satellites_used) {
      return false;
    }
    if (this->satellite_used_prn != other.satellite_used_prn) {
      return false;
    }
    if (this->satellites_visible != other.satellites_visible) {
      return false;
    }
    if (this->satellite_visible_prn != other.satellite_visible_prn) {
      return false;
    }
    if (this->satellite_visible_z != other.satellite_visible_z) {
      return false;
    }
    if (this->satellite_visible_azimuth != other.satellite_visible_azimuth) {
      return false;
    }
    if (this->satellite_visible_snr != other.satellite_visible_snr) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->motion_source != other.motion_source) {
      return false;
    }
    if (this->orientation_source != other.orientation_source) {
      return false;
    }
    if (this->position_source != other.position_source) {
      return false;
    }
    return true;
  }
  bool operator!=(const GPSStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GPSStatus_

// alias to use template instance with default allocator
using GPSStatus =
  gps_msgs::msg::GPSStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t GPSStatus_<ContainerAllocator>::STATUS_NO_FIX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t GPSStatus_<ContainerAllocator>::STATUS_FIX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t GPSStatus_<ContainerAllocator>::STATUS_SBAS_FIX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t GPSStatus_<ContainerAllocator>::STATUS_GBAS_FIX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t GPSStatus_<ContainerAllocator>::STATUS_DGPS_FIX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t GPSStatus_<ContainerAllocator>::STATUS_RTK_FIX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t GPSStatus_<ContainerAllocator>::STATUS_RTK_FLOAT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t GPSStatus_<ContainerAllocator>::STATUS_WAAS_FIX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t GPSStatus_<ContainerAllocator>::SOURCE_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t GPSStatus_<ContainerAllocator>::SOURCE_GPS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t GPSStatus_<ContainerAllocator>::SOURCE_POINTS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t GPSStatus_<ContainerAllocator>::SOURCE_DOPPLER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t GPSStatus_<ContainerAllocator>::SOURCE_ALTIMETER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t GPSStatus_<ContainerAllocator>::SOURCE_MAGNETIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t GPSStatus_<ContainerAllocator>::SOURCE_GYRO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t GPSStatus_<ContainerAllocator>::SOURCE_ACCEL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace gps_msgs

#endif  // GPS_MSGS__MSG__DETAIL__GPS_STATUS__STRUCT_HPP_
