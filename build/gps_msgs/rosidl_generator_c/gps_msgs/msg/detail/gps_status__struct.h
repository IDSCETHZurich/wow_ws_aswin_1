// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gps_msgs:msg/GPSStatus.idl
// generated code does not contain a copyright notice

#ifndef GPS_MSGS__MSG__DETAIL__GPS_STATUS__STRUCT_H_
#define GPS_MSGS__MSG__DETAIL__GPS_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'STATUS_NO_FIX'.
/**
  * Measurement status
  * Unable to fix position
 */
enum
{
  gps_msgs__msg__GPSStatus__STATUS_NO_FIX = -1
};

/// Constant 'STATUS_FIX'.
/**
  * Normal fix
 */
enum
{
  gps_msgs__msg__GPSStatus__STATUS_FIX = 0
};

/// Constant 'STATUS_SBAS_FIX'.
/**
  * Fixed using a satellite-based augmentation system
 */
enum
{
  gps_msgs__msg__GPSStatus__STATUS_SBAS_FIX = 1
};

/// Constant 'STATUS_GBAS_FIX'.
/**
  * or a ground-based augmentation system
 */
enum
{
  gps_msgs__msg__GPSStatus__STATUS_GBAS_FIX = 2
};

/// Constant 'STATUS_DGPS_FIX'.
/**
  * Fixed with DGPS
 */
enum
{
  gps_msgs__msg__GPSStatus__STATUS_DGPS_FIX = 18
};

/// Constant 'STATUS_RTK_FIX'.
/**
  * Real-Time Kinematic, fixed integers
 */
enum
{
  gps_msgs__msg__GPSStatus__STATUS_RTK_FIX = 19
};

/// Constant 'STATUS_RTK_FLOAT'.
/**
  * Real-Time Kinematic, float integers
 */
enum
{
  gps_msgs__msg__GPSStatus__STATUS_RTK_FLOAT = 20
};

/// Constant 'STATUS_WAAS_FIX'.
/**
  * Fixed with WAAS
 */
enum
{
  gps_msgs__msg__GPSStatus__STATUS_WAAS_FIX = 33
};

/// Constant 'SOURCE_NONE'.
/**
  * No information is available
 */
enum
{
  gps_msgs__msg__GPSStatus__SOURCE_NONE = 0
};

/// Constant 'SOURCE_GPS'.
/**
  * Using standard GPS location
 */
enum
{
  gps_msgs__msg__GPSStatus__SOURCE_GPS = 1
};

/// Constant 'SOURCE_POINTS'.
/**
  * Motion/orientation fix is derived from successive points
 */
enum
{
  gps_msgs__msg__GPSStatus__SOURCE_POINTS = 2
};

/// Constant 'SOURCE_DOPPLER'.
/**
  * Motion is derived using the Doppler effect
 */
enum
{
  gps_msgs__msg__GPSStatus__SOURCE_DOPPLER = 4
};

/// Constant 'SOURCE_ALTIMETER'.
/**
  * Using an altimeter
 */
enum
{
  gps_msgs__msg__GPSStatus__SOURCE_ALTIMETER = 8
};

/// Constant 'SOURCE_MAGNETIC'.
/**
  * Using magnetic sensors
 */
enum
{
  gps_msgs__msg__GPSStatus__SOURCE_MAGNETIC = 16
};

/// Constant 'SOURCE_GYRO'.
/**
  * Using gyroscopes
 */
enum
{
  gps_msgs__msg__GPSStatus__SOURCE_GYRO = 32
};

/// Constant 'SOURCE_ACCEL'.
/**
  * Using accelerometers
 */
enum
{
  gps_msgs__msg__GPSStatus__SOURCE_ACCEL = 64
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'satellite_used_prn'
// Member 'satellite_visible_prn'
// Member 'satellite_visible_z'
// Member 'satellite_visible_azimuth'
// Member 'satellite_visible_snr'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/GPSStatus in the package gps_msgs.
typedef struct gps_msgs__msg__GPSStatus
{
  std_msgs__msg__Header header;
  /// Satellites used in solution
  /// Number of satellites
  uint16_t satellites_used;
  /// PRN identifiers
  rosidl_runtime_c__int32__Sequence satellite_used_prn;
  /// Satellites visible
  uint16_t satellites_visible;
  /// PRN identifiers
  rosidl_runtime_c__int32__Sequence satellite_visible_prn;
  /// Elevation of satellites
  rosidl_runtime_c__int32__Sequence satellite_visible_z;
  /// Azimuth of satellites
  rosidl_runtime_c__int32__Sequence satellite_visible_azimuth;
  /// Signal-to-noise ratios (dB)
  rosidl_runtime_c__int32__Sequence satellite_visible_snr;
  int16_t status;
  /// Source for speed, climb and track
  uint16_t motion_source;
  /// Source for device orientation
  uint16_t orientation_source;
  /// Source for position
  uint16_t position_source;
} gps_msgs__msg__GPSStatus;

// Struct for a sequence of gps_msgs__msg__GPSStatus.
typedef struct gps_msgs__msg__GPSStatus__Sequence
{
  gps_msgs__msg__GPSStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gps_msgs__msg__GPSStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GPS_MSGS__MSG__DETAIL__GPS_STATUS__STRUCT_H_
