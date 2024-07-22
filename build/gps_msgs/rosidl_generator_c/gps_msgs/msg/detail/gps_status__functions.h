// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from gps_msgs:msg/GPSStatus.idl
// generated code does not contain a copyright notice

#ifndef GPS_MSGS__MSG__DETAIL__GPS_STATUS__FUNCTIONS_H_
#define GPS_MSGS__MSG__DETAIL__GPS_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "gps_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "gps_msgs/msg/detail/gps_status__struct.h"

/// Initialize msg/GPSStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gps_msgs__msg__GPSStatus
 * )) before or use
 * gps_msgs__msg__GPSStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_msgs
bool
gps_msgs__msg__GPSStatus__init(gps_msgs__msg__GPSStatus * msg);

/// Finalize msg/GPSStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_msgs
void
gps_msgs__msg__GPSStatus__fini(gps_msgs__msg__GPSStatus * msg);

/// Create msg/GPSStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gps_msgs__msg__GPSStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_msgs
gps_msgs__msg__GPSStatus *
gps_msgs__msg__GPSStatus__create();

/// Destroy msg/GPSStatus message.
/**
 * It calls
 * gps_msgs__msg__GPSStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_msgs
void
gps_msgs__msg__GPSStatus__destroy(gps_msgs__msg__GPSStatus * msg);

/// Check for msg/GPSStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_msgs
bool
gps_msgs__msg__GPSStatus__are_equal(const gps_msgs__msg__GPSStatus * lhs, const gps_msgs__msg__GPSStatus * rhs);

/// Copy a msg/GPSStatus message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_msgs
bool
gps_msgs__msg__GPSStatus__copy(
  const gps_msgs__msg__GPSStatus * input,
  gps_msgs__msg__GPSStatus * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_gps_msgs
const rosidl_type_hash_t *
gps_msgs__msg__GPSStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_gps_msgs
const rosidl_runtime_c__type_description__TypeDescription *
gps_msgs__msg__GPSStatus__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_gps_msgs
const rosidl_runtime_c__type_description__TypeSource *
gps_msgs__msg__GPSStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_gps_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
gps_msgs__msg__GPSStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/GPSStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * gps_msgs__msg__GPSStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_msgs
bool
gps_msgs__msg__GPSStatus__Sequence__init(gps_msgs__msg__GPSStatus__Sequence * array, size_t size);

/// Finalize array of msg/GPSStatus messages.
/**
 * It calls
 * gps_msgs__msg__GPSStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_msgs
void
gps_msgs__msg__GPSStatus__Sequence__fini(gps_msgs__msg__GPSStatus__Sequence * array);

/// Create array of msg/GPSStatus messages.
/**
 * It allocates the memory for the array and calls
 * gps_msgs__msg__GPSStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_msgs
gps_msgs__msg__GPSStatus__Sequence *
gps_msgs__msg__GPSStatus__Sequence__create(size_t size);

/// Destroy array of msg/GPSStatus messages.
/**
 * It calls
 * gps_msgs__msg__GPSStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_msgs
void
gps_msgs__msg__GPSStatus__Sequence__destroy(gps_msgs__msg__GPSStatus__Sequence * array);

/// Check for msg/GPSStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_msgs
bool
gps_msgs__msg__GPSStatus__Sequence__are_equal(const gps_msgs__msg__GPSStatus__Sequence * lhs, const gps_msgs__msg__GPSStatus__Sequence * rhs);

/// Copy an array of msg/GPSStatus messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gps_msgs
bool
gps_msgs__msg__GPSStatus__Sequence__copy(
  const gps_msgs__msg__GPSStatus__Sequence * input,
  gps_msgs__msg__GPSStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GPS_MSGS__MSG__DETAIL__GPS_STATUS__FUNCTIONS_H_
