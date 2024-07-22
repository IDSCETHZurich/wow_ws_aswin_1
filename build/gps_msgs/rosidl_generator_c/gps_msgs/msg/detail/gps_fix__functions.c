// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gps_msgs:msg/GPSFix.idl
// generated code does not contain a copyright notice
#include "gps_msgs/msg/detail/gps_fix__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `status`
#include "gps_msgs/msg/detail/gps_status__functions.h"

bool
gps_msgs__msg__GPSFix__init(gps_msgs__msg__GPSFix * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    gps_msgs__msg__GPSFix__fini(msg);
    return false;
  }
  // status
  if (!gps_msgs__msg__GPSStatus__init(&msg->status)) {
    gps_msgs__msg__GPSFix__fini(msg);
    return false;
  }
  // latitude
  // longitude
  // altitude
  // track
  // speed
  // climb
  // pitch
  // roll
  // dip
  // time
  // gdop
  // pdop
  // hdop
  // vdop
  // tdop
  // err
  // err_horz
  // err_vert
  // err_track
  // err_speed
  // err_climb
  // err_time
  // err_pitch
  // err_roll
  // err_dip
  // position_covariance
  // position_covariance_type
  return true;
}

void
gps_msgs__msg__GPSFix__fini(gps_msgs__msg__GPSFix * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // status
  gps_msgs__msg__GPSStatus__fini(&msg->status);
  // latitude
  // longitude
  // altitude
  // track
  // speed
  // climb
  // pitch
  // roll
  // dip
  // time
  // gdop
  // pdop
  // hdop
  // vdop
  // tdop
  // err
  // err_horz
  // err_vert
  // err_track
  // err_speed
  // err_climb
  // err_time
  // err_pitch
  // err_roll
  // err_dip
  // position_covariance
  // position_covariance_type
}

bool
gps_msgs__msg__GPSFix__are_equal(const gps_msgs__msg__GPSFix * lhs, const gps_msgs__msg__GPSFix * rhs)
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
  // status
  if (!gps_msgs__msg__GPSStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
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
  // track
  if (lhs->track != rhs->track) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // climb
  if (lhs->climb != rhs->climb) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // dip
  if (lhs->dip != rhs->dip) {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  // gdop
  if (lhs->gdop != rhs->gdop) {
    return false;
  }
  // pdop
  if (lhs->pdop != rhs->pdop) {
    return false;
  }
  // hdop
  if (lhs->hdop != rhs->hdop) {
    return false;
  }
  // vdop
  if (lhs->vdop != rhs->vdop) {
    return false;
  }
  // tdop
  if (lhs->tdop != rhs->tdop) {
    return false;
  }
  // err
  if (lhs->err != rhs->err) {
    return false;
  }
  // err_horz
  if (lhs->err_horz != rhs->err_horz) {
    return false;
  }
  // err_vert
  if (lhs->err_vert != rhs->err_vert) {
    return false;
  }
  // err_track
  if (lhs->err_track != rhs->err_track) {
    return false;
  }
  // err_speed
  if (lhs->err_speed != rhs->err_speed) {
    return false;
  }
  // err_climb
  if (lhs->err_climb != rhs->err_climb) {
    return false;
  }
  // err_time
  if (lhs->err_time != rhs->err_time) {
    return false;
  }
  // err_pitch
  if (lhs->err_pitch != rhs->err_pitch) {
    return false;
  }
  // err_roll
  if (lhs->err_roll != rhs->err_roll) {
    return false;
  }
  // err_dip
  if (lhs->err_dip != rhs->err_dip) {
    return false;
  }
  // position_covariance
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->position_covariance[i] != rhs->position_covariance[i]) {
      return false;
    }
  }
  // position_covariance_type
  if (lhs->position_covariance_type != rhs->position_covariance_type) {
    return false;
  }
  return true;
}

bool
gps_msgs__msg__GPSFix__copy(
  const gps_msgs__msg__GPSFix * input,
  gps_msgs__msg__GPSFix * output)
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
  // status
  if (!gps_msgs__msg__GPSStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // latitude
  output->latitude = input->latitude;
  // longitude
  output->longitude = input->longitude;
  // altitude
  output->altitude = input->altitude;
  // track
  output->track = input->track;
  // speed
  output->speed = input->speed;
  // climb
  output->climb = input->climb;
  // pitch
  output->pitch = input->pitch;
  // roll
  output->roll = input->roll;
  // dip
  output->dip = input->dip;
  // time
  output->time = input->time;
  // gdop
  output->gdop = input->gdop;
  // pdop
  output->pdop = input->pdop;
  // hdop
  output->hdop = input->hdop;
  // vdop
  output->vdop = input->vdop;
  // tdop
  output->tdop = input->tdop;
  // err
  output->err = input->err;
  // err_horz
  output->err_horz = input->err_horz;
  // err_vert
  output->err_vert = input->err_vert;
  // err_track
  output->err_track = input->err_track;
  // err_speed
  output->err_speed = input->err_speed;
  // err_climb
  output->err_climb = input->err_climb;
  // err_time
  output->err_time = input->err_time;
  // err_pitch
  output->err_pitch = input->err_pitch;
  // err_roll
  output->err_roll = input->err_roll;
  // err_dip
  output->err_dip = input->err_dip;
  // position_covariance
  for (size_t i = 0; i < 9; ++i) {
    output->position_covariance[i] = input->position_covariance[i];
  }
  // position_covariance_type
  output->position_covariance_type = input->position_covariance_type;
  return true;
}

gps_msgs__msg__GPSFix *
gps_msgs__msg__GPSFix__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gps_msgs__msg__GPSFix * msg = (gps_msgs__msg__GPSFix *)allocator.allocate(sizeof(gps_msgs__msg__GPSFix), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gps_msgs__msg__GPSFix));
  bool success = gps_msgs__msg__GPSFix__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gps_msgs__msg__GPSFix__destroy(gps_msgs__msg__GPSFix * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gps_msgs__msg__GPSFix__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gps_msgs__msg__GPSFix__Sequence__init(gps_msgs__msg__GPSFix__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gps_msgs__msg__GPSFix * data = NULL;

  if (size) {
    data = (gps_msgs__msg__GPSFix *)allocator.zero_allocate(size, sizeof(gps_msgs__msg__GPSFix), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gps_msgs__msg__GPSFix__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gps_msgs__msg__GPSFix__fini(&data[i - 1]);
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
gps_msgs__msg__GPSFix__Sequence__fini(gps_msgs__msg__GPSFix__Sequence * array)
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
      gps_msgs__msg__GPSFix__fini(&array->data[i]);
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

gps_msgs__msg__GPSFix__Sequence *
gps_msgs__msg__GPSFix__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gps_msgs__msg__GPSFix__Sequence * array = (gps_msgs__msg__GPSFix__Sequence *)allocator.allocate(sizeof(gps_msgs__msg__GPSFix__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gps_msgs__msg__GPSFix__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gps_msgs__msg__GPSFix__Sequence__destroy(gps_msgs__msg__GPSFix__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gps_msgs__msg__GPSFix__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gps_msgs__msg__GPSFix__Sequence__are_equal(const gps_msgs__msg__GPSFix__Sequence * lhs, const gps_msgs__msg__GPSFix__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gps_msgs__msg__GPSFix__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gps_msgs__msg__GPSFix__Sequence__copy(
  const gps_msgs__msg__GPSFix__Sequence * input,
  gps_msgs__msg__GPSFix__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gps_msgs__msg__GPSFix);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gps_msgs__msg__GPSFix * data =
      (gps_msgs__msg__GPSFix *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gps_msgs__msg__GPSFix__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gps_msgs__msg__GPSFix__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gps_msgs__msg__GPSFix__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
