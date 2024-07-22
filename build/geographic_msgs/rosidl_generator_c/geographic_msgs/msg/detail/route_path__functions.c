// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from geographic_msgs:msg/RoutePath.idl
// generated code does not contain a copyright notice
#include "geographic_msgs/msg/detail/route_path__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `network`
// Member `segments`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `props`
#include "geographic_msgs/msg/detail/key_value__functions.h"

bool
geographic_msgs__msg__RoutePath__init(geographic_msgs__msg__RoutePath * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    geographic_msgs__msg__RoutePath__fini(msg);
    return false;
  }
  // network
  if (!unique_identifier_msgs__msg__UUID__init(&msg->network)) {
    geographic_msgs__msg__RoutePath__fini(msg);
    return false;
  }
  // segments
  if (!unique_identifier_msgs__msg__UUID__Sequence__init(&msg->segments, 0)) {
    geographic_msgs__msg__RoutePath__fini(msg);
    return false;
  }
  // props
  if (!geographic_msgs__msg__KeyValue__Sequence__init(&msg->props, 0)) {
    geographic_msgs__msg__RoutePath__fini(msg);
    return false;
  }
  return true;
}

void
geographic_msgs__msg__RoutePath__fini(geographic_msgs__msg__RoutePath * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // network
  unique_identifier_msgs__msg__UUID__fini(&msg->network);
  // segments
  unique_identifier_msgs__msg__UUID__Sequence__fini(&msg->segments);
  // props
  geographic_msgs__msg__KeyValue__Sequence__fini(&msg->props);
}

bool
geographic_msgs__msg__RoutePath__are_equal(const geographic_msgs__msg__RoutePath * lhs, const geographic_msgs__msg__RoutePath * rhs)
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
  // network
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->network), &(rhs->network)))
  {
    return false;
  }
  // segments
  if (!unique_identifier_msgs__msg__UUID__Sequence__are_equal(
      &(lhs->segments), &(rhs->segments)))
  {
    return false;
  }
  // props
  if (!geographic_msgs__msg__KeyValue__Sequence__are_equal(
      &(lhs->props), &(rhs->props)))
  {
    return false;
  }
  return true;
}

bool
geographic_msgs__msg__RoutePath__copy(
  const geographic_msgs__msg__RoutePath * input,
  geographic_msgs__msg__RoutePath * output)
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
  // network
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->network), &(output->network)))
  {
    return false;
  }
  // segments
  if (!unique_identifier_msgs__msg__UUID__Sequence__copy(
      &(input->segments), &(output->segments)))
  {
    return false;
  }
  // props
  if (!geographic_msgs__msg__KeyValue__Sequence__copy(
      &(input->props), &(output->props)))
  {
    return false;
  }
  return true;
}

geographic_msgs__msg__RoutePath *
geographic_msgs__msg__RoutePath__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geographic_msgs__msg__RoutePath * msg = (geographic_msgs__msg__RoutePath *)allocator.allocate(sizeof(geographic_msgs__msg__RoutePath), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(geographic_msgs__msg__RoutePath));
  bool success = geographic_msgs__msg__RoutePath__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
geographic_msgs__msg__RoutePath__destroy(geographic_msgs__msg__RoutePath * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    geographic_msgs__msg__RoutePath__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
geographic_msgs__msg__RoutePath__Sequence__init(geographic_msgs__msg__RoutePath__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geographic_msgs__msg__RoutePath * data = NULL;

  if (size) {
    data = (geographic_msgs__msg__RoutePath *)allocator.zero_allocate(size, sizeof(geographic_msgs__msg__RoutePath), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = geographic_msgs__msg__RoutePath__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        geographic_msgs__msg__RoutePath__fini(&data[i - 1]);
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
geographic_msgs__msg__RoutePath__Sequence__fini(geographic_msgs__msg__RoutePath__Sequence * array)
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
      geographic_msgs__msg__RoutePath__fini(&array->data[i]);
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

geographic_msgs__msg__RoutePath__Sequence *
geographic_msgs__msg__RoutePath__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geographic_msgs__msg__RoutePath__Sequence * array = (geographic_msgs__msg__RoutePath__Sequence *)allocator.allocate(sizeof(geographic_msgs__msg__RoutePath__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = geographic_msgs__msg__RoutePath__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
geographic_msgs__msg__RoutePath__Sequence__destroy(geographic_msgs__msg__RoutePath__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    geographic_msgs__msg__RoutePath__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
geographic_msgs__msg__RoutePath__Sequence__are_equal(const geographic_msgs__msg__RoutePath__Sequence * lhs, const geographic_msgs__msg__RoutePath__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!geographic_msgs__msg__RoutePath__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
geographic_msgs__msg__RoutePath__Sequence__copy(
  const geographic_msgs__msg__RoutePath__Sequence * input,
  geographic_msgs__msg__RoutePath__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(geographic_msgs__msg__RoutePath);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    geographic_msgs__msg__RoutePath * data =
      (geographic_msgs__msg__RoutePath *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!geographic_msgs__msg__RoutePath__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          geographic_msgs__msg__RoutePath__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!geographic_msgs__msg__RoutePath__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
