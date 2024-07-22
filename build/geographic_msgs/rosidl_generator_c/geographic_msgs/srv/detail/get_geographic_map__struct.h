// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geographic_msgs:srv/GetGeographicMap.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__SRV__DETAIL__GET_GEOGRAPHIC_MAP__STRUCT_H_
#define GEOGRAPHIC_MSGS__SRV__DETAIL__GET_GEOGRAPHIC_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'url'
#include "rosidl_runtime_c/string.h"
// Member 'bounds'
#include "geographic_msgs/msg/detail/bounding_box__struct.h"

/// Struct defined in srv/GetGeographicMap in the package geographic_msgs.
typedef struct geographic_msgs__srv__GetGeographicMap_Request
{
  /// where to read map data
  rosidl_runtime_c__String url;
  /// Bounding box for the desired map.  If all zeros, provide all data
  /// available from the specified URL.
  geographic_msgs__msg__BoundingBox bounds;
} geographic_msgs__srv__GetGeographicMap_Request;

// Struct for a sequence of geographic_msgs__srv__GetGeographicMap_Request.
typedef struct geographic_msgs__srv__GetGeographicMap_Request__Sequence
{
  geographic_msgs__srv__GetGeographicMap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geographic_msgs__srv__GetGeographicMap_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'map'
#include "geographic_msgs/msg/detail/geographic_map__struct.h"

/// Struct defined in srv/GetGeographicMap in the package geographic_msgs.
typedef struct geographic_msgs__srv__GetGeographicMap_Response
{
  /// true if the call succeeded
  bool success;
  /// more details
  rosidl_runtime_c__String status;
  /// The requested map, its bounds may differ from the requested bounds.
  geographic_msgs__msg__GeographicMap map;
} geographic_msgs__srv__GetGeographicMap_Response;

// Struct for a sequence of geographic_msgs__srv__GetGeographicMap_Response.
typedef struct geographic_msgs__srv__GetGeographicMap_Response__Sequence
{
  geographic_msgs__srv__GetGeographicMap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geographic_msgs__srv__GetGeographicMap_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  geographic_msgs__srv__GetGeographicMap_Event__request__MAX_SIZE = 1
};
// response
enum
{
  geographic_msgs__srv__GetGeographicMap_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetGeographicMap in the package geographic_msgs.
typedef struct geographic_msgs__srv__GetGeographicMap_Event
{
  service_msgs__msg__ServiceEventInfo info;
  geographic_msgs__srv__GetGeographicMap_Request__Sequence request;
  geographic_msgs__srv__GetGeographicMap_Response__Sequence response;
} geographic_msgs__srv__GetGeographicMap_Event;

// Struct for a sequence of geographic_msgs__srv__GetGeographicMap_Event.
typedef struct geographic_msgs__srv__GetGeographicMap_Event__Sequence
{
  geographic_msgs__srv__GetGeographicMap_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geographic_msgs__srv__GetGeographicMap_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOGRAPHIC_MSGS__SRV__DETAIL__GET_GEOGRAPHIC_MAP__STRUCT_H_
