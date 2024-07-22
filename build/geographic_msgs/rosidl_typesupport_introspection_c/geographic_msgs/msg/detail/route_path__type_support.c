// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from geographic_msgs:msg/RoutePath.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "geographic_msgs/msg/detail/route_path__rosidl_typesupport_introspection_c.h"
#include "geographic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "geographic_msgs/msg/detail/route_path__functions.h"
#include "geographic_msgs/msg/detail/route_path__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `network`
// Member `segments`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `network`
// Member `segments`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `props`
#include "geographic_msgs/msg/key_value.h"
// Member `props`
#include "geographic_msgs/msg/detail/key_value__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__RoutePath_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  geographic_msgs__msg__RoutePath__init(message_memory);
}

void geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__RoutePath_fini_function(void * message_memory)
{
  geographic_msgs__msg__RoutePath__fini(message_memory);
}

size_t geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__size_function__RoutePath__segments(
  const void * untyped_member)
{
  const unique_identifier_msgs__msg__UUID__Sequence * member =
    (const unique_identifier_msgs__msg__UUID__Sequence *)(untyped_member);
  return member->size;
}

const void * geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__get_const_function__RoutePath__segments(
  const void * untyped_member, size_t index)
{
  const unique_identifier_msgs__msg__UUID__Sequence * member =
    (const unique_identifier_msgs__msg__UUID__Sequence *)(untyped_member);
  return &member->data[index];
}

void * geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__get_function__RoutePath__segments(
  void * untyped_member, size_t index)
{
  unique_identifier_msgs__msg__UUID__Sequence * member =
    (unique_identifier_msgs__msg__UUID__Sequence *)(untyped_member);
  return &member->data[index];
}

void geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__fetch_function__RoutePath__segments(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const unique_identifier_msgs__msg__UUID * item =
    ((const unique_identifier_msgs__msg__UUID *)
    geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__get_const_function__RoutePath__segments(untyped_member, index));
  unique_identifier_msgs__msg__UUID * value =
    (unique_identifier_msgs__msg__UUID *)(untyped_value);
  *value = *item;
}

void geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__assign_function__RoutePath__segments(
  void * untyped_member, size_t index, const void * untyped_value)
{
  unique_identifier_msgs__msg__UUID * item =
    ((unique_identifier_msgs__msg__UUID *)
    geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__get_function__RoutePath__segments(untyped_member, index));
  const unique_identifier_msgs__msg__UUID * value =
    (const unique_identifier_msgs__msg__UUID *)(untyped_value);
  *item = *value;
}

bool geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__resize_function__RoutePath__segments(
  void * untyped_member, size_t size)
{
  unique_identifier_msgs__msg__UUID__Sequence * member =
    (unique_identifier_msgs__msg__UUID__Sequence *)(untyped_member);
  unique_identifier_msgs__msg__UUID__Sequence__fini(member);
  return unique_identifier_msgs__msg__UUID__Sequence__init(member, size);
}

size_t geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__size_function__RoutePath__props(
  const void * untyped_member)
{
  const geographic_msgs__msg__KeyValue__Sequence * member =
    (const geographic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return member->size;
}

const void * geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__get_const_function__RoutePath__props(
  const void * untyped_member, size_t index)
{
  const geographic_msgs__msg__KeyValue__Sequence * member =
    (const geographic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void * geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__get_function__RoutePath__props(
  void * untyped_member, size_t index)
{
  geographic_msgs__msg__KeyValue__Sequence * member =
    (geographic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__fetch_function__RoutePath__props(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geographic_msgs__msg__KeyValue * item =
    ((const geographic_msgs__msg__KeyValue *)
    geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__get_const_function__RoutePath__props(untyped_member, index));
  geographic_msgs__msg__KeyValue * value =
    (geographic_msgs__msg__KeyValue *)(untyped_value);
  *value = *item;
}

void geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__assign_function__RoutePath__props(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geographic_msgs__msg__KeyValue * item =
    ((geographic_msgs__msg__KeyValue *)
    geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__get_function__RoutePath__props(untyped_member, index));
  const geographic_msgs__msg__KeyValue * value =
    (const geographic_msgs__msg__KeyValue *)(untyped_value);
  *item = *value;
}

bool geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__resize_function__RoutePath__props(
  void * untyped_member, size_t size)
{
  geographic_msgs__msg__KeyValue__Sequence * member =
    (geographic_msgs__msg__KeyValue__Sequence *)(untyped_member);
  geographic_msgs__msg__KeyValue__Sequence__fini(member);
  return geographic_msgs__msg__KeyValue__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__RoutePath_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__msg__RoutePath, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "network",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__msg__RoutePath, network),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "segments",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__msg__RoutePath, segments),  // bytes offset in struct
    NULL,  // default value
    geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__size_function__RoutePath__segments,  // size() function pointer
    geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__get_const_function__RoutePath__segments,  // get_const(index) function pointer
    geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__get_function__RoutePath__segments,  // get(index) function pointer
    geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__fetch_function__RoutePath__segments,  // fetch(index, &value) function pointer
    geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__assign_function__RoutePath__segments,  // assign(index, value) function pointer
    geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__resize_function__RoutePath__segments  // resize(index) function pointer
  },
  {
    "props",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__msg__RoutePath, props),  // bytes offset in struct
    NULL,  // default value
    geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__size_function__RoutePath__props,  // size() function pointer
    geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__get_const_function__RoutePath__props,  // get_const(index) function pointer
    geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__get_function__RoutePath__props,  // get(index) function pointer
    geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__fetch_function__RoutePath__props,  // fetch(index, &value) function pointer
    geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__assign_function__RoutePath__props,  // assign(index, value) function pointer
    geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__resize_function__RoutePath__props  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__RoutePath_message_members = {
  "geographic_msgs__msg",  // message namespace
  "RoutePath",  // message name
  4,  // number of fields
  sizeof(geographic_msgs__msg__RoutePath),
  geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__RoutePath_message_member_array,  // message members
  geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__RoutePath_init_function,  // function to initialize message memory (memory has to be allocated)
  geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__RoutePath_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__RoutePath_message_type_support_handle = {
  0,
  &geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__RoutePath_message_members,
  get_message_typesupport_handle_function,
  &geographic_msgs__msg__RoutePath__get_type_hash,
  &geographic_msgs__msg__RoutePath__get_type_description,
  &geographic_msgs__msg__RoutePath__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geographic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, RoutePath)() {
  geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__RoutePath_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__RoutePath_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__RoutePath_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__RoutePath_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, KeyValue)();
  if (!geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__RoutePath_message_type_support_handle.typesupport_identifier) {
    geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__RoutePath_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &geographic_msgs__msg__RoutePath__rosidl_typesupport_introspection_c__RoutePath_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
