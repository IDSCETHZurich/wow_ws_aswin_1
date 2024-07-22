// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from geographic_msgs:srv/UpdateGeographicMap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "geographic_msgs/srv/detail/update_geographic_map__rosidl_typesupport_introspection_c.h"
#include "geographic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "geographic_msgs/srv/detail/update_geographic_map__functions.h"
#include "geographic_msgs/srv/detail/update_geographic_map__struct.h"


// Include directives for member types
// Member `updates`
#include "geographic_msgs/msg/geographic_map_changes.h"
// Member `updates`
#include "geographic_msgs/msg/detail/geographic_map_changes__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void geographic_msgs__srv__UpdateGeographicMap_Request__rosidl_typesupport_introspection_c__UpdateGeographicMap_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  geographic_msgs__srv__UpdateGeographicMap_Request__init(message_memory);
}

void geographic_msgs__srv__UpdateGeographicMap_Request__rosidl_typesupport_introspection_c__UpdateGeographicMap_Request_fini_function(void * message_memory)
{
  geographic_msgs__srv__UpdateGeographicMap_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember geographic_msgs__srv__UpdateGeographicMap_Request__rosidl_typesupport_introspection_c__UpdateGeographicMap_Request_message_member_array[1] = {
  {
    "updates",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__srv__UpdateGeographicMap_Request, updates),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers geographic_msgs__srv__UpdateGeographicMap_Request__rosidl_typesupport_introspection_c__UpdateGeographicMap_Request_message_members = {
  "geographic_msgs__srv",  // message namespace
  "UpdateGeographicMap_Request",  // message name
  1,  // number of fields
  sizeof(geographic_msgs__srv__UpdateGeographicMap_Request),
  geographic_msgs__srv__UpdateGeographicMap_Request__rosidl_typesupport_introspection_c__UpdateGeographicMap_Request_message_member_array,  // message members
  geographic_msgs__srv__UpdateGeographicMap_Request__rosidl_typesupport_introspection_c__UpdateGeographicMap_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  geographic_msgs__srv__UpdateGeographicMap_Request__rosidl_typesupport_introspection_c__UpdateGeographicMap_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t geographic_msgs__srv__UpdateGeographicMap_Request__rosidl_typesupport_introspection_c__UpdateGeographicMap_Request_message_type_support_handle = {
  0,
  &geographic_msgs__srv__UpdateGeographicMap_Request__rosidl_typesupport_introspection_c__UpdateGeographicMap_Request_message_members,
  get_message_typesupport_handle_function,
  &geographic_msgs__srv__UpdateGeographicMap_Request__get_type_hash,
  &geographic_msgs__srv__UpdateGeographicMap_Request__get_type_description,
  &geographic_msgs__srv__UpdateGeographicMap_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geographic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, UpdateGeographicMap_Request)() {
  geographic_msgs__srv__UpdateGeographicMap_Request__rosidl_typesupport_introspection_c__UpdateGeographicMap_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, GeographicMapChanges)();
  if (!geographic_msgs__srv__UpdateGeographicMap_Request__rosidl_typesupport_introspection_c__UpdateGeographicMap_Request_message_type_support_handle.typesupport_identifier) {
    geographic_msgs__srv__UpdateGeographicMap_Request__rosidl_typesupport_introspection_c__UpdateGeographicMap_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &geographic_msgs__srv__UpdateGeographicMap_Request__rosidl_typesupport_introspection_c__UpdateGeographicMap_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "geographic_msgs/srv/detail/update_geographic_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "geographic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "geographic_msgs/srv/detail/update_geographic_map__functions.h"
// already included above
// #include "geographic_msgs/srv/detail/update_geographic_map__struct.h"


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void geographic_msgs__srv__UpdateGeographicMap_Response__rosidl_typesupport_introspection_c__UpdateGeographicMap_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  geographic_msgs__srv__UpdateGeographicMap_Response__init(message_memory);
}

void geographic_msgs__srv__UpdateGeographicMap_Response__rosidl_typesupport_introspection_c__UpdateGeographicMap_Response_fini_function(void * message_memory)
{
  geographic_msgs__srv__UpdateGeographicMap_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember geographic_msgs__srv__UpdateGeographicMap_Response__rosidl_typesupport_introspection_c__UpdateGeographicMap_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__srv__UpdateGeographicMap_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__srv__UpdateGeographicMap_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers geographic_msgs__srv__UpdateGeographicMap_Response__rosidl_typesupport_introspection_c__UpdateGeographicMap_Response_message_members = {
  "geographic_msgs__srv",  // message namespace
  "UpdateGeographicMap_Response",  // message name
  2,  // number of fields
  sizeof(geographic_msgs__srv__UpdateGeographicMap_Response),
  geographic_msgs__srv__UpdateGeographicMap_Response__rosidl_typesupport_introspection_c__UpdateGeographicMap_Response_message_member_array,  // message members
  geographic_msgs__srv__UpdateGeographicMap_Response__rosidl_typesupport_introspection_c__UpdateGeographicMap_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  geographic_msgs__srv__UpdateGeographicMap_Response__rosidl_typesupport_introspection_c__UpdateGeographicMap_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t geographic_msgs__srv__UpdateGeographicMap_Response__rosidl_typesupport_introspection_c__UpdateGeographicMap_Response_message_type_support_handle = {
  0,
  &geographic_msgs__srv__UpdateGeographicMap_Response__rosidl_typesupport_introspection_c__UpdateGeographicMap_Response_message_members,
  get_message_typesupport_handle_function,
  &geographic_msgs__srv__UpdateGeographicMap_Response__get_type_hash,
  &geographic_msgs__srv__UpdateGeographicMap_Response__get_type_description,
  &geographic_msgs__srv__UpdateGeographicMap_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geographic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, UpdateGeographicMap_Response)() {
  if (!geographic_msgs__srv__UpdateGeographicMap_Response__rosidl_typesupport_introspection_c__UpdateGeographicMap_Response_message_type_support_handle.typesupport_identifier) {
    geographic_msgs__srv__UpdateGeographicMap_Response__rosidl_typesupport_introspection_c__UpdateGeographicMap_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &geographic_msgs__srv__UpdateGeographicMap_Response__rosidl_typesupport_introspection_c__UpdateGeographicMap_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "geographic_msgs/srv/detail/update_geographic_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "geographic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "geographic_msgs/srv/detail/update_geographic_map__functions.h"
// already included above
// #include "geographic_msgs/srv/detail/update_geographic_map__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "geographic_msgs/srv/update_geographic_map.h"
// Member `request`
// Member `response`
// already included above
// #include "geographic_msgs/srv/detail/update_geographic_map__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__UpdateGeographicMap_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  geographic_msgs__srv__UpdateGeographicMap_Event__init(message_memory);
}

void geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__UpdateGeographicMap_Event_fini_function(void * message_memory)
{
  geographic_msgs__srv__UpdateGeographicMap_Event__fini(message_memory);
}

size_t geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__size_function__UpdateGeographicMap_Event__request(
  const void * untyped_member)
{
  const geographic_msgs__srv__UpdateGeographicMap_Request__Sequence * member =
    (const geographic_msgs__srv__UpdateGeographicMap_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__get_const_function__UpdateGeographicMap_Event__request(
  const void * untyped_member, size_t index)
{
  const geographic_msgs__srv__UpdateGeographicMap_Request__Sequence * member =
    (const geographic_msgs__srv__UpdateGeographicMap_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__get_function__UpdateGeographicMap_Event__request(
  void * untyped_member, size_t index)
{
  geographic_msgs__srv__UpdateGeographicMap_Request__Sequence * member =
    (geographic_msgs__srv__UpdateGeographicMap_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__fetch_function__UpdateGeographicMap_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geographic_msgs__srv__UpdateGeographicMap_Request * item =
    ((const geographic_msgs__srv__UpdateGeographicMap_Request *)
    geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__get_const_function__UpdateGeographicMap_Event__request(untyped_member, index));
  geographic_msgs__srv__UpdateGeographicMap_Request * value =
    (geographic_msgs__srv__UpdateGeographicMap_Request *)(untyped_value);
  *value = *item;
}

void geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__assign_function__UpdateGeographicMap_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geographic_msgs__srv__UpdateGeographicMap_Request * item =
    ((geographic_msgs__srv__UpdateGeographicMap_Request *)
    geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__get_function__UpdateGeographicMap_Event__request(untyped_member, index));
  const geographic_msgs__srv__UpdateGeographicMap_Request * value =
    (const geographic_msgs__srv__UpdateGeographicMap_Request *)(untyped_value);
  *item = *value;
}

bool geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__resize_function__UpdateGeographicMap_Event__request(
  void * untyped_member, size_t size)
{
  geographic_msgs__srv__UpdateGeographicMap_Request__Sequence * member =
    (geographic_msgs__srv__UpdateGeographicMap_Request__Sequence *)(untyped_member);
  geographic_msgs__srv__UpdateGeographicMap_Request__Sequence__fini(member);
  return geographic_msgs__srv__UpdateGeographicMap_Request__Sequence__init(member, size);
}

size_t geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__size_function__UpdateGeographicMap_Event__response(
  const void * untyped_member)
{
  const geographic_msgs__srv__UpdateGeographicMap_Response__Sequence * member =
    (const geographic_msgs__srv__UpdateGeographicMap_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__get_const_function__UpdateGeographicMap_Event__response(
  const void * untyped_member, size_t index)
{
  const geographic_msgs__srv__UpdateGeographicMap_Response__Sequence * member =
    (const geographic_msgs__srv__UpdateGeographicMap_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__get_function__UpdateGeographicMap_Event__response(
  void * untyped_member, size_t index)
{
  geographic_msgs__srv__UpdateGeographicMap_Response__Sequence * member =
    (geographic_msgs__srv__UpdateGeographicMap_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__fetch_function__UpdateGeographicMap_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geographic_msgs__srv__UpdateGeographicMap_Response * item =
    ((const geographic_msgs__srv__UpdateGeographicMap_Response *)
    geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__get_const_function__UpdateGeographicMap_Event__response(untyped_member, index));
  geographic_msgs__srv__UpdateGeographicMap_Response * value =
    (geographic_msgs__srv__UpdateGeographicMap_Response *)(untyped_value);
  *value = *item;
}

void geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__assign_function__UpdateGeographicMap_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geographic_msgs__srv__UpdateGeographicMap_Response * item =
    ((geographic_msgs__srv__UpdateGeographicMap_Response *)
    geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__get_function__UpdateGeographicMap_Event__response(untyped_member, index));
  const geographic_msgs__srv__UpdateGeographicMap_Response * value =
    (const geographic_msgs__srv__UpdateGeographicMap_Response *)(untyped_value);
  *item = *value;
}

bool geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__resize_function__UpdateGeographicMap_Event__response(
  void * untyped_member, size_t size)
{
  geographic_msgs__srv__UpdateGeographicMap_Response__Sequence * member =
    (geographic_msgs__srv__UpdateGeographicMap_Response__Sequence *)(untyped_member);
  geographic_msgs__srv__UpdateGeographicMap_Response__Sequence__fini(member);
  return geographic_msgs__srv__UpdateGeographicMap_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__UpdateGeographicMap_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs__srv__UpdateGeographicMap_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(geographic_msgs__srv__UpdateGeographicMap_Event, request),  // bytes offset in struct
    NULL,  // default value
    geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__size_function__UpdateGeographicMap_Event__request,  // size() function pointer
    geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__get_const_function__UpdateGeographicMap_Event__request,  // get_const(index) function pointer
    geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__get_function__UpdateGeographicMap_Event__request,  // get(index) function pointer
    geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__fetch_function__UpdateGeographicMap_Event__request,  // fetch(index, &value) function pointer
    geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__assign_function__UpdateGeographicMap_Event__request,  // assign(index, value) function pointer
    geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__resize_function__UpdateGeographicMap_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(geographic_msgs__srv__UpdateGeographicMap_Event, response),  // bytes offset in struct
    NULL,  // default value
    geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__size_function__UpdateGeographicMap_Event__response,  // size() function pointer
    geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__get_const_function__UpdateGeographicMap_Event__response,  // get_const(index) function pointer
    geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__get_function__UpdateGeographicMap_Event__response,  // get(index) function pointer
    geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__fetch_function__UpdateGeographicMap_Event__response,  // fetch(index, &value) function pointer
    geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__assign_function__UpdateGeographicMap_Event__response,  // assign(index, value) function pointer
    geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__resize_function__UpdateGeographicMap_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__UpdateGeographicMap_Event_message_members = {
  "geographic_msgs__srv",  // message namespace
  "UpdateGeographicMap_Event",  // message name
  3,  // number of fields
  sizeof(geographic_msgs__srv__UpdateGeographicMap_Event),
  geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__UpdateGeographicMap_Event_message_member_array,  // message members
  geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__UpdateGeographicMap_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__UpdateGeographicMap_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__UpdateGeographicMap_Event_message_type_support_handle = {
  0,
  &geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__UpdateGeographicMap_Event_message_members,
  get_message_typesupport_handle_function,
  &geographic_msgs__srv__UpdateGeographicMap_Event__get_type_hash,
  &geographic_msgs__srv__UpdateGeographicMap_Event__get_type_description,
  &geographic_msgs__srv__UpdateGeographicMap_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geographic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, UpdateGeographicMap_Event)() {
  geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__UpdateGeographicMap_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__UpdateGeographicMap_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, UpdateGeographicMap_Request)();
  geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__UpdateGeographicMap_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, UpdateGeographicMap_Response)();
  if (!geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__UpdateGeographicMap_Event_message_type_support_handle.typesupport_identifier) {
    geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__UpdateGeographicMap_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__UpdateGeographicMap_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "geographic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "geographic_msgs/srv/detail/update_geographic_map__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers geographic_msgs__srv__detail__update_geographic_map__rosidl_typesupport_introspection_c__UpdateGeographicMap_service_members = {
  "geographic_msgs__srv",  // service namespace
  "UpdateGeographicMap",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // geographic_msgs__srv__detail__update_geographic_map__rosidl_typesupport_introspection_c__UpdateGeographicMap_Request_message_type_support_handle,
  NULL,  // response message
  // geographic_msgs__srv__detail__update_geographic_map__rosidl_typesupport_introspection_c__UpdateGeographicMap_Response_message_type_support_handle
  NULL  // event_message
  // geographic_msgs__srv__detail__update_geographic_map__rosidl_typesupport_introspection_c__UpdateGeographicMap_Response_message_type_support_handle
};


static rosidl_service_type_support_t geographic_msgs__srv__detail__update_geographic_map__rosidl_typesupport_introspection_c__UpdateGeographicMap_service_type_support_handle = {
  0,
  &geographic_msgs__srv__detail__update_geographic_map__rosidl_typesupport_introspection_c__UpdateGeographicMap_service_members,
  get_service_typesupport_handle_function,
  &geographic_msgs__srv__UpdateGeographicMap_Request__rosidl_typesupport_introspection_c__UpdateGeographicMap_Request_message_type_support_handle,
  &geographic_msgs__srv__UpdateGeographicMap_Response__rosidl_typesupport_introspection_c__UpdateGeographicMap_Response_message_type_support_handle,
  &geographic_msgs__srv__UpdateGeographicMap_Event__rosidl_typesupport_introspection_c__UpdateGeographicMap_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    geographic_msgs,
    srv,
    UpdateGeographicMap
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    geographic_msgs,
    srv,
    UpdateGeographicMap
  ),
  &geographic_msgs__srv__UpdateGeographicMap__get_type_hash,
  &geographic_msgs__srv__UpdateGeographicMap__get_type_description,
  &geographic_msgs__srv__UpdateGeographicMap__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, UpdateGeographicMap_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, UpdateGeographicMap_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, UpdateGeographicMap_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geographic_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, UpdateGeographicMap)() {
  if (!geographic_msgs__srv__detail__update_geographic_map__rosidl_typesupport_introspection_c__UpdateGeographicMap_service_type_support_handle.typesupport_identifier) {
    geographic_msgs__srv__detail__update_geographic_map__rosidl_typesupport_introspection_c__UpdateGeographicMap_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)geographic_msgs__srv__detail__update_geographic_map__rosidl_typesupport_introspection_c__UpdateGeographicMap_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, UpdateGeographicMap_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, UpdateGeographicMap_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, srv, UpdateGeographicMap_Event)()->data;
  }

  return &geographic_msgs__srv__detail__update_geographic_map__rosidl_typesupport_introspection_c__UpdateGeographicMap_service_type_support_handle;
}
