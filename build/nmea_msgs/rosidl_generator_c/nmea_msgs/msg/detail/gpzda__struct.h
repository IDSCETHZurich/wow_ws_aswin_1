// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nmea_msgs:msg/Gpzda.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__GPZDA__STRUCT_H_
#define NMEA_MSGS__MSG__DETAIL__GPZDA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'message_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Gpzda in the package nmea_msgs.
/**
  * Message from GPRMC NMEA String
 */
typedef struct nmea_msgs__msg__Gpzda
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String message_id;
  uint32_t utc_seconds;
  uint8_t day;
  uint8_t month;
  uint16_t year;
  /// Local time zone offset from GMT (0 to +/-13 hr)
  int8_t hour_offset_gmt;
  /// Local time zone offset from GMT (0 to 59 minutes)
  uint8_t minute_offset_gmt;
} nmea_msgs__msg__Gpzda;

// Struct for a sequence of nmea_msgs__msg__Gpzda.
typedef struct nmea_msgs__msg__Gpzda__Sequence
{
  nmea_msgs__msg__Gpzda * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nmea_msgs__msg__Gpzda__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NMEA_MSGS__MSG__DETAIL__GPZDA__STRUCT_H_
