// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from geographic_msgs:srv/GetRoutePlan.idl
// generated code does not contain a copyright notice
#include "geographic_msgs/srv/detail/get_route_plan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `network`
// Member `start`
// Member `goal`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
geographic_msgs__srv__GetRoutePlan_Request__init(geographic_msgs__srv__GetRoutePlan_Request * msg)
{
  if (!msg) {
    return false;
  }
  // network
  if (!unique_identifier_msgs__msg__UUID__init(&msg->network)) {
    geographic_msgs__srv__GetRoutePlan_Request__fini(msg);
    return false;
  }
  // start
  if (!unique_identifier_msgs__msg__UUID__init(&msg->start)) {
    geographic_msgs__srv__GetRoutePlan_Request__fini(msg);
    return false;
  }
  // goal
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal)) {
    geographic_msgs__srv__GetRoutePlan_Request__fini(msg);
    return false;
  }
  return true;
}

void
geographic_msgs__srv__GetRoutePlan_Request__fini(geographic_msgs__srv__GetRoutePlan_Request * msg)
{
  if (!msg) {
    return;
  }
  // network
  unique_identifier_msgs__msg__UUID__fini(&msg->network);
  // start
  unique_identifier_msgs__msg__UUID__fini(&msg->start);
  // goal
  unique_identifier_msgs__msg__UUID__fini(&msg->goal);
}

bool
geographic_msgs__srv__GetRoutePlan_Request__are_equal(const geographic_msgs__srv__GetRoutePlan_Request * lhs, const geographic_msgs__srv__GetRoutePlan_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // network
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->network), &(rhs->network)))
  {
    return false;
  }
  // start
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->start), &(rhs->start)))
  {
    return false;
  }
  // goal
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
geographic_msgs__srv__GetRoutePlan_Request__copy(
  const geographic_msgs__srv__GetRoutePlan_Request * input,
  geographic_msgs__srv__GetRoutePlan_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // network
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->network), &(output->network)))
  {
    return false;
  }
  // start
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->start), &(output->start)))
  {
    return false;
  }
  // goal
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

geographic_msgs__srv__GetRoutePlan_Request *
geographic_msgs__srv__GetRoutePlan_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geographic_msgs__srv__GetRoutePlan_Request * msg = (geographic_msgs__srv__GetRoutePlan_Request *)allocator.allocate(sizeof(geographic_msgs__srv__GetRoutePlan_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(geographic_msgs__srv__GetRoutePlan_Request));
  bool success = geographic_msgs__srv__GetRoutePlan_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
geographic_msgs__srv__GetRoutePlan_Request__destroy(geographic_msgs__srv__GetRoutePlan_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    geographic_msgs__srv__GetRoutePlan_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
geographic_msgs__srv__GetRoutePlan_Request__Sequence__init(geographic_msgs__srv__GetRoutePlan_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geographic_msgs__srv__GetRoutePlan_Request * data = NULL;

  if (size) {
    data = (geographic_msgs__srv__GetRoutePlan_Request *)allocator.zero_allocate(size, sizeof(geographic_msgs__srv__GetRoutePlan_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = geographic_msgs__srv__GetRoutePlan_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        geographic_msgs__srv__GetRoutePlan_Request__fini(&data[i - 1]);
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
geographic_msgs__srv__GetRoutePlan_Request__Sequence__fini(geographic_msgs__srv__GetRoutePlan_Request__Sequence * array)
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
      geographic_msgs__srv__GetRoutePlan_Request__fini(&array->data[i]);
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

geographic_msgs__srv__GetRoutePlan_Request__Sequence *
geographic_msgs__srv__GetRoutePlan_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geographic_msgs__srv__GetRoutePlan_Request__Sequence * array = (geographic_msgs__srv__GetRoutePlan_Request__Sequence *)allocator.allocate(sizeof(geographic_msgs__srv__GetRoutePlan_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = geographic_msgs__srv__GetRoutePlan_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
geographic_msgs__srv__GetRoutePlan_Request__Sequence__destroy(geographic_msgs__srv__GetRoutePlan_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    geographic_msgs__srv__GetRoutePlan_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
geographic_msgs__srv__GetRoutePlan_Request__Sequence__are_equal(const geographic_msgs__srv__GetRoutePlan_Request__Sequence * lhs, const geographic_msgs__srv__GetRoutePlan_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!geographic_msgs__srv__GetRoutePlan_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
geographic_msgs__srv__GetRoutePlan_Request__Sequence__copy(
  const geographic_msgs__srv__GetRoutePlan_Request__Sequence * input,
  geographic_msgs__srv__GetRoutePlan_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(geographic_msgs__srv__GetRoutePlan_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    geographic_msgs__srv__GetRoutePlan_Request * data =
      (geographic_msgs__srv__GetRoutePlan_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!geographic_msgs__srv__GetRoutePlan_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          geographic_msgs__srv__GetRoutePlan_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!geographic_msgs__srv__GetRoutePlan_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"
// Member `plan`
#include "geographic_msgs/msg/detail/route_path__functions.h"

bool
geographic_msgs__srv__GetRoutePlan_Response__init(geographic_msgs__srv__GetRoutePlan_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    geographic_msgs__srv__GetRoutePlan_Response__fini(msg);
    return false;
  }
  // plan
  if (!geographic_msgs__msg__RoutePath__init(&msg->plan)) {
    geographic_msgs__srv__GetRoutePlan_Response__fini(msg);
    return false;
  }
  return true;
}

void
geographic_msgs__srv__GetRoutePlan_Response__fini(geographic_msgs__srv__GetRoutePlan_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // status
  rosidl_runtime_c__String__fini(&msg->status);
  // plan
  geographic_msgs__msg__RoutePath__fini(&msg->plan);
}

bool
geographic_msgs__srv__GetRoutePlan_Response__are_equal(const geographic_msgs__srv__GetRoutePlan_Response * lhs, const geographic_msgs__srv__GetRoutePlan_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // plan
  if (!geographic_msgs__msg__RoutePath__are_equal(
      &(lhs->plan), &(rhs->plan)))
  {
    return false;
  }
  return true;
}

bool
geographic_msgs__srv__GetRoutePlan_Response__copy(
  const geographic_msgs__srv__GetRoutePlan_Response * input,
  geographic_msgs__srv__GetRoutePlan_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // plan
  if (!geographic_msgs__msg__RoutePath__copy(
      &(input->plan), &(output->plan)))
  {
    return false;
  }
  return true;
}

geographic_msgs__srv__GetRoutePlan_Response *
geographic_msgs__srv__GetRoutePlan_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geographic_msgs__srv__GetRoutePlan_Response * msg = (geographic_msgs__srv__GetRoutePlan_Response *)allocator.allocate(sizeof(geographic_msgs__srv__GetRoutePlan_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(geographic_msgs__srv__GetRoutePlan_Response));
  bool success = geographic_msgs__srv__GetRoutePlan_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
geographic_msgs__srv__GetRoutePlan_Response__destroy(geographic_msgs__srv__GetRoutePlan_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    geographic_msgs__srv__GetRoutePlan_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
geographic_msgs__srv__GetRoutePlan_Response__Sequence__init(geographic_msgs__srv__GetRoutePlan_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geographic_msgs__srv__GetRoutePlan_Response * data = NULL;

  if (size) {
    data = (geographic_msgs__srv__GetRoutePlan_Response *)allocator.zero_allocate(size, sizeof(geographic_msgs__srv__GetRoutePlan_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = geographic_msgs__srv__GetRoutePlan_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        geographic_msgs__srv__GetRoutePlan_Response__fini(&data[i - 1]);
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
geographic_msgs__srv__GetRoutePlan_Response__Sequence__fini(geographic_msgs__srv__GetRoutePlan_Response__Sequence * array)
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
      geographic_msgs__srv__GetRoutePlan_Response__fini(&array->data[i]);
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

geographic_msgs__srv__GetRoutePlan_Response__Sequence *
geographic_msgs__srv__GetRoutePlan_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geographic_msgs__srv__GetRoutePlan_Response__Sequence * array = (geographic_msgs__srv__GetRoutePlan_Response__Sequence *)allocator.allocate(sizeof(geographic_msgs__srv__GetRoutePlan_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = geographic_msgs__srv__GetRoutePlan_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
geographic_msgs__srv__GetRoutePlan_Response__Sequence__destroy(geographic_msgs__srv__GetRoutePlan_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    geographic_msgs__srv__GetRoutePlan_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
geographic_msgs__srv__GetRoutePlan_Response__Sequence__are_equal(const geographic_msgs__srv__GetRoutePlan_Response__Sequence * lhs, const geographic_msgs__srv__GetRoutePlan_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!geographic_msgs__srv__GetRoutePlan_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
geographic_msgs__srv__GetRoutePlan_Response__Sequence__copy(
  const geographic_msgs__srv__GetRoutePlan_Response__Sequence * input,
  geographic_msgs__srv__GetRoutePlan_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(geographic_msgs__srv__GetRoutePlan_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    geographic_msgs__srv__GetRoutePlan_Response * data =
      (geographic_msgs__srv__GetRoutePlan_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!geographic_msgs__srv__GetRoutePlan_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          geographic_msgs__srv__GetRoutePlan_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!geographic_msgs__srv__GetRoutePlan_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "geographic_msgs/srv/detail/get_route_plan__functions.h"

bool
geographic_msgs__srv__GetRoutePlan_Event__init(geographic_msgs__srv__GetRoutePlan_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    geographic_msgs__srv__GetRoutePlan_Event__fini(msg);
    return false;
  }
  // request
  if (!geographic_msgs__srv__GetRoutePlan_Request__Sequence__init(&msg->request, 0)) {
    geographic_msgs__srv__GetRoutePlan_Event__fini(msg);
    return false;
  }
  // response
  if (!geographic_msgs__srv__GetRoutePlan_Response__Sequence__init(&msg->response, 0)) {
    geographic_msgs__srv__GetRoutePlan_Event__fini(msg);
    return false;
  }
  return true;
}

void
geographic_msgs__srv__GetRoutePlan_Event__fini(geographic_msgs__srv__GetRoutePlan_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  geographic_msgs__srv__GetRoutePlan_Request__Sequence__fini(&msg->request);
  // response
  geographic_msgs__srv__GetRoutePlan_Response__Sequence__fini(&msg->response);
}

bool
geographic_msgs__srv__GetRoutePlan_Event__are_equal(const geographic_msgs__srv__GetRoutePlan_Event * lhs, const geographic_msgs__srv__GetRoutePlan_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!geographic_msgs__srv__GetRoutePlan_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!geographic_msgs__srv__GetRoutePlan_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
geographic_msgs__srv__GetRoutePlan_Event__copy(
  const geographic_msgs__srv__GetRoutePlan_Event * input,
  geographic_msgs__srv__GetRoutePlan_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!geographic_msgs__srv__GetRoutePlan_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!geographic_msgs__srv__GetRoutePlan_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

geographic_msgs__srv__GetRoutePlan_Event *
geographic_msgs__srv__GetRoutePlan_Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geographic_msgs__srv__GetRoutePlan_Event * msg = (geographic_msgs__srv__GetRoutePlan_Event *)allocator.allocate(sizeof(geographic_msgs__srv__GetRoutePlan_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(geographic_msgs__srv__GetRoutePlan_Event));
  bool success = geographic_msgs__srv__GetRoutePlan_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
geographic_msgs__srv__GetRoutePlan_Event__destroy(geographic_msgs__srv__GetRoutePlan_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    geographic_msgs__srv__GetRoutePlan_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
geographic_msgs__srv__GetRoutePlan_Event__Sequence__init(geographic_msgs__srv__GetRoutePlan_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geographic_msgs__srv__GetRoutePlan_Event * data = NULL;

  if (size) {
    data = (geographic_msgs__srv__GetRoutePlan_Event *)allocator.zero_allocate(size, sizeof(geographic_msgs__srv__GetRoutePlan_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = geographic_msgs__srv__GetRoutePlan_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        geographic_msgs__srv__GetRoutePlan_Event__fini(&data[i - 1]);
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
geographic_msgs__srv__GetRoutePlan_Event__Sequence__fini(geographic_msgs__srv__GetRoutePlan_Event__Sequence * array)
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
      geographic_msgs__srv__GetRoutePlan_Event__fini(&array->data[i]);
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

geographic_msgs__srv__GetRoutePlan_Event__Sequence *
geographic_msgs__srv__GetRoutePlan_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  geographic_msgs__srv__GetRoutePlan_Event__Sequence * array = (geographic_msgs__srv__GetRoutePlan_Event__Sequence *)allocator.allocate(sizeof(geographic_msgs__srv__GetRoutePlan_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = geographic_msgs__srv__GetRoutePlan_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
geographic_msgs__srv__GetRoutePlan_Event__Sequence__destroy(geographic_msgs__srv__GetRoutePlan_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    geographic_msgs__srv__GetRoutePlan_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
geographic_msgs__srv__GetRoutePlan_Event__Sequence__are_equal(const geographic_msgs__srv__GetRoutePlan_Event__Sequence * lhs, const geographic_msgs__srv__GetRoutePlan_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!geographic_msgs__srv__GetRoutePlan_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
geographic_msgs__srv__GetRoutePlan_Event__Sequence__copy(
  const geographic_msgs__srv__GetRoutePlan_Event__Sequence * input,
  geographic_msgs__srv__GetRoutePlan_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(geographic_msgs__srv__GetRoutePlan_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    geographic_msgs__srv__GetRoutePlan_Event * data =
      (geographic_msgs__srv__GetRoutePlan_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!geographic_msgs__srv__GetRoutePlan_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          geographic_msgs__srv__GetRoutePlan_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!geographic_msgs__srv__GetRoutePlan_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
