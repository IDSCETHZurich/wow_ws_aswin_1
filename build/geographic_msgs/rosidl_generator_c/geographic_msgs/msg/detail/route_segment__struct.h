// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geographic_msgs:msg/RouteSegment.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_SEGMENT__STRUCT_H_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_SEGMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'id'
// Member 'start'
// Member 'end'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'props'
#include "geographic_msgs/msg/detail/key_value__struct.h"

/// Struct defined in msg/RouteSegment in the package geographic_msgs.
/**
  * Route network segment.
  *
  * This is one directed edge of a RouteNetwork graph. It represents a
  * known path from one way point to another.  If the path is two-way,
  * there will be another RouteSegment with "start" and "end" reversed.
 */
typedef struct geographic_msgs__msg__RouteSegment
{
  /// Unique identifier for this segment
  unique_identifier_msgs__msg__UUID id;
  /// beginning way point of segment
  unique_identifier_msgs__msg__UUID start;
  /// ending way point of segment
  unique_identifier_msgs__msg__UUID end;
  /// segment properties
  geographic_msgs__msg__KeyValue__Sequence props;
} geographic_msgs__msg__RouteSegment;

// Struct for a sequence of geographic_msgs__msg__RouteSegment.
typedef struct geographic_msgs__msg__RouteSegment__Sequence
{
  geographic_msgs__msg__RouteSegment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geographic_msgs__msg__RouteSegment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_SEGMENT__STRUCT_H_
