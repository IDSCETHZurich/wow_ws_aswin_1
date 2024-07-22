// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from gps_msgs:msg/GPSStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "gps_msgs/msg/detail/gps_status__functions.h"
#include "gps_msgs/msg/detail/gps_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace gps_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void GPSStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gps_msgs::msg::GPSStatus(_init);
}

void GPSStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gps_msgs::msg::GPSStatus *>(message_memory);
  typed_message->~GPSStatus();
}

size_t size_function__GPSStatus__satellite_used_prn(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GPSStatus__satellite_used_prn(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__GPSStatus__satellite_used_prn(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__GPSStatus__satellite_used_prn(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__GPSStatus__satellite_used_prn(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__GPSStatus__satellite_used_prn(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__GPSStatus__satellite_used_prn(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__GPSStatus__satellite_used_prn(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GPSStatus__satellite_visible_prn(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GPSStatus__satellite_visible_prn(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__GPSStatus__satellite_visible_prn(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__GPSStatus__satellite_visible_prn(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__GPSStatus__satellite_visible_prn(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__GPSStatus__satellite_visible_prn(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__GPSStatus__satellite_visible_prn(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__GPSStatus__satellite_visible_prn(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GPSStatus__satellite_visible_z(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GPSStatus__satellite_visible_z(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__GPSStatus__satellite_visible_z(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__GPSStatus__satellite_visible_z(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__GPSStatus__satellite_visible_z(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__GPSStatus__satellite_visible_z(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__GPSStatus__satellite_visible_z(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__GPSStatus__satellite_visible_z(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GPSStatus__satellite_visible_azimuth(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GPSStatus__satellite_visible_azimuth(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__GPSStatus__satellite_visible_azimuth(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__GPSStatus__satellite_visible_azimuth(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__GPSStatus__satellite_visible_azimuth(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__GPSStatus__satellite_visible_azimuth(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__GPSStatus__satellite_visible_azimuth(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__GPSStatus__satellite_visible_azimuth(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GPSStatus__satellite_visible_snr(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GPSStatus__satellite_visible_snr(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__GPSStatus__satellite_visible_snr(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__GPSStatus__satellite_visible_snr(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__GPSStatus__satellite_visible_snr(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__GPSStatus__satellite_visible_snr(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__GPSStatus__satellite_visible_snr(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__GPSStatus__satellite_visible_snr(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GPSStatus_message_member_array[12] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_msgs::msg::GPSStatus, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "satellites_used",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_msgs::msg::GPSStatus, satellites_used),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "satellite_used_prn",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_msgs::msg::GPSStatus, satellite_used_prn),  // bytes offset in struct
    nullptr,  // default value
    size_function__GPSStatus__satellite_used_prn,  // size() function pointer
    get_const_function__GPSStatus__satellite_used_prn,  // get_const(index) function pointer
    get_function__GPSStatus__satellite_used_prn,  // get(index) function pointer
    fetch_function__GPSStatus__satellite_used_prn,  // fetch(index, &value) function pointer
    assign_function__GPSStatus__satellite_used_prn,  // assign(index, value) function pointer
    resize_function__GPSStatus__satellite_used_prn  // resize(index) function pointer
  },
  {
    "satellites_visible",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_msgs::msg::GPSStatus, satellites_visible),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "satellite_visible_prn",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_msgs::msg::GPSStatus, satellite_visible_prn),  // bytes offset in struct
    nullptr,  // default value
    size_function__GPSStatus__satellite_visible_prn,  // size() function pointer
    get_const_function__GPSStatus__satellite_visible_prn,  // get_const(index) function pointer
    get_function__GPSStatus__satellite_visible_prn,  // get(index) function pointer
    fetch_function__GPSStatus__satellite_visible_prn,  // fetch(index, &value) function pointer
    assign_function__GPSStatus__satellite_visible_prn,  // assign(index, value) function pointer
    resize_function__GPSStatus__satellite_visible_prn  // resize(index) function pointer
  },
  {
    "satellite_visible_z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_msgs::msg::GPSStatus, satellite_visible_z),  // bytes offset in struct
    nullptr,  // default value
    size_function__GPSStatus__satellite_visible_z,  // size() function pointer
    get_const_function__GPSStatus__satellite_visible_z,  // get_const(index) function pointer
    get_function__GPSStatus__satellite_visible_z,  // get(index) function pointer
    fetch_function__GPSStatus__satellite_visible_z,  // fetch(index, &value) function pointer
    assign_function__GPSStatus__satellite_visible_z,  // assign(index, value) function pointer
    resize_function__GPSStatus__satellite_visible_z  // resize(index) function pointer
  },
  {
    "satellite_visible_azimuth",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_msgs::msg::GPSStatus, satellite_visible_azimuth),  // bytes offset in struct
    nullptr,  // default value
    size_function__GPSStatus__satellite_visible_azimuth,  // size() function pointer
    get_const_function__GPSStatus__satellite_visible_azimuth,  // get_const(index) function pointer
    get_function__GPSStatus__satellite_visible_azimuth,  // get(index) function pointer
    fetch_function__GPSStatus__satellite_visible_azimuth,  // fetch(index, &value) function pointer
    assign_function__GPSStatus__satellite_visible_azimuth,  // assign(index, value) function pointer
    resize_function__GPSStatus__satellite_visible_azimuth  // resize(index) function pointer
  },
  {
    "satellite_visible_snr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_msgs::msg::GPSStatus, satellite_visible_snr),  // bytes offset in struct
    nullptr,  // default value
    size_function__GPSStatus__satellite_visible_snr,  // size() function pointer
    get_const_function__GPSStatus__satellite_visible_snr,  // get_const(index) function pointer
    get_function__GPSStatus__satellite_visible_snr,  // get(index) function pointer
    fetch_function__GPSStatus__satellite_visible_snr,  // fetch(index, &value) function pointer
    assign_function__GPSStatus__satellite_visible_snr,  // assign(index, value) function pointer
    resize_function__GPSStatus__satellite_visible_snr  // resize(index) function pointer
  },
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_msgs::msg::GPSStatus, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "motion_source",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_msgs::msg::GPSStatus, motion_source),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "orientation_source",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_msgs::msg::GPSStatus, orientation_source),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "position_source",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps_msgs::msg::GPSStatus, position_source),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GPSStatus_message_members = {
  "gps_msgs::msg",  // message namespace
  "GPSStatus",  // message name
  12,  // number of fields
  sizeof(gps_msgs::msg::GPSStatus),
  GPSStatus_message_member_array,  // message members
  GPSStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  GPSStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GPSStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GPSStatus_message_members,
  get_message_typesupport_handle_function,
  &gps_msgs__msg__GPSStatus__get_type_hash,
  &gps_msgs__msg__GPSStatus__get_type_description,
  &gps_msgs__msg__GPSStatus__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace gps_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gps_msgs::msg::GPSStatus>()
{
  return &::gps_msgs::msg::rosidl_typesupport_introspection_cpp::GPSStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gps_msgs, msg, GPSStatus)() {
  return &::gps_msgs::msg::rosidl_typesupport_introspection_cpp::GPSStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
