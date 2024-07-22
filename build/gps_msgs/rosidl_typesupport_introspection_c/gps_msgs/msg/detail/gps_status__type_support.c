// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gps_msgs:msg/GPSStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gps_msgs/msg/detail/gps_status__rosidl_typesupport_introspection_c.h"
#include "gps_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gps_msgs/msg/detail/gps_status__functions.h"
#include "gps_msgs/msg/detail/gps_status__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `satellite_used_prn`
// Member `satellite_visible_prn`
// Member `satellite_visible_z`
// Member `satellite_visible_azimuth`
// Member `satellite_visible_snr`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__GPSStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gps_msgs__msg__GPSStatus__init(message_memory);
}

void gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__GPSStatus_fini_function(void * message_memory)
{
  gps_msgs__msg__GPSStatus__fini(message_memory);
}

size_t gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__size_function__GPSStatus__satellite_used_prn(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__get_const_function__GPSStatus__satellite_used_prn(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__get_function__GPSStatus__satellite_used_prn(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__fetch_function__GPSStatus__satellite_used_prn(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__get_const_function__GPSStatus__satellite_used_prn(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__assign_function__GPSStatus__satellite_used_prn(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__get_function__GPSStatus__satellite_used_prn(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__resize_function__GPSStatus__satellite_used_prn(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__size_function__GPSStatus__satellite_visible_prn(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__get_const_function__GPSStatus__satellite_visible_prn(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__get_function__GPSStatus__satellite_visible_prn(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__fetch_function__GPSStatus__satellite_visible_prn(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__get_const_function__GPSStatus__satellite_visible_prn(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__assign_function__GPSStatus__satellite_visible_prn(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__get_function__GPSStatus__satellite_visible_prn(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__resize_function__GPSStatus__satellite_visible_prn(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__size_function__GPSStatus__satellite_visible_z(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__get_const_function__GPSStatus__satellite_visible_z(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__get_function__GPSStatus__satellite_visible_z(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__fetch_function__GPSStatus__satellite_visible_z(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__get_const_function__GPSStatus__satellite_visible_z(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__assign_function__GPSStatus__satellite_visible_z(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__get_function__GPSStatus__satellite_visible_z(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__resize_function__GPSStatus__satellite_visible_z(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__size_function__GPSStatus__satellite_visible_azimuth(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__get_const_function__GPSStatus__satellite_visible_azimuth(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__get_function__GPSStatus__satellite_visible_azimuth(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__fetch_function__GPSStatus__satellite_visible_azimuth(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__get_const_function__GPSStatus__satellite_visible_azimuth(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__assign_function__GPSStatus__satellite_visible_azimuth(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__get_function__GPSStatus__satellite_visible_azimuth(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__resize_function__GPSStatus__satellite_visible_azimuth(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__size_function__GPSStatus__satellite_visible_snr(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__get_const_function__GPSStatus__satellite_visible_snr(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__get_function__GPSStatus__satellite_visible_snr(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__fetch_function__GPSStatus__satellite_visible_snr(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__get_const_function__GPSStatus__satellite_visible_snr(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__assign_function__GPSStatus__satellite_visible_snr(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__get_function__GPSStatus__satellite_visible_snr(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__resize_function__GPSStatus__satellite_visible_snr(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__GPSStatus_message_member_array[12] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_msgs__msg__GPSStatus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "satellites_used",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_msgs__msg__GPSStatus, satellites_used),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "satellite_used_prn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_msgs__msg__GPSStatus, satellite_used_prn),  // bytes offset in struct
    NULL,  // default value
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__size_function__GPSStatus__satellite_used_prn,  // size() function pointer
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__get_const_function__GPSStatus__satellite_used_prn,  // get_const(index) function pointer
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__get_function__GPSStatus__satellite_used_prn,  // get(index) function pointer
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__fetch_function__GPSStatus__satellite_used_prn,  // fetch(index, &value) function pointer
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__assign_function__GPSStatus__satellite_used_prn,  // assign(index, value) function pointer
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__resize_function__GPSStatus__satellite_used_prn  // resize(index) function pointer
  },
  {
    "satellites_visible",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_msgs__msg__GPSStatus, satellites_visible),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "satellite_visible_prn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_msgs__msg__GPSStatus, satellite_visible_prn),  // bytes offset in struct
    NULL,  // default value
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__size_function__GPSStatus__satellite_visible_prn,  // size() function pointer
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__get_const_function__GPSStatus__satellite_visible_prn,  // get_const(index) function pointer
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__get_function__GPSStatus__satellite_visible_prn,  // get(index) function pointer
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__fetch_function__GPSStatus__satellite_visible_prn,  // fetch(index, &value) function pointer
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__assign_function__GPSStatus__satellite_visible_prn,  // assign(index, value) function pointer
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__resize_function__GPSStatus__satellite_visible_prn  // resize(index) function pointer
  },
  {
    "satellite_visible_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_msgs__msg__GPSStatus, satellite_visible_z),  // bytes offset in struct
    NULL,  // default value
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__size_function__GPSStatus__satellite_visible_z,  // size() function pointer
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__get_const_function__GPSStatus__satellite_visible_z,  // get_const(index) function pointer
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__get_function__GPSStatus__satellite_visible_z,  // get(index) function pointer
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__fetch_function__GPSStatus__satellite_visible_z,  // fetch(index, &value) function pointer
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__assign_function__GPSStatus__satellite_visible_z,  // assign(index, value) function pointer
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__resize_function__GPSStatus__satellite_visible_z  // resize(index) function pointer
  },
  {
    "satellite_visible_azimuth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_msgs__msg__GPSStatus, satellite_visible_azimuth),  // bytes offset in struct
    NULL,  // default value
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__size_function__GPSStatus__satellite_visible_azimuth,  // size() function pointer
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__get_const_function__GPSStatus__satellite_visible_azimuth,  // get_const(index) function pointer
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__get_function__GPSStatus__satellite_visible_azimuth,  // get(index) function pointer
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__fetch_function__GPSStatus__satellite_visible_azimuth,  // fetch(index, &value) function pointer
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__assign_function__GPSStatus__satellite_visible_azimuth,  // assign(index, value) function pointer
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__resize_function__GPSStatus__satellite_visible_azimuth  // resize(index) function pointer
  },
  {
    "satellite_visible_snr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_msgs__msg__GPSStatus, satellite_visible_snr),  // bytes offset in struct
    NULL,  // default value
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__size_function__GPSStatus__satellite_visible_snr,  // size() function pointer
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__get_const_function__GPSStatus__satellite_visible_snr,  // get_const(index) function pointer
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__get_function__GPSStatus__satellite_visible_snr,  // get(index) function pointer
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__fetch_function__GPSStatus__satellite_visible_snr,  // fetch(index, &value) function pointer
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__assign_function__GPSStatus__satellite_visible_snr,  // assign(index, value) function pointer
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__resize_function__GPSStatus__satellite_visible_snr  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_msgs__msg__GPSStatus, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motion_source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_msgs__msg__GPSStatus, motion_source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation_source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_msgs__msg__GPSStatus, orientation_source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_msgs__msg__GPSStatus, position_source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__GPSStatus_message_members = {
  "gps_msgs__msg",  // message namespace
  "GPSStatus",  // message name
  12,  // number of fields
  sizeof(gps_msgs__msg__GPSStatus),
  gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__GPSStatus_message_member_array,  // message members
  gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__GPSStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__GPSStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__GPSStatus_message_type_support_handle = {
  0,
  &gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__GPSStatus_message_members,
  get_message_typesupport_handle_function,
  &gps_msgs__msg__GPSStatus__get_type_hash,
  &gps_msgs__msg__GPSStatus__get_type_description,
  &gps_msgs__msg__GPSStatus__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gps_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps_msgs, msg, GPSStatus)() {
  gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__GPSStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__GPSStatus_message_type_support_handle.typesupport_identifier) {
    gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__GPSStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gps_msgs__msg__GPSStatus__rosidl_typesupport_introspection_c__GPSStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
