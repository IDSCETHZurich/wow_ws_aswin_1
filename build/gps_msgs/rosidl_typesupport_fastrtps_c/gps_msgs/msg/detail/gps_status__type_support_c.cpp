// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from gps_msgs:msg/GPSStatus.idl
// generated code does not contain a copyright notice
#include "gps_msgs/msg/detail/gps_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "gps_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "gps_msgs/msg/detail/gps_status__struct.h"
#include "gps_msgs/msg/detail/gps_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // satellite_used_prn, satellite_visible_azimuth, satellite_visible_prn, satellite_visible_snr, satellite_visible_z
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // satellite_used_prn, satellite_visible_azimuth, satellite_visible_prn, satellite_visible_snr, satellite_visible_z
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gps_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gps_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gps_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _GPSStatus__ros_msg_type = gps_msgs__msg__GPSStatus;

static bool _GPSStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GPSStatus__ros_msg_type * ros_message = static_cast<const _GPSStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: satellites_used
  {
    cdr << ros_message->satellites_used;
  }

  // Field name: satellite_used_prn
  {
    size_t size = ros_message->satellite_used_prn.size;
    auto array_ptr = ros_message->satellite_used_prn.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: satellites_visible
  {
    cdr << ros_message->satellites_visible;
  }

  // Field name: satellite_visible_prn
  {
    size_t size = ros_message->satellite_visible_prn.size;
    auto array_ptr = ros_message->satellite_visible_prn.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: satellite_visible_z
  {
    size_t size = ros_message->satellite_visible_z.size;
    auto array_ptr = ros_message->satellite_visible_z.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: satellite_visible_azimuth
  {
    size_t size = ros_message->satellite_visible_azimuth.size;
    auto array_ptr = ros_message->satellite_visible_azimuth.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: satellite_visible_snr
  {
    size_t size = ros_message->satellite_visible_snr.size;
    auto array_ptr = ros_message->satellite_visible_snr.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: motion_source
  {
    cdr << ros_message->motion_source;
  }

  // Field name: orientation_source
  {
    cdr << ros_message->orientation_source;
  }

  // Field name: position_source
  {
    cdr << ros_message->position_source;
  }

  return true;
}

static bool _GPSStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GPSStatus__ros_msg_type * ros_message = static_cast<_GPSStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: satellites_used
  {
    cdr >> ros_message->satellites_used;
  }

  // Field name: satellite_used_prn
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->satellite_used_prn.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->satellite_used_prn);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->satellite_used_prn, size)) {
      fprintf(stderr, "failed to create array for field 'satellite_used_prn'");
      return false;
    }
    auto array_ptr = ros_message->satellite_used_prn.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: satellites_visible
  {
    cdr >> ros_message->satellites_visible;
  }

  // Field name: satellite_visible_prn
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->satellite_visible_prn.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->satellite_visible_prn);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->satellite_visible_prn, size)) {
      fprintf(stderr, "failed to create array for field 'satellite_visible_prn'");
      return false;
    }
    auto array_ptr = ros_message->satellite_visible_prn.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: satellite_visible_z
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->satellite_visible_z.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->satellite_visible_z);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->satellite_visible_z, size)) {
      fprintf(stderr, "failed to create array for field 'satellite_visible_z'");
      return false;
    }
    auto array_ptr = ros_message->satellite_visible_z.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: satellite_visible_azimuth
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->satellite_visible_azimuth.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->satellite_visible_azimuth);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->satellite_visible_azimuth, size)) {
      fprintf(stderr, "failed to create array for field 'satellite_visible_azimuth'");
      return false;
    }
    auto array_ptr = ros_message->satellite_visible_azimuth.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: satellite_visible_snr
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->satellite_visible_snr.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->satellite_visible_snr);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->satellite_visible_snr, size)) {
      fprintf(stderr, "failed to create array for field 'satellite_visible_snr'");
      return false;
    }
    auto array_ptr = ros_message->satellite_visible_snr.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: motion_source
  {
    cdr >> ros_message->motion_source;
  }

  // Field name: orientation_source
  {
    cdr >> ros_message->orientation_source;
  }

  // Field name: position_source
  {
    cdr >> ros_message->position_source;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gps_msgs
size_t get_serialized_size_gps_msgs__msg__GPSStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GPSStatus__ros_msg_type * ros_message = static_cast<const _GPSStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name satellites_used
  {
    size_t item_size = sizeof(ros_message->satellites_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name satellite_used_prn
  {
    size_t array_size = ros_message->satellite_used_prn.size;
    auto array_ptr = ros_message->satellite_used_prn.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name satellites_visible
  {
    size_t item_size = sizeof(ros_message->satellites_visible);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name satellite_visible_prn
  {
    size_t array_size = ros_message->satellite_visible_prn.size;
    auto array_ptr = ros_message->satellite_visible_prn.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name satellite_visible_z
  {
    size_t array_size = ros_message->satellite_visible_z.size;
    auto array_ptr = ros_message->satellite_visible_z.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name satellite_visible_azimuth
  {
    size_t array_size = ros_message->satellite_visible_azimuth.size;
    auto array_ptr = ros_message->satellite_visible_azimuth.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name satellite_visible_snr
  {
    size_t array_size = ros_message->satellite_visible_snr.size;
    auto array_ptr = ros_message->satellite_visible_snr.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motion_source
  {
    size_t item_size = sizeof(ros_message->motion_source);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name orientation_source
  {
    size_t item_size = sizeof(ros_message->orientation_source);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_source
  {
    size_t item_size = sizeof(ros_message->position_source);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GPSStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_gps_msgs__msg__GPSStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gps_msgs
size_t max_serialized_size_gps_msgs__msg__GPSStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: satellites_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: satellite_used_prn
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: satellites_visible
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: satellite_visible_prn
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: satellite_visible_z
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: satellite_visible_azimuth
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: satellite_visible_snr
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: motion_source
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: orientation_source
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: position_source
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = gps_msgs__msg__GPSStatus;
    is_plain =
      (
      offsetof(DataType, position_source) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GPSStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_gps_msgs__msg__GPSStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GPSStatus = {
  "gps_msgs::msg",
  "GPSStatus",
  _GPSStatus__cdr_serialize,
  _GPSStatus__cdr_deserialize,
  _GPSStatus__get_serialized_size,
  _GPSStatus__max_serialized_size
};

static rosidl_message_type_support_t _GPSStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GPSStatus,
  get_message_typesupport_handle_function,
  &gps_msgs__msg__GPSStatus__get_type_hash,
  &gps_msgs__msg__GPSStatus__get_type_description,
  &gps_msgs__msg__GPSStatus__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gps_msgs, msg, GPSStatus)() {
  return &_GPSStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
