// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from geographic_msgs:msg/GeoPose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "geographic_msgs/msg/detail/geo_pose__rosidl_typesupport_introspection_c.h"
#include "geographic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "geographic_msgs/msg/detail/geo_pose__functions.h"
#include "geographic_msgs/msg/detail/geo_pose__struct.h"


// Include directives for member types
// Member `position`
#include "geographic_msgs/msg/geo_point.h"
// Member `position`
#include "geographic_msgs/msg/detail/geo_point__rosidl_typesupport_introspection_c.h"
// Member `orientation`
#include "geometry_msgs/msg/quaternion.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void geographic_msgs__msg__GeoPose__rosidl_typesupport_introspection_c__GeoPose_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  geographic_msgs__msg__GeoPose__init(message_memory);
}

void geographic_msgs__msg__GeoPose__rosidl_typesupport_introspection_c__GeoPose_fini_function(void * message_memory)
{
  geographic_msgs__msg__GeoPose__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember geographic_msgs__msg__GeoPose__rosidl_typesupport_introspection_c__GeoPose_message_member_array[2] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__msg__GeoPose, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__msg__GeoPose, orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers geographic_msgs__msg__GeoPose__rosidl_typesupport_introspection_c__GeoPose_message_members = {
  "geographic_msgs__msg",  // message namespace
  "GeoPose",  // message name
  2,  // number of fields
  sizeof(geographic_msgs__msg__GeoPose),
  geographic_msgs__msg__GeoPose__rosidl_typesupport_introspection_c__GeoPose_message_member_array,  // message members
  geographic_msgs__msg__GeoPose__rosidl_typesupport_introspection_c__GeoPose_init_function,  // function to initialize message memory (memory has to be allocated)
  geographic_msgs__msg__GeoPose__rosidl_typesupport_introspection_c__GeoPose_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t geographic_msgs__msg__GeoPose__rosidl_typesupport_introspection_c__GeoPose_message_type_support_handle = {
  0,
  &geographic_msgs__msg__GeoPose__rosidl_typesupport_introspection_c__GeoPose_message_members,
  get_message_typesupport_handle_function,
  &geographic_msgs__msg__GeoPose__get_type_hash,
  &geographic_msgs__msg__GeoPose__get_type_description,
  &geographic_msgs__msg__GeoPose__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geographic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, GeoPose)() {
  geographic_msgs__msg__GeoPose__rosidl_typesupport_introspection_c__GeoPose_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, GeoPoint)();
  geographic_msgs__msg__GeoPose__rosidl_typesupport_introspection_c__GeoPose_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  if (!geographic_msgs__msg__GeoPose__rosidl_typesupport_introspection_c__GeoPose_message_type_support_handle.typesupport_identifier) {
    geographic_msgs__msg__GeoPose__rosidl_typesupport_introspection_c__GeoPose_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &geographic_msgs__msg__GeoPose__rosidl_typesupport_introspection_c__GeoPose_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
