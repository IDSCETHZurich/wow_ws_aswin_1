// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nmea_msgs:msg/Gpzda.idl
// generated code does not contain a copyright notice
#include "nmea_msgs/msg/detail/gpzda__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `message_id`
#include "rosidl_runtime_c/string_functions.h"

bool
nmea_msgs__msg__Gpzda__init(nmea_msgs__msg__Gpzda * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    nmea_msgs__msg__Gpzda__fini(msg);
    return false;
  }
  // message_id
  if (!rosidl_runtime_c__String__init(&msg->message_id)) {
    nmea_msgs__msg__Gpzda__fini(msg);
    return false;
  }
  // utc_seconds
  // day
  // month
  // year
  // hour_offset_gmt
  // minute_offset_gmt
  return true;
}

void
nmea_msgs__msg__Gpzda__fini(nmea_msgs__msg__Gpzda * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // message_id
  rosidl_runtime_c__String__fini(&msg->message_id);
  // utc_seconds
  // day
  // month
  // year
  // hour_offset_gmt
  // minute_offset_gmt
}

bool
nmea_msgs__msg__Gpzda__are_equal(const nmea_msgs__msg__Gpzda * lhs, const nmea_msgs__msg__Gpzda * rhs)
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
  // utc_seconds
  if (lhs->utc_seconds != rhs->utc_seconds) {
    return false;
  }
  // day
  if (lhs->day != rhs->day) {
    return false;
  }
  // month
  if (lhs->month != rhs->month) {
    return false;
  }
  // year
  if (lhs->year != rhs->year) {
    return false;
  }
  // hour_offset_gmt
  if (lhs->hour_offset_gmt != rhs->hour_offset_gmt) {
    return false;
  }
  // minute_offset_gmt
  if (lhs->minute_offset_gmt != rhs->minute_offset_gmt) {
    return false;
  }
  return true;
}

bool
nmea_msgs__msg__Gpzda__copy(
  const nmea_msgs__msg__Gpzda * input,
  nmea_msgs__msg__Gpzda * output)
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
  // utc_seconds
  output->utc_seconds = input->utc_seconds;
  // day
  output->day = input->day;
  // month
  output->month = input->month;
  // year
  output->year = input->year;
  // hour_offset_gmt
  output->hour_offset_gmt = input->hour_offset_gmt;
  // minute_offset_gmt
  output->minute_offset_gmt = input->minute_offset_gmt;
  return true;
}

nmea_msgs__msg__Gpzda *
nmea_msgs__msg__Gpzda__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nmea_msgs__msg__Gpzda * msg = (nmea_msgs__msg__Gpzda *)allocator.allocate(sizeof(nmea_msgs__msg__Gpzda), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nmea_msgs__msg__Gpzda));
  bool success = nmea_msgs__msg__Gpzda__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nmea_msgs__msg__Gpzda__destroy(nmea_msgs__msg__Gpzda * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nmea_msgs__msg__Gpzda__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nmea_msgs__msg__Gpzda__Sequence__init(nmea_msgs__msg__Gpzda__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nmea_msgs__msg__Gpzda * data = NULL;

  if (size) {
    data = (nmea_msgs__msg__Gpzda *)allocator.zero_allocate(size, sizeof(nmea_msgs__msg__Gpzda), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nmea_msgs__msg__Gpzda__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nmea_msgs__msg__Gpzda__fini(&data[i - 1]);
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
nmea_msgs__msg__Gpzda__Sequence__fini(nmea_msgs__msg__Gpzda__Sequence * array)
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
      nmea_msgs__msg__Gpzda__fini(&array->data[i]);
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

nmea_msgs__msg__Gpzda__Sequence *
nmea_msgs__msg__Gpzda__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nmea_msgs__msg__Gpzda__Sequence * array = (nmea_msgs__msg__Gpzda__Sequence *)allocator.allocate(sizeof(nmea_msgs__msg__Gpzda__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nmea_msgs__msg__Gpzda__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nmea_msgs__msg__Gpzda__Sequence__destroy(nmea_msgs__msg__Gpzda__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nmea_msgs__msg__Gpzda__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nmea_msgs__msg__Gpzda__Sequence__are_equal(const nmea_msgs__msg__Gpzda__Sequence * lhs, const nmea_msgs__msg__Gpzda__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nmea_msgs__msg__Gpzda__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nmea_msgs__msg__Gpzda__Sequence__copy(
  const nmea_msgs__msg__Gpzda__Sequence * input,
  nmea_msgs__msg__Gpzda__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nmea_msgs__msg__Gpzda);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nmea_msgs__msg__Gpzda * data =
      (nmea_msgs__msg__Gpzda *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nmea_msgs__msg__Gpzda__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nmea_msgs__msg__Gpzda__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nmea_msgs__msg__Gpzda__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
