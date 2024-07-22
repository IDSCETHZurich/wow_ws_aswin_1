// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from geographic_msgs:msg/GeoPointStamped.idl
// generated code does not contain a copyright notice
#include "geographic_msgs/msg/detail/geo_point_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `position`
#include "geographic_msgs/msg/detail/geo_point__functions.h"

bool
geographic_msgs__msg__GeoPointStamped__init(geographic_msgs__msg__GeoPointStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    geographic_msgs__msg__GeoPointStamped__fini(msg);
    return false;
  }
  // position
  if (!geographic_msgs__msg__GeoPoint__init(&msg->position)) {
    geographic_msgs__msg__GeoPointStamped__fini(msg);
    return false;
  }
  return true;
}

void
geographic_msgs__msg__GeoPointStamped__fini(geographic_msgs__msg__GeoPointStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // position
  geographic_msgs__msg__GeoPoint__fini(&msg->position);
}

bool
geographic_msgs__msg__GeoPointStamped__are_equal(const geographic_msgs__msg__GeoPointStamped * lhs, const geographic_msgs__msg__GeoPointStamped * rhs)
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
  // position
  if (!geographic_msgs__msg__GeoPoint__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  return true;
}

bool
geographic_msgs__msg__GeoPointStamped__copy(
  const geographic_msgs__msg__GeoPointStamped * input,
  geographic_msgs__msg__GeoPointStamped * output)
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
  // position
  if (!geographic_msgs__msg__GeoPoint__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  return true;
}

geographic_msgs__msg__GeoPointStamped *
geographic_msgs__msg__GeoPointStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geographic_msgs__msg__GeoPointStamped * msg = (geographic_msgs__msg__GeoPointStamped *)allocator.allocate(sizeof(geographic_msgs__msg__GeoPointStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(geographic_msgs__msg__GeoPointStamped));
  bool success = geographic_msgs__msg__GeoPointStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
geographic_msgs__msg__GeoPointStamped__destroy(geographic_msgs__msg__GeoPointStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    geographic_msgs__msg__GeoPointStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
geographic_msgs__msg__GeoPointStamped__Sequence__init(geographic_msgs__msg__GeoPointStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geographic_msgs__msg__GeoPointStamped * data = NULL;

  if (size) {
    data = (geographic_msgs__msg__GeoPointStamped *)allocator.zero_allocate(size, sizeof(geographic_msgs__msg__GeoPointStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = geographic_msgs__msg__GeoPointStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        geographic_msgs__msg__GeoPointStamped__fini(&data[i - 1]);
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
geographic_msgs__msg__GeoPointStamped__Sequence__fini(geographic_msgs__msg__GeoPointStamped__Sequence * array)
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
      geographic_msgs__msg__GeoPointStamped__fini(&array->data[i]);
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

geographic_msgs__msg__GeoPointStamped__Sequence *
geographic_msgs__msg__GeoPointStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geographic_msgs__msg__GeoPointStamped__Sequence * array = (geographic_msgs__msg__GeoPointStamped__Sequence *)allocator.allocate(sizeof(geographic_msgs__msg__GeoPointStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = geographic_msgs__msg__GeoPointStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
geographic_msgs__msg__GeoPointStamped__Sequence__destroy(geographic_msgs__msg__GeoPointStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    geographic_msgs__msg__GeoPointStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
geographic_msgs__msg__GeoPointStamped__Sequence__are_equal(const geographic_msgs__msg__GeoPointStamped__Sequence * lhs, const geographic_msgs__msg__GeoPointStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!geographic_msgs__msg__GeoPointStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
geographic_msgs__msg__GeoPointStamped__Sequence__copy(
  const geographic_msgs__msg__GeoPointStamped__Sequence * input,
  geographic_msgs__msg__GeoPointStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(geographic_msgs__msg__GeoPointStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    geographic_msgs__msg__GeoPointStamped * data =
      (geographic_msgs__msg__GeoPointStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!geographic_msgs__msg__GeoPointStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          geographic_msgs__msg__GeoPointStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!geographic_msgs__msg__GeoPointStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
