// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nmea_msgs:msg/Gpvtg.idl
// generated code does not contain a copyright notice
#include "nmea_msgs/msg/detail/gpvtg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `message_id`
// Member `track_t_ref`
// Member `track_m_ref`
// Member `speed_n_unit`
// Member `speed_k_unit`
// Member `mode_indicator`
#include "rosidl_runtime_c/string_functions.h"

bool
nmea_msgs__msg__Gpvtg__init(nmea_msgs__msg__Gpvtg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    nmea_msgs__msg__Gpvtg__fini(msg);
    return false;
  }
  // message_id
  if (!rosidl_runtime_c__String__init(&msg->message_id)) {
    nmea_msgs__msg__Gpvtg__fini(msg);
    return false;
  }
  // track_t
  // track_t_ref
  if (!rosidl_runtime_c__String__init(&msg->track_t_ref)) {
    nmea_msgs__msg__Gpvtg__fini(msg);
    return false;
  }
  // track_m
  // track_m_ref
  if (!rosidl_runtime_c__String__init(&msg->track_m_ref)) {
    nmea_msgs__msg__Gpvtg__fini(msg);
    return false;
  }
  // speed_n
  // speed_n_unit
  if (!rosidl_runtime_c__String__init(&msg->speed_n_unit)) {
    nmea_msgs__msg__Gpvtg__fini(msg);
    return false;
  }
  // speed_k
  // speed_k_unit
  if (!rosidl_runtime_c__String__init(&msg->speed_k_unit)) {
    nmea_msgs__msg__Gpvtg__fini(msg);
    return false;
  }
  // mode_indicator
  if (!rosidl_runtime_c__String__init(&msg->mode_indicator)) {
    nmea_msgs__msg__Gpvtg__fini(msg);
    return false;
  }
  return true;
}

void
nmea_msgs__msg__Gpvtg__fini(nmea_msgs__msg__Gpvtg * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // message_id
  rosidl_runtime_c__String__fini(&msg->message_id);
  // track_t
  // track_t_ref
  rosidl_runtime_c__String__fini(&msg->track_t_ref);
  // track_m
  // track_m_ref
  rosidl_runtime_c__String__fini(&msg->track_m_ref);
  // speed_n
  // speed_n_unit
  rosidl_runtime_c__String__fini(&msg->speed_n_unit);
  // speed_k
  // speed_k_unit
  rosidl_runtime_c__String__fini(&msg->speed_k_unit);
  // mode_indicator
  rosidl_runtime_c__String__fini(&msg->mode_indicator);
}

bool
nmea_msgs__msg__Gpvtg__are_equal(const nmea_msgs__msg__Gpvtg * lhs, const nmea_msgs__msg__Gpvtg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // message_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message_id), &(rhs->message_id)))
  {
    return false;
  }
  // track_t
  if (lhs->track_t != rhs->track_t) {
    return false;
  }
  // track_t_ref
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->track_t_ref), &(rhs->track_t_ref)))
  {
    return false;
  }
  // track_m
  if (lhs->track_m != rhs->track_m) {
    return false;
  }
  // track_m_ref
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->track_m_ref), &(rhs->track_m_ref)))
  {
    return false;
  }
  // speed_n
  if (lhs->speed_n != rhs->speed_n) {
    return false;
  }
  // speed_n_unit
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->speed_n_unit), &(rhs->speed_n_unit)))
  {
    return false;
  }
  // speed_k
  if (lhs->speed_k != rhs->speed_k) {
    return false;
  }
  // speed_k_unit
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->speed_k_unit), &(rhs->speed_k_unit)))
  {
    return false;
  }
  // mode_indicator
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mode_indicator), &(rhs->mode_indicator)))
  {
    return false;
  }
  return true;
}

bool
nmea_msgs__msg__Gpvtg__copy(
  const nmea_msgs__msg__Gpvtg * input,
  nmea_msgs__msg__Gpvtg * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // message_id
  if (!rosidl_runtime_c__String__copy(
      &(input->message_id), &(output->message_id)))
  {
    return false;
  }
  // track_t
  output->track_t = input->track_t;
  // track_t_ref
  if (!rosidl_runtime_c__String__copy(
      &(input->track_t_ref), &(output->track_t_ref)))
  {
    return false;
  }
  // track_m
  output->track_m = input->track_m;
  // track_m_ref
  if (!rosidl_runtime_c__String__copy(
      &(input->track_m_ref), &(output->track_m_ref)))
  {
    return false;
  }
  // speed_n
  output->speed_n = input->speed_n;
  // speed_n_unit
  if (!rosidl_runtime_c__String__copy(
      &(input->speed_n_unit), &(output->speed_n_unit)))
  {
    return false;
  }
  // speed_k
  output->speed_k = input->speed_k;
  // speed_k_unit
  if (!rosidl_runtime_c__String__copy(
      &(input->speed_k_unit), &(output->speed_k_unit)))
  {
    return false;
  }
  // mode_indicator
  if (!rosidl_runtime_c__String__copy(
      &(input->mode_indicator), &(output->mode_indicator)))
  {
    return false;
  }
  return true;
}

nmea_msgs__msg__Gpvtg *
nmea_msgs__msg__Gpvtg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nmea_msgs__msg__Gpvtg * msg = (nmea_msgs__msg__Gpvtg *)allocator.allocate(sizeof(nmea_msgs__msg__Gpvtg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nmea_msgs__msg__Gpvtg));
  bool success = nmea_msgs__msg__Gpvtg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nmea_msgs__msg__Gpvtg__destroy(nmea_msgs__msg__Gpvtg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nmea_msgs__msg__Gpvtg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nmea_msgs__msg__Gpvtg__Sequence__init(nmea_msgs__msg__Gpvtg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nmea_msgs__msg__Gpvtg * data = NULL;

  if (size) {
    data = (nmea_msgs__msg__Gpvtg *)allocator.zero_allocate(size, sizeof(nmea_msgs__msg__Gpvtg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nmea_msgs__msg__Gpvtg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nmea_msgs__msg__Gpvtg__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
nmea_msgs__msg__Gpvtg__Sequence__fini(nmea_msgs__msg__Gpvtg__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nmea_msgs__msg__Gpvtg__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

nmea_msgs__msg__Gpvtg__Sequence *
nmea_msgs__msg__Gpvtg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nmea_msgs__msg__Gpvtg__Sequence * array = (nmea_msgs__msg__Gpvtg__Sequence *)allocator.allocate(sizeof(nmea_msgs__msg__Gpvtg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nmea_msgs__msg__Gpvtg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nmea_msgs__msg__Gpvtg__Sequence__destroy(nmea_msgs__msg__Gpvtg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nmea_msgs__msg__Gpvtg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nmea_msgs__msg__Gpvtg__Sequence__are_equal(const nmea_msgs__msg__Gpvtg__Sequence * lhs, const nmea_msgs__msg__Gpvtg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nmea_msgs__msg__Gpvtg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nmea_msgs__msg__Gpvtg__Sequence__copy(
  const nmea_msgs__msg__Gpvtg__Sequence * input,
  nmea_msgs__msg__Gpvtg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nmea_msgs__msg__Gpvtg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nmea_msgs__msg__Gpvtg * data =
      (nmea_msgs__msg__Gpvtg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nmea_msgs__msg__Gpvtg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nmea_msgs__msg__Gpvtg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nmea_msgs__msg__Gpvtg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
