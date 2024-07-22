// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from geographic_msgs:msg/GeoPoint.idl
// generated code does not contain a copyright notice
#include "geographic_msgs/msg/detail/geo_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
geographic_msgs__msg__GeoPoint__init(geographic_msgs__msg__GeoPoint * msg)
{
  if (!msg) {
    return false;
  }
  // latitude
  // longitude
  // altitude
  return true;
}

void
geographic_msgs__msg__GeoPoint__fini(geographic_msgs__msg__GeoPoint * msg)
{
  if (!msg) {
    return;
  }
  // latitude
  // longitude
  // altitude
}

bool
geographic_msgs__msg__GeoPoint__are_equal(const geographic_msgs__msg__GeoPoint * lhs, const geographic_msgs__msg__GeoPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // latitude
  if (lhs->latitude != rhs->latitude) {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  // altitude
  if (lhs->altitude != rhs->altitude) {
    return false;
  }
  return true;
}

bool
geographic_msgs__msg__GeoPoint__copy(
  const geographic_msgs__msg__GeoPoint * input,
  geographic_msgs__msg__GeoPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // latitude
  output->latitude = input->latitude;
  // longitude
  output->longitude = input->longitude;
  // altitude
  output->altitude = input->altitude;
  return true;
}

geographic_msgs__msg__GeoPoint *
geographic_msgs__msg__GeoPoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geographic_msgs__msg__GeoPoint * msg = (geographic_msgs__msg__GeoPoint *)allocator.allocate(sizeof(geographic_msgs__msg__GeoPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(geographic_msgs__msg__GeoPoint));
  bool success = geographic_msgs__msg__GeoPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
geographic_msgs__msg__GeoPoint__destroy(geographic_msgs__msg__GeoPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    geographic_msgs__msg__GeoPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
geographic_msgs__msg__GeoPoint__Sequence__init(geographic_msgs__msg__GeoPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geographic_msgs__msg__GeoPoint * data = NULL;

  if (size) {
    data = (geographic_msgs__msg__GeoPoint *)allocator.zero_allocate(size, sizeof(geographic_msgs__msg__GeoPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = geographic_msgs__msg__GeoPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        geographic_msgs__msg__GeoPoint__fini(&data[i - 1]);
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
geographic_msgs__msg__GeoPoint__Sequence__fini(geographic_msgs__msg__GeoPoint__Sequence * array)
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
      geographic_msgs__msg__GeoPoint__fini(&array->data[i]);
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

geographic_msgs__msg__GeoPoint__Sequence *
geographic_msgs__msg__GeoPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geographic_msgs__msg__GeoPoint__Sequence * array = (geographic_msgs__msg__GeoPoint__Sequence *)allocator.allocate(sizeof(geographic_msgs__msg__GeoPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = geographic_msgs__msg__GeoPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
geographic_msgs__msg__GeoPoint__Sequence__destroy(geographic_msgs__msg__GeoPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    geographic_msgs__msg__GeoPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
geographic_msgs__msg__GeoPoint__Sequence__are_equal(const geographic_msgs__msg__GeoPoint__Sequence * lhs, const geographic_msgs__msg__GeoPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!geographic_msgs__msg__GeoPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
geographic_msgs__msg__GeoPoint__Sequence__copy(
  const geographic_msgs__msg__GeoPoint__Sequence * input,
  geographic_msgs__msg__GeoPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(geographic_msgs__msg__GeoPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    geographic_msgs__msg__GeoPoint * data =
      (geographic_msgs__msg__GeoPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!geographic_msgs__msg__GeoPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          geographic_msgs__msg__GeoPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!geographic_msgs__msg__GeoPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
