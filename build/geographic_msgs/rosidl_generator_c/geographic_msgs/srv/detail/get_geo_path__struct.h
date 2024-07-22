// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geographic_msgs:srv/GetGeoPath.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__SRV__DETAIL__GET_GEO_PATH__STRUCT_H_
#define GEOGRAPHIC_MSGS__SRV__DETAIL__GET_GEO_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'start'
// Member 'goal'
#include "geographic_msgs/msg/detail/geo_point__struct.h"

/// Struct defined in srv/GetGeoPath in the package geographic_msgs.
typedef struct geographic_msgs__srv__GetGeoPath_Request
{
  /// starting point
  geographic_msgs__msg__GeoPoint start;
  /// goal point
  geographic_msgs__msg__GeoPoint goal;
} geographic_msgs__srv__GetGeoPath_Request;

// Struct for a sequence of geographic_msgs__srv__GetGeoPath_Request.
typedef struct geographic_msgs__srv__GetGeoPath_Request__Sequence
{
  geographic_msgs__srv__GetGeoPath_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geographic_msgs__srv__GetGeoPath_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"
// Member 'plan'
#include "geographic_msgs/msg/detail/geo_path__struct.h"
// Member 'network'
// Member 'start_seg'
// Member 'goal_seg'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in srv/GetGeoPath in the package geographic_msgs.
typedef struct geographic_msgs__srv__GetGeoPath_Response
{
  /// true if the call succeeded
  bool success;
  /// more details
  rosidl_runtime_c__String status;
  /// path to follow
  geographic_msgs__msg__GeoPath plan;
  /// the uuid of the RouteNetwork
  unique_identifier_msgs__msg__UUID network;
  /// the uuid of the starting RouteSegment
  unique_identifier_msgs__msg__UUID start_seg;
  /// the uuid of the ending RouteSegment
  unique_identifier_msgs__msg__UUID goal_seg;
  /// the length of the plan
  double distance;
} geographic_msgs__srv__GetGeoPath_Response;

// Struct for a sequence of geographic_msgs__srv__GetGeoPath_Response.
typedef struct geographic_msgs__srv__GetGeoPath_Response__Sequence
{
  geographic_msgs__srv__GetGeoPath_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geographic_msgs__srv__GetGeoPath_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  geographic_msgs__srv__GetGeoPath_Event__request__MAX_SIZE = 1
};
// response
enum
{
  geographic_msgs__srv__GetGeoPath_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetGeoPath in the package geographic_msgs.
typedef struct geographic_msgs__srv__GetGeoPath_Event
{
  service_msgs__msg__ServiceEventInfo info;
  geographic_msgs__srv__GetGeoPath_Request__Sequence request;
  geographic_msgs__srv__GetGeoPath_Response__Sequence response;
} geographic_msgs__srv__GetGeoPath_Event;

// Struct for a sequence of geographic_msgs__srv__GetGeoPath_Event.
typedef struct geographic_msgs__srv__GetGeoPath_Event__Sequence
{
  geographic_msgs__srv__GetGeoPath_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geographic_msgs__srv__GetGeoPath_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOGRAPHIC_MSGS__SRV__DETAIL__GET_GEO_PATH__STRUCT_H_
