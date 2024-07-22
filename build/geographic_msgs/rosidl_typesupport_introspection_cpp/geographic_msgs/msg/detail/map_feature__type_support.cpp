// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from geographic_msgs:msg/MapFeature.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "geographic_msgs/msg/detail/map_feature__functions.h"
#include "geographic_msgs/msg/detail/map_feature__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace geographic_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MapFeature_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) geographic_msgs::msg::MapFeature(_init);
}

void MapFeature_fini_function(void * message_memory)
{
  auto typed_message = static_cast<geographic_msgs::msg::MapFeature *>(message_memory);
  typed_message->~MapFeature();
}

size_t size_function__MapFeature__components(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<unique_identifier_msgs::msg::UUID> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MapFeature__components(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<unique_identifier_msgs::msg::UUID> *>(untyped_member);
  return &member[index];
}

void * get_function__MapFeature__components(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<unique_identifier_msgs::msg::UUID> *>(untyped_member);
  return &member[index];
}

void fetch_function__MapFeature__components(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const unique_identifier_msgs::msg::UUID *>(
    get_const_function__MapFeature__components(untyped_member, index));
  auto & value = *reinterpret_cast<unique_identifier_msgs::msg::UUID *>(untyped_value);
  value = item;
}

void assign_function__MapFeature__components(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<unique_identifier_msgs::msg::UUID *>(
    get_function__MapFeature__components(untyped_member, index));
  const auto & value = *reinterpret_cast<const unique_identifier_msgs::msg::UUID *>(untyped_value);
  item = value;
}

void resize_function__MapFeature__components(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<unique_identifier_msgs::msg::UUID> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MapFeature__props(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geographic_msgs::msg::KeyValue> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MapFeature__props(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geographic_msgs::msg::KeyValue> *>(untyped_member);
  return &member[index];
}

void * get_function__MapFeature__props(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geographic_msgs::msg::KeyValue> *>(untyped_member);
  return &member[index];
}

void fetch_function__MapFeature__props(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geographic_msgs::msg::KeyValue *>(
    get_const_function__MapFeature__props(untyped_member, index));
  auto & value = *reinterpret_cast<geographic_msgs::msg::KeyValue *>(untyped_value);
  value = item;
}

void assign_function__MapFeature__props(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geographic_msgs::msg::KeyValue *>(
    get_function__MapFeature__props(untyped_member, index));
  const auto & value = *reinterpret_cast<const geographic_msgs::msg::KeyValue *>(untyped_value);
  item = value;
}

void resize_function__MapFeature__props(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geographic_msgs::msg::KeyValue> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MapFeature_message_member_array[3] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs::msg::MapFeature, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "components",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs::msg::MapFeature, components),  // bytes offset in struct
    nullptr,  // default value
    size_function__MapFeature__components,  // size() function pointer
    get_const_function__MapFeature__components,  // get_const(index) function pointer
    get_function__MapFeature__components,  // get(index) function pointer
    fetch_function__MapFeature__components,  // fetch(index, &value) function pointer
    assign_function__MapFeature__components,  // assign(index, value) function pointer
    resize_function__MapFeature__components  // resize(index) function pointer
  },
  {
    "props",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geographic_msgs::msg::KeyValue>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geographic_msgs::msg::MapFeature, props),  // bytes offset in struct
    nullptr,  // default value
    size_function__MapFeature__props,  // size() function pointer
    get_const_function__MapFeature__props,  // get_const(index) function pointer
    get_function__MapFeature__props,  // get(index) function pointer
    fetch_function__MapFeature__props,  // fetch(index, &value) function pointer
    assign_function__MapFeature__props,  // assign(index, value) function pointer
    resize_function__MapFeature__props  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MapFeature_message_members = {
  "geographic_msgs::msg",  // message namespace
  "MapFeature",  // message name
  3,  // number of fields
  sizeof(geographic_msgs::msg::MapFeature),
  MapFeature_message_member_array,  // message members
  MapFeature_init_function,  // function to initialize message memory (memory has to be allocated)
  MapFeature_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MapFeature_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MapFeature_message_members,
  get_message_typesupport_handle_function,
  &geographic_msgs__msg__MapFeature__get_type_hash,
  &geographic_msgs__msg__MapFeature__get_type_description,
  &geographic_msgs__msg__MapFeature__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace geographic_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<geographic_msgs::msg::MapFeature>()
{
  return &::geographic_msgs::msg::rosidl_typesupport_introspection_cpp::MapFeature_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, geographic_msgs, msg, MapFeature)() {
  return &::geographic_msgs::msg::rosidl_typesupport_introspection_cpp::MapFeature_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
