// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from geographic_msgs:msg/GeoPoseWithCovariance.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "geographic_msgs/msg/detail/geo_pose_with_covariance__rosidl_typesupport_introspection_c.h"
#include "geographic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "geographic_msgs/msg/detail/geo_pose_with_covariance__functions.h"
#include "geographic_msgs/msg/detail/geo_pose_with_covariance__struct.h"


// Include directives for member types
// Member `pose`
#include "geographic_msgs/msg/geo_pose.h"
// Member `pose`
#include "geographic_msgs/msg/detail/geo_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void geographic_msgs__msg__GeoPoseWithCovariance__rosidl_typesupport_introspection_c__GeoPoseWithCovariance_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  geographic_msgs__msg__GeoPoseWithCovariance__init(message_memory);
}

void geographic_msgs__msg__GeoPoseWithCovariance__rosidl_typesupport_introspection_c__GeoPoseWithCovariance_fini_function(void * message_memory)
{
  geographic_msgs__msg__GeoPoseWithCovariance__fini(message_memory);
}

size_t geographic_msgs__msg__GeoPoseWithCovariance__rosidl_typesupport_introspection_c__size_function__GeoPoseWithCovariance__covariance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 36;
}

const void * geographic_msgs__msg__GeoPoseWithCovariance__rosidl_typesupport_introspection_c__get_const_function__GeoPoseWithCovariance__covariance(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * geographic_msgs__msg__GeoPoseWithCovariance__rosidl_typesupport_introspection_c__get_function__GeoPoseWithCovariance__covariance(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void geographic_msgs__msg__GeoPoseWithCovariance__rosidl_typesupport_introspection_c__fetch_function__GeoPoseWithCovariance__covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    geographic_msgs__msg__GeoPoseWithCovariance__rosidl_typesupport_introspection_c__get_const_function__GeoPoseWithCovariance__covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void geographic_msgs__msg__GeoPoseWithCovariance__rosidl_typesupport_introspection_c__assign_function__GeoPoseWithCovariance__covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    geographic_msgs__msg__GeoPoseWithCovariance__rosidl_typesupport_introspection_c__get_function__GeoPoseWithCovariance__covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember geographic_msgs__msg__GeoPoseWithCovariance__rosidl_typesupport_introspection_c__GeoPoseWithCovariance_message_member_array[2] = {
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__msg__GeoPoseWithCovariance, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    36,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__msg__GeoPoseWithCovariance, covariance),  // bytes offset in struct
    NULL,  // default value
    geographic_msgs__msg__GeoPoseWithCovariance__rosidl_typesupport_introspection_c__size_function__GeoPoseWithCovariance__covariance,  // size() function pointer
    geographic_msgs__msg__GeoPoseWithCovariance__rosidl_typesupport_introspection_c__get_const_function__GeoPoseWithCovariance__covariance,  // get_const(index) function pointer
    geographic_msgs__msg__GeoPoseWithCovariance__rosidl_typesupport_introspection_c__get_function__GeoPoseWithCovariance__covariance,  // get(index) function pointer
    geographic_msgs__msg__GeoPoseWithCovariance__rosidl_typesupport_introspection_c__fetch_function__GeoPoseWithCovariance__covariance,  // fetch(index, &value) function pointer
    geographic_msgs__msg__GeoPoseWithCovariance__rosidl_typesupport_introspection_c__assign_function__GeoPoseWithCovariance__covariance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers geographic_msgs__msg__GeoPoseWithCovariance__rosidl_typesupport_introspection_c__GeoPoseWithCovariance_message_members = {
  "geographic_msgs__msg",  // message namespace
  "GeoPoseWithCovariance",  // message name
  2,  // number of fields
  sizeof(geographic_msgs__msg__GeoPoseWithCovariance),
  geographic_msgs__msg__GeoPoseWithCovariance__rosidl_typesupport_introspection_c__GeoPoseWithCovariance_message_member_array,  // message members
  geographic_msgs__msg__GeoPoseWithCovariance__rosidl_typesupport_introspection_c__GeoPoseWithCovariance_init_function,  // function to initialize message memory (memory has to be allocated)
  geographic_msgs__msg__GeoPoseWithCovariance__rosidl_typesupport_introspection_c__GeoPoseWithCovariance_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t geographic_msgs__msg__GeoPoseWithCovariance__rosidl_typesupport_introspection_c__GeoPoseWithCovariance_message_type_support_handle = {
  0,
  &geographic_msgs__msg__GeoPoseWithCovariance__rosidl_typesupport_introspection_c__GeoPoseWithCovariance_message_members,
  get_message_typesupport_handle_function,
  &geographic_msgs__msg__GeoPoseWithCovariance__get_type_hash,
  &geographic_msgs__msg__GeoPoseWithCovariance__get_type_description,
  &geographic_msgs__msg__GeoPoseWithCovariance__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geographic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, GeoPoseWithCovariance)() {
  geographic_msgs__msg__GeoPoseWithCovariance__rosidl_typesupport_introspection_c__GeoPoseWithCovariance_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, GeoPose)();
  if (!geographic_msgs__msg__GeoPoseWithCovariance__rosidl_typesupport_introspection_c__GeoPoseWithCovariance_message_type_support_handle.typesupport_identifier) {
    geographic_msgs__msg__GeoPoseWithCovariance__rosidl_typesupport_introspection_c__GeoPoseWithCovariance_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &geographic_msgs__msg__GeoPoseWithCovariance__rosidl_typesupport_introspection_c__GeoPoseWithCovariance_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
