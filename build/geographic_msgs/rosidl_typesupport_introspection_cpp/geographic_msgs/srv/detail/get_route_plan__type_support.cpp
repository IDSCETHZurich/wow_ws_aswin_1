// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from geographic_msgs:srv/GetRoutePlan.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "geographic_msgs/srv/detail/get_route_plan__functions.h"
#include "geographic_msgs/srv/detail/get_route_plan__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace geographic_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetRoutePlan_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) geographic_msgs::srv::GetRoutePlan_Request(_init);
}

void GetRoutePlan_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<geographic_msgs::srv::GetRoutePlan_Request *>(message_memory);
  typed_message->~GetRoutePlan_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetRoutePlan_Request_message_member_array[3] = {
  {
    "network",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs::srv::GetRoutePlan_Request, network),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "start",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs::srv::GetRoutePlan_Request, start),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs::srv::GetRoutePlan_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetRoutePlan_Request_message_members = {
  "geographic_msgs::srv",  // message namespace
  "GetRoutePlan_Request",  // message name
  3,  // number of fields
  sizeof(geographic_msgs::srv::GetRoutePlan_Request),
  GetRoutePlan_Request_message_member_array,  // message members
  GetRoutePlan_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetRoutePlan_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetRoutePlan_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetRoutePlan_Request_message_members,
  get_message_typesupport_handle_function,
  &geographic_msgs__srv__GetRoutePlan_Request__get_type_hash,
  &geographic_msgs__srv__GetRoutePlan_Request__get_type_description,
  &geographic_msgs__srv__GetRoutePlan_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace geographic_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<geographic_msgs::srv::GetRoutePlan_Request>()
{
  return &::geographic_msgs::srv::rosidl_typesupport_introspection_cpp::GetRoutePlan_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, geographic_msgs, srv, GetRoutePlan_Request)() {
  return &::geographic_msgs::srv::rosidl_typesupport_introspection_cpp::GetRoutePlan_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "geographic_msgs/srv/detail/get_route_plan__functions.h"
// already included above
// #include "geographic_msgs/srv/detail/get_route_plan__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace geographic_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetRoutePlan_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) geographic_msgs::srv::GetRoutePlan_Response(_init);
}

void GetRoutePlan_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<geographic_msgs::srv::GetRoutePlan_Response *>(message_memory);
  typed_message->~GetRoutePlan_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetRoutePlan_Response_message_member_array[3] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs::srv::GetRoutePlan_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs::srv::GetRoutePlan_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "plan",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geographic_msgs::msg::RoutePath>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs::srv::GetRoutePlan_Response, plan),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetRoutePlan_Response_message_members = {
  "geographic_msgs::srv",  // message namespace
  "GetRoutePlan_Response",  // message name
  3,  // number of fields
  sizeof(geographic_msgs::srv::GetRoutePlan_Response),
  GetRoutePlan_Response_message_member_array,  // message members
  GetRoutePlan_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetRoutePlan_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetRoutePlan_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetRoutePlan_Response_message_members,
  get_message_typesupport_handle_function,
  &geographic_msgs__srv__GetRoutePlan_Response__get_type_hash,
  &geographic_msgs__srv__GetRoutePlan_Response__get_type_description,
  &geographic_msgs__srv__GetRoutePlan_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace geographic_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<geographic_msgs::srv::GetRoutePlan_Response>()
{
  return &::geographic_msgs::srv::rosidl_typesupport_introspection_cpp::GetRoutePlan_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, geographic_msgs, srv, GetRoutePlan_Response)() {
  return &::geographic_msgs::srv::rosidl_typesupport_introspection_cpp::GetRoutePlan_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "geographic_msgs/srv/detail/get_route_plan__functions.h"
// already included above
// #include "geographic_msgs/srv/detail/get_route_plan__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace geographic_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetRoutePlan_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) geographic_msgs::srv::GetRoutePlan_Event(_init);
}

void GetRoutePlan_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<geographic_msgs::srv::GetRoutePlan_Event *>(message_memory);
  typed_message->~GetRoutePlan_Event();
}

size_t size_function__GetRoutePlan_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geographic_msgs::srv::GetRoutePlan_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetRoutePlan_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geographic_msgs::srv::GetRoutePlan_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__GetRoutePlan_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geographic_msgs::srv::GetRoutePlan_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetRoutePlan_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geographic_msgs::srv::GetRoutePlan_Request *>(
    get_const_function__GetRoutePlan_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<geographic_msgs::srv::GetRoutePlan_Request *>(untyped_value);
  value = item;
}

void assign_function__GetRoutePlan_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geographic_msgs::srv::GetRoutePlan_Request *>(
    get_function__GetRoutePlan_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const geographic_msgs::srv::GetRoutePlan_Request *>(untyped_value);
  item = value;
}

void resize_function__GetRoutePlan_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geographic_msgs::srv::GetRoutePlan_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetRoutePlan_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geographic_msgs::srv::GetRoutePlan_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetRoutePlan_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geographic_msgs::srv::GetRoutePlan_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__GetRoutePlan_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geographic_msgs::srv::GetRoutePlan_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetRoutePlan_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geographic_msgs::srv::GetRoutePlan_Response *>(
    get_const_function__GetRoutePlan_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<geographic_msgs::srv::GetRoutePlan_Response *>(untyped_value);
  value = item;
}

void assign_function__GetRoutePlan_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geographic_msgs::srv::GetRoutePlan_Response *>(
    get_function__GetRoutePlan_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const geographic_msgs::srv::GetRoutePlan_Response *>(untyped_value);
  item = value;
}

void resize_function__GetRoutePlan_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geographic_msgs::srv::GetRoutePlan_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetRoutePlan_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs::srv::GetRoutePlan_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geographic_msgs::srv::GetRoutePlan_Request>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(geographic_msgs::srv::GetRoutePlan_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetRoutePlan_Event__request,  // size() function pointer
    get_const_function__GetRoutePlan_Event__request,  // get_const(index) function pointer
    get_function__GetRoutePlan_Event__request,  // get(index) function pointer
    fetch_function__GetRoutePlan_Event__request,  // fetch(index, &value) function pointer
    assign_function__GetRoutePlan_Event__request,  // assign(index, value) function pointer
    resize_function__GetRoutePlan_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geographic_msgs::srv::GetRoutePlan_Response>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(geographic_msgs::srv::GetRoutePlan_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetRoutePlan_Event__response,  // size() function pointer
    get_const_function__GetRoutePlan_Event__response,  // get_const(index) function pointer
    get_function__GetRoutePlan_Event__response,  // get(index) function pointer
    fetch_function__GetRoutePlan_Event__response,  // fetch(index, &value) function pointer
    assign_function__GetRoutePlan_Event__response,  // assign(index, value) function pointer
    resize_function__GetRoutePlan_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetRoutePlan_Event_message_members = {
  "geographic_msgs::srv",  // message namespace
  "GetRoutePlan_Event",  // message name
  3,  // number of fields
  sizeof(geographic_msgs::srv::GetRoutePlan_Event),
  GetRoutePlan_Event_message_member_array,  // message members
  GetRoutePlan_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  GetRoutePlan_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetRoutePlan_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetRoutePlan_Event_message_members,
  get_message_typesupport_handle_function,
  &geographic_msgs__srv__GetRoutePlan_Event__get_type_hash,
  &geographic_msgs__srv__GetRoutePlan_Event__get_type_description,
  &geographic_msgs__srv__GetRoutePlan_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace geographic_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<geographic_msgs::srv::GetRoutePlan_Event>()
{
  return &::geographic_msgs::srv::rosidl_typesupport_introspection_cpp::GetRoutePlan_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, geographic_msgs, srv, GetRoutePlan_Event)() {
  return &::geographic_msgs::srv::rosidl_typesupport_introspection_cpp::GetRoutePlan_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "geographic_msgs/srv/detail/get_route_plan__functions.h"
// already included above
// #include "geographic_msgs/srv/detail/get_route_plan__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace geographic_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetRoutePlan_service_members = {
  "geographic_msgs::srv",  // service namespace
  "GetRoutePlan",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<geographic_msgs::srv::GetRoutePlan>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t GetRoutePlan_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetRoutePlan_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geographic_msgs::srv::GetRoutePlan_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geographic_msgs::srv::GetRoutePlan_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geographic_msgs::srv::GetRoutePlan_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<geographic_msgs::srv::GetRoutePlan>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<geographic_msgs::srv::GetRoutePlan>,
  &geographic_msgs__srv__GetRoutePlan__get_type_hash,
  &geographic_msgs__srv__GetRoutePlan__get_type_description,
  &geographic_msgs__srv__GetRoutePlan__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace geographic_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<geographic_msgs::srv::GetRoutePlan>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::geographic_msgs::srv::rosidl_typesupport_introspection_cpp::GetRoutePlan_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::geographic_msgs::srv::GetRoutePlan_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::geographic_msgs::srv::GetRoutePlan_Response
      >()->data
      );

    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::geographic_msgs::srv::GetRoutePlan_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, geographic_msgs, srv, GetRoutePlan)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<geographic_msgs::srv::GetRoutePlan>();
}

#ifdef __cplusplus
}
#endif
