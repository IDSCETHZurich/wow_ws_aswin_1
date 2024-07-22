// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geographic_msgs:msg/GeoPoseWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE_WITH_COVARIANCE__STRUCT_H_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE_WITH_COVARIANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geographic_msgs/msg/detail/geo_pose__struct.h"

/// Struct defined in msg/GeoPoseWithCovariance in the package geographic_msgs.
/**
  * Geographic pose, using the WGS 84 reference ellipsoid.
  *
  * Orientation uses the East-North-Up (ENU) frame of reference.
  * (But, what about singularities at the poles?)
 */
typedef struct geographic_msgs__msg__GeoPoseWithCovariance
{
  geographic_msgs__msg__GeoPose pose;
  /// Row-major representation of the 6x6 covariance matrix
  /// The orientation parameters use a fixed-axis representation.
  /// In order, the parameters are:
  /// (Lat, Lon, Alt, rotation about E (East) axis, rotation about N (North) axis, rotation about U (Up) axis)
  double covariance[36];
} geographic_msgs__msg__GeoPoseWithCovariance;

// Struct for a sequence of geographic_msgs__msg__GeoPoseWithCovariance.
typedef struct geographic_msgs__msg__GeoPoseWithCovariance__Sequence
{
  geographic_msgs__msg__GeoPoseWithCovariance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geographic_msgs__msg__GeoPoseWithCovariance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE_WITH_COVARIANCE__STRUCT_H_
