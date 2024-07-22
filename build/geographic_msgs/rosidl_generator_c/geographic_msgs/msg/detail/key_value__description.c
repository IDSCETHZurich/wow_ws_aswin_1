// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from geographic_msgs:msg/KeyValue.idl
// generated code does not contain a copyright notice

#include "geographic_msgs/msg/detail/key_value__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
const rosidl_type_hash_t *
geographic_msgs__msg__KeyValue__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7b, 0x60, 0xe4, 0x65, 0xab, 0x0a, 0x5d, 0x81,
      0x08, 0x59, 0x57, 0x62, 0xd0, 0x5e, 0xe5, 0xf8,
      0xc9, 0xda, 0x8b, 0x7f, 0xfe, 0xd9, 0x21, 0xd6,
      0xf9, 0x12, 0x62, 0xf3, 0x84, 0xbe, 0xe2, 0x4b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char geographic_msgs__msg__KeyValue__TYPE_NAME[] = "geographic_msgs/msg/KeyValue";

// Define type names, field names, and default values
static char geographic_msgs__msg__KeyValue__FIELD_NAME__key[] = "key";
static char geographic_msgs__msg__KeyValue__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field geographic_msgs__msg__KeyValue__FIELDS[] = {
  {
    {geographic_msgs__msg__KeyValue__FIELD_NAME__key, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__KeyValue__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
geographic_msgs__msg__KeyValue__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {geographic_msgs__msg__KeyValue__TYPE_NAME, 28, 28},
      {geographic_msgs__msg__KeyValue__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Geographic map tag (key, value) pair\n"
  "#\n"
  "# This is equivalent to diagnostic_msgs/KeyValue, repeated here to\n"
  "# avoid introducing a trivial stack dependency.\n"
  "\n"
  "string key                     # tag label\n"
  "string value                   # corresponding value";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
geographic_msgs__msg__KeyValue__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {geographic_msgs__msg__KeyValue__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 253, 253},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
geographic_msgs__msg__KeyValue__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *geographic_msgs__msg__KeyValue__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
