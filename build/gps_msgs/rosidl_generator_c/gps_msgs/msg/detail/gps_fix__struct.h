// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gps_msgs:msg/GPSFix.idl
// generated code does not contain a copyright notice

#ifndef GPS_MSGS__MSG__DETAIL__GPS_FIX__STRUCT_H_
#define GPS_MSGS__MSG__DETAIL__GPS_FIX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'COVARIANCE_TYPE_UNKNOWN'.
enum
{
  gps_msgs__msg__GPSFix__COVARIANCE_TYPE_UNKNOWN = 0
};

/// Constant 'COVARIANCE_TYPE_APPROXIMATED'.
enum
{
  gps_msgs__msg__GPSFix__COVARIANCE_TYPE_APPROXIMATED = 1
};

/// Constant 'COVARIANCE_TYPE_DIAGONAL_KNOWN'.
enum
{
  gps_msgs__msg__GPSFix__COVARIANCE_TYPE_DIAGONAL_KNOWN = 2
};

/// Constant 'COVARIANCE_TYPE_KNOWN'.
enum
{
  gps_msgs__msg__GPSFix__COVARIANCE_TYPE_KNOWN = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'status'
#include "gps_msgs/msg/detail/gps_status__struct.h"

/// Struct defined in msg/GPSFix in the package gps_msgs.
/**
  * A more complete GPS fix to supplement sensor_msgs/NavSatFix.
 */
typedef struct gps_msgs__msg__GPSFix
{
  std_msgs__msg__Header header;
  gps_msgs__msg__GPSStatus status;
  /// Latitude (degrees). Positive is north of equator; negative is south.
  double latitude;
  /// Longitude (degrees). Positive is east of prime meridian, negative west.
  double longitude;
  /// Altitude (meters). Positive is above reference (e.g., sea level).
  double altitude;
  /// Direction (degrees from north)
  double track;
  /// Ground speed (meters/second)
  double speed;
  /// Vertical speed (meters/second)
  double climb;
  /// Device orientation (units in degrees)
  double pitch;
  double roll;
  double dip;
  /// GPS time
  double time;
  /// Dilution of precision; Xdop<=0 means the value is unknown
  /// Total (positional-temporal) dilution of precision
  double gdop;
  /// Positional (3D) dilution of precision
  double pdop;
  /// Horizontal dilution of precision
  double hdop;
  /// Vertical dilution of precision
  double vdop;
  /// Temporal dilution of precision
  double tdop;
  /// Uncertainty of measurement, 95% confidence
  /// Spherical position uncertainty (meters)
  double err;
  /// Horizontal position uncertainty (meters)
  double err_horz;
  /// Vertical position uncertainty (meters)
  double err_vert;
  /// Track uncertainty (degrees)
  double err_track;
  /// Ground speed uncertainty (meters/second)
  double err_speed;
  /// Vertical speed uncertainty (meters/second)
  double err_climb;
  /// Temporal uncertainty
  double err_time;
  /// Orientation uncertainty (degrees)
  double err_pitch;
  double err_roll;
  double err_dip;
  /// Position covariance defined relative to a tangential plane
  /// through the reported position. The components are East, North, and
  /// Up (ENU), in row-major order.
  double position_covariance[9];
  uint8_t position_covariance_type;
} gps_msgs__msg__GPSFix;

// Struct for a sequence of gps_msgs__msg__GPSFix.
typedef struct gps_msgs__msg__GPSFix__Sequence
{
  gps_msgs__msg__GPSFix * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gps_msgs__msg__GPSFix__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GPS_MSGS__MSG__DETAIL__GPS_FIX__STRUCT_H_
