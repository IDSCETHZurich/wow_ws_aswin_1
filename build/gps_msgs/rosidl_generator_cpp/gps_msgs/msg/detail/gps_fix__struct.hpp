// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gps_msgs:msg/GPSFix.idl
// generated code does not contain a copyright notice

#ifndef GPS_MSGS__MSG__DETAIL__GPS_FIX__STRUCT_HPP_
#define GPS_MSGS__MSG__DETAIL__GPS_FIX__STRUCT_HPP_

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
// Member 'status'
#include "gps_msgs/msg/detail/gps_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gps_msgs__msg__GPSFix __attribute__((deprecated))
#else
# define DEPRECATED__gps_msgs__msg__GPSFix __declspec(deprecated)
#endif

namespace gps_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GPSFix_
{
  using Type = GPSFix_<ContainerAllocator>;

  explicit GPSFix_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->altitude = 0.0;
      this->track = 0.0;
      this->speed = 0.0;
      this->climb = 0.0;
      this->pitch = 0.0;
      this->roll = 0.0;
      this->dip = 0.0;
      this->time = 0.0;
      this->gdop = 0.0;
      this->pdop = 0.0;
      this->hdop = 0.0;
      this->vdop = 0.0;
      this->tdop = 0.0;
      this->err = 0.0;
      this->err_horz = 0.0;
      this->err_vert = 0.0;
      this->err_track = 0.0;
      this->err_speed = 0.0;
      this->err_climb = 0.0;
      this->err_time = 0.0;
      this->err_pitch = 0.0;
      this->err_roll = 0.0;
      this->err_dip = 0.0;
      std::fill<typename std::array<double, 9>::iterator, double>(this->position_covariance.begin(), this->position_covariance.end(), 0.0);
      this->position_covariance_type = 0;
    }
  }

  explicit GPSFix_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    status(_alloc, _init),
    position_covariance(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->altitude = 0.0;
      this->track = 0.0;
      this->speed = 0.0;
      this->climb = 0.0;
      this->pitch = 0.0;
      this->roll = 0.0;
      this->dip = 0.0;
      this->time = 0.0;
      this->gdop = 0.0;
      this->pdop = 0.0;
      this->hdop = 0.0;
      this->vdop = 0.0;
      this->tdop = 0.0;
      this->err = 0.0;
      this->err_horz = 0.0;
      this->err_vert = 0.0;
      this->err_track = 0.0;
      this->err_speed = 0.0;
      this->err_climb = 0.0;
      this->err_time = 0.0;
      this->err_pitch = 0.0;
      this->err_roll = 0.0;
      this->err_dip = 0.0;
      std::fill<typename std::array<double, 9>::iterator, double>(this->position_covariance.begin(), this->position_covariance.end(), 0.0);
      this->position_covariance_type = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _status_type =
    gps_msgs::msg::GPSStatus_<ContainerAllocator>;
  _status_type status;
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _altitude_type =
    double;
  _altitude_type altitude;
  using _track_type =
    double;
  _track_type track;
  using _speed_type =
    double;
  _speed_type speed;
  using _climb_type =
    double;
  _climb_type climb;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _roll_type =
    double;
  _roll_type roll;
  using _dip_type =
    double;
  _dip_type dip;
  using _time_type =
    double;
  _time_type time;
  using _gdop_type =
    double;
  _gdop_type gdop;
  using _pdop_type =
    double;
  _pdop_type pdop;
  using _hdop_type =
    double;
  _hdop_type hdop;
  using _vdop_type =
    double;
  _vdop_type vdop;
  using _tdop_type =
    double;
  _tdop_type tdop;
  using _err_type =
    double;
  _err_type err;
  using _err_horz_type =
    double;
  _err_horz_type err_horz;
  using _err_vert_type =
    double;
  _err_vert_type err_vert;
  using _err_track_type =
    double;
  _err_track_type err_track;
  using _err_speed_type =
    double;
  _err_speed_type err_speed;
  using _err_climb_type =
    double;
  _err_climb_type err_climb;
  using _err_time_type =
    double;
  _err_time_type err_time;
  using _err_pitch_type =
    double;
  _err_pitch_type err_pitch;
  using _err_roll_type =
    double;
  _err_roll_type err_roll;
  using _err_dip_type =
    double;
  _err_dip_type err_dip;
  using _position_covariance_type =
    std::array<double, 9>;
  _position_covariance_type position_covariance;
  using _position_covariance_type_type =
    uint8_t;
  _position_covariance_type_type position_covariance_type;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__status(
    const gps_msgs::msg::GPSStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__altitude(
    const double & _arg)
  {
    this->altitude = _arg;
    return *this;
  }
  Type & set__track(
    const double & _arg)
  {
    this->track = _arg;
    return *this;
  }
  Type & set__speed(
    const double & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__climb(
    const double & _arg)
  {
    this->climb = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__dip(
    const double & _arg)
  {
    this->dip = _arg;
    return *this;
  }
  Type & set__time(
    const double & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__gdop(
    const double & _arg)
  {
    this->gdop = _arg;
    return *this;
  }
  Type & set__pdop(
    const double & _arg)
  {
    this->pdop = _arg;
    return *this;
  }
  Type & set__hdop(
    const double & _arg)
  {
    this->hdop = _arg;
    return *this;
  }
  Type & set__vdop(
    const double & _arg)
  {
    this->vdop = _arg;
    return *this;
  }
  Type & set__tdop(
    const double & _arg)
  {
    this->tdop = _arg;
    return *this;
  }
  Type & set__err(
    const double & _arg)
  {
    this->err = _arg;
    return *this;
  }
  Type & set__err_horz(
    const double & _arg)
  {
    this->err_horz = _arg;
    return *this;
  }
  Type & set__err_vert(
    const double & _arg)
  {
    this->err_vert = _arg;
    return *this;
  }
  Type & set__err_track(
    const double & _arg)
  {
    this->err_track = _arg;
    return *this;
  }
  Type & set__err_speed(
    const double & _arg)
  {
    this->err_speed = _arg;
    return *this;
  }
  Type & set__err_climb(
    const double & _arg)
  {
    this->err_climb = _arg;
    return *this;
  }
  Type & set__err_time(
    const double & _arg)
  {
    this->err_time = _arg;
    return *this;
  }
  Type & set__err_pitch(
    const double & _arg)
  {
    this->err_pitch = _arg;
    return *this;
  }
  Type & set__err_roll(
    const double & _arg)
  {
    this->err_roll = _arg;
    return *this;
  }
  Type & set__err_dip(
    const double & _arg)
  {
    this->err_dip = _arg;
    return *this;
  }
  Type & set__position_covariance(
    const std::array<double, 9> & _arg)
  {
    this->position_covariance = _arg;
    return *this;
  }
  Type & set__position_covariance_type(
    const uint8_t & _arg)
  {
    this->position_covariance_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t COVARIANCE_TYPE_UNKNOWN =
    0u;
  static constexpr uint8_t COVARIANCE_TYPE_APPROXIMATED =
    1u;
  static constexpr uint8_t COVARIANCE_TYPE_DIAGONAL_KNOWN =
    2u;
  static constexpr uint8_t COVARIANCE_TYPE_KNOWN =
    3u;

  // pointer types
  using RawPtr =
    gps_msgs::msg::GPSFix_<ContainerAllocator> *;
  using ConstRawPtr =
    const gps_msgs::msg::GPSFix_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gps_msgs::msg::GPSFix_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gps_msgs::msg::GPSFix_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gps_msgs::msg::GPSFix_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gps_msgs::msg::GPSFix_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gps_msgs::msg::GPSFix_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gps_msgs::msg::GPSFix_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gps_msgs::msg::GPSFix_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gps_msgs::msg::GPSFix_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gps_msgs__msg__GPSFix
    std::shared_ptr<gps_msgs::msg::GPSFix_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gps_msgs__msg__GPSFix
    std::shared_ptr<gps_msgs::msg::GPSFix_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GPSFix_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    if (this->track != other.track) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->climb != other.climb) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->dip != other.dip) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    if (this->gdop != other.gdop) {
      return false;
    }
    if (this->pdop != other.pdop) {
      return false;
    }
    if (this->hdop != other.hdop) {
      return false;
    }
    if (this->vdop != other.vdop) {
      return false;
    }
    if (this->tdop != other.tdop) {
      return false;
    }
    if (this->err != other.err) {
      return false;
    }
    if (this->err_horz != other.err_horz) {
      return false;
    }
    if (this->err_vert != other.err_vert) {
      return false;
    }
    if (this->err_track != other.err_track) {
      return false;
    }
    if (this->err_speed != other.err_speed) {
      return false;
    }
    if (this->err_climb != other.err_climb) {
      return false;
    }
    if (this->err_time != other.err_time) {
      return false;
    }
    if (this->err_pitch != other.err_pitch) {
      return false;
    }
    if (this->err_roll != other.err_roll) {
      return false;
    }
    if (this->err_dip != other.err_dip) {
      return false;
    }
    if (this->position_covariance != other.position_covariance) {
      return false;
    }
    if (this->position_covariance_type != other.position_covariance_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const GPSFix_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GPSFix_

// alias to use template instance with default allocator
using GPSFix =
  gps_msgs::msg::GPSFix_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GPSFix_<ContainerAllocator>::COVARIANCE_TYPE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GPSFix_<ContainerAllocator>::COVARIANCE_TYPE_APPROXIMATED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GPSFix_<ContainerAllocator>::COVARIANCE_TYPE_DIAGONAL_KNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GPSFix_<ContainerAllocator>::COVARIANCE_TYPE_KNOWN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace gps_msgs

#endif  // GPS_MSGS__MSG__DETAIL__GPS_FIX__STRUCT_HPP_
