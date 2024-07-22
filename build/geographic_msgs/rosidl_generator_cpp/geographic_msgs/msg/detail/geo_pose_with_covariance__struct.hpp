// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from geographic_msgs:msg/GeoPoseWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE_WITH_COVARIANCE__STRUCT_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE_WITH_COVARIANCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geographic_msgs/msg/detail/geo_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__geographic_msgs__msg__GeoPoseWithCovariance __attribute__((deprecated))
#else
# define DEPRECATED__geographic_msgs__msg__GeoPoseWithCovariance __declspec(deprecated)
#endif

namespace geographic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GeoPoseWithCovariance_
{
  using Type = GeoPoseWithCovariance_<ContainerAllocator>;

  explicit GeoPoseWithCovariance_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 36>::iterator, double>(this->covariance.begin(), this->covariance.end(), 0.0);
    }
  }

  explicit GeoPoseWithCovariance_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    covariance(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 36>::iterator, double>(this->covariance.begin(), this->covariance.end(), 0.0);
    }
  }

  // field types and members
  using _pose_type =
    geographic_msgs::msg::GeoPose_<ContainerAllocator>;
  _pose_type pose;
  using _covariance_type =
    std::array<double, 36>;
  _covariance_type covariance;

  // setters for named parameter idiom
  Type & set__pose(
    const geographic_msgs::msg::GeoPose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__covariance(
    const std::array<double, 36> & _arg)
  {
    this->covariance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    geographic_msgs::msg::GeoPoseWithCovariance_<ContainerAllocator> *;
  using ConstRawPtr =
    const geographic_msgs::msg::GeoPoseWithCovariance_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<geographic_msgs::msg::GeoPoseWithCovariance_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<geographic_msgs::msg::GeoPoseWithCovariance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      geographic_msgs::msg::GeoPoseWithCovariance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<geographic_msgs::msg::GeoPoseWithCovariance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      geographic_msgs::msg::GeoPoseWithCovariance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<geographic_msgs::msg::GeoPoseWithCovariance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<geographic_msgs::msg::GeoPoseWithCovariance_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<geographic_msgs::msg::GeoPoseWithCovariance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__geographic_msgs__msg__GeoPoseWithCovariance
    std::shared_ptr<geographic_msgs::msg::GeoPoseWithCovariance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__geographic_msgs__msg__GeoPoseWithCovariance
    std::shared_ptr<geographic_msgs::msg::GeoPoseWithCovariance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GeoPoseWithCovariance_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->covariance != other.covariance) {
      return false;
    }
    return true;
  }
  bool operator!=(const GeoPoseWithCovariance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GeoPoseWithCovariance_

// alias to use template instance with default allocator
using GeoPoseWithCovariance =
  geographic_msgs::msg::GeoPoseWithCovariance_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace geographic_msgs

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE_WITH_COVARIANCE__STRUCT_HPP_
