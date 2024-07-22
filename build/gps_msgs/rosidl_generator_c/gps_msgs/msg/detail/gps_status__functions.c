// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gps_msgs:msg/GPSStatus.idl
// generated code does not contain a copyright notice
#include "gps_msgs/msg/detail/gps_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `satellite_used_prn`
// Member `satellite_visible_prn`
// Member `satellite_visible_z`
// Member `satellite_visible_azimuth`
// Member `satellite_visible_snr`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
gps_msgs__msg__GPSStatus__init(gps_msgs__msg__GPSStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    gps_msgs__msg__GPSStatus__fini(msg);
    return false;
  }
  // satellites_used
  // satellite_used_prn
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->satellite_used_prn, 0)) {
    gps_msgs__msg__GPSStatus__fini(msg);
    return false;
  }
  // satellites_visible
  // satellite_visible_prn
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->satellite_visible_prn, 0)) {
    gps_msgs__msg__GPSStatus__fini(msg);
    return false;
  }
  // satellite_visible_z
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->satellite_visible_z, 0)) {
    gps_msgs__msg__GPSStatus__fini(msg);
    return false;
  }
  // satellite_visible_azimuth
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->satellite_visible_azimuth, 0)) {
    gps_msgs__msg__GPSStatus__fini(msg);
    return false;
  }
  // satellite_visible_snr
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->satellite_visible_snr, 0)) {
    gps_msgs__msg__GPSStatus__fini(msg);
    return false;
  }
  // status
  // motion_source
  // orientation_source
  // position_source
  return true;
}

void
gps_msgs__msg__GPSStatus__fini(gps_msgs__msg__GPSStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // satellites_used
  // satellite_used_prn
  rosidl_runtime_c__int32__Sequence__fini(&msg->satellite_used_prn);
  // satellites_visible
  // satellite_visible_prn
  rosidl_runtime_c__int32__Sequence__fini(&msg->satellite_visible_prn);
  // satellite_visible_z
  rosidl_runtime_c__int32__Sequence__fini(&msg->satellite_visible_z);
  // satellite_visible_azimuth
  rosidl_runtime_c__int32__Sequence__fini(&msg->satellite_visible_azimuth);
  // satellite_visible_snr
  rosidl_runtime_c__int32__Sequence__fini(&msg->satellite_visible_snr);
  // status
  // motion_source
  // orientation_source
  // position_source
}

bool
gps_msgs__msg__GPSStatus__are_equal(const gps_msgs__msg__GPSStatus * lhs, const gps_msgs__msg__GPSStatus * rhs)
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
  // satellites_used
  if (lhs->satellites_used != rhs->satellites_used) {
    return false;
  }
  // satellite_used_prn
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->satellite_used_prn), &(rhs->satellite_used_prn)))
  {
    return false;
  }
  // satellites_visible
  if (lhs->satellites_visible != rhs->satellites_visible) {
    return false;
  }
  // satellite_visible_prn
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->satellite_visible_prn), &(rhs->satellite_visible_prn)))
  {
    return false;
  }
  // satellite_visible_z
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->satellite_visible_z), &(rhs->satellite_visible_z)))
  {
    return false;
  }
  // satellite_visible_azimuth
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->satellite_visible_azimuth), &(rhs->satellite_visible_azimuth)))
  {
    return false;
  }
  // satellite_visible_snr
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->satellite_visible_snr), &(rhs->satellite_visible_snr)))
  {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // motion_source
  if (lhs->motion_source != rhs->motion_source) {
    return false;
  }
  // orientation_source
  if (lhs->orientation_source != rhs->orientation_source) {
    return false;
  }
  // position_source
  if (lhs->position_source != rhs->position_source) {
    return false;
  }
  return true;
}

bool
gps_msgs__msg__GPSStatus__copy(
  const gps_msgs__msg__GPSStatus * input,
  gps_msgs__msg__GPSStatus * output)
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
  // satellites_used
  output->satellites_used = input->satellites_used;
  // satellite_used_prn
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->satellite_used_prn), &(output->satellite_used_prn)))
  {
    return false;
  }
  // satellites_visible
  output->satellites_visible = input->satellites_visible;
  // satellite_visible_prn
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->satellite_visible_prn), &(output->satellite_visible_prn)))
  {
    return false;
  }
  // satellite_visible_z
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->satellite_visible_z), &(output->satellite_visible_z)))
  {
    return false;
  }
  // satellite_visible_azimuth
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->satellite_visible_azimuth), &(output->satellite_visible_azimuth)))
  {
    return false;
  }
  // satellite_visible_snr
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->satellite_visible_snr), &(output->satellite_visible_snr)))
  {
    return false;
  }
  // status
  output->status = input->status;
  // motion_source
  output->motion_source = input->motion_source;
  // orientation_source
  output->orientation_source = input->orientation_source;
  // position_source
  output->position_source = input->position_source;
  return true;
}

gps_msgs__msg__GPSStatus *
gps_msgs__msg__GPSStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gps_msgs__msg__GPSStatus * msg = (gps_msgs__msg__GPSStatus *)allocator.allocate(sizeof(gps_msgs__msg__GPSStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gps_msgs__msg__GPSStatus));
  bool success = gps_msgs__msg__GPSStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gps_msgs__msg__GPSStatus__destroy(gps_msgs__msg__GPSStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gps_msgs__msg__GPSStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gps_msgs__msg__GPSStatus__Sequence__init(gps_msgs__msg__GPSStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gps_msgs__msg__GPSStatus * data = NULL;

  if (size) {
    data = (gps_msgs__msg__GPSStatus *)allocator.zero_allocate(size, sizeof(gps_msgs__msg__GPSStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gps_msgs__msg__GPSStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gps_msgs__msg__GPSStatus__fini(&data[i - 1]);
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
gps_msgs__msg__GPSStatus__Sequence__fini(gps_msgs__msg__GPSStatus__Sequence * array)
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
      gps_msgs__msg__GPSStatus__fini(&array->data[i]);
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

gps_msgs__msg__GPSStatus__Sequence *
gps_msgs__msg__GPSStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gps_msgs__msg__GPSStatus__Sequence * array = (gps_msgs__msg__GPSStatus__Sequence *)allocator.allocate(sizeof(gps_msgs__msg__GPSStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gps_msgs__msg__GPSStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gps_msgs__msg__GPSStatus__Sequence__destroy(gps_msgs__msg__GPSStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gps_msgs__msg__GPSStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gps_msgs__msg__GPSStatus__Sequence__are_equal(const gps_msgs__msg__GPSStatus__Sequence * lhs, const gps_msgs__msg__GPSStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gps_msgs__msg__GPSStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gps_msgs__msg__GPSStatus__Sequence__copy(
  const gps_msgs__msg__GPSStatus__Sequence * input,
  gps_msgs__msg__GPSStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gps_msgs__msg__GPSStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gps_msgs__msg__GPSStatus * data =
      (gps_msgs__msg__GPSStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gps_msgs__msg__GPSStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gps_msgs__msg__GPSStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gps_msgs__msg__GPSStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
