// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from geographic_msgs:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#include "geographic_msgs/msg/detail/bounding_box__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
const rosidl_type_hash_t *
geographic_msgs__msg__BoundingBox__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x80, 0xa8, 0x58, 0x27, 0xe5, 0x95, 0x32, 0x5b,
      0xd0, 0x42, 0x7f, 0x2f, 0xa1, 0xaa, 0x38, 0xb7,
      0x0f, 0x12, 0xd9, 0x56, 0x40, 0xd1, 0x73, 0x9d,
      0xb5, 0x1f, 0xe0, 0x20, 0xa4, 0x07, 0xda, 0xa6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geographic_msgs/msg/detail/geo_point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geographic_msgs__msg__GeoPoint__EXPECTED_HASH = {1, {
    0x60, 0x2c, 0x64, 0x7c, 0xf8, 0x7b, 0xbe, 0x95,
    0xa0, 0x23, 0x1b, 0x45, 0x9b, 0x5a, 0xc3, 0x00,
    0x51, 0x87, 0x5d, 0x07, 0xc0, 0xc7, 0x40, 0xb3,
    0x1a, 0xd7, 0xa8, 0xc4, 0x66, 0x2b, 0x97, 0x1e,
  }};
#endif

static char geographic_msgs__msg__BoundingBox__TYPE_NAME[] = "geographic_msgs/msg/BoundingBox";
static char geographic_msgs__msg__GeoPoint__TYPE_NAME[] = "geographic_msgs/msg/GeoPoint";

// Define type names, field names, and default values
static char geographic_msgs__msg__BoundingBox__FIELD_NAME__min_pt[] = "min_pt";
static char geographic_msgs__msg__BoundingBox__FIELD_NAME__max_pt[] = "max_pt";

static rosidl_runtime_c__type_description__Field geographic_msgs__msg__BoundingBox__FIELDS[] = {
  {
    {geographic_msgs__msg__BoundingBox__FIELD_NAME__min_pt, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geographic_msgs__msg__GeoPoint__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__BoundingBox__FIELD_NAME__max_pt, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geographic_msgs__msg__GeoPoint__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription geographic_msgs__msg__BoundingBox__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geographic_msgs__msg__GeoPoint__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
geographic_msgs__msg__BoundingBox__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {geographic_msgs__msg__BoundingBox__TYPE_NAME, 31, 31},
      {geographic_msgs__msg__BoundingBox__FIELDS, 2, 2},
    },
    {geographic_msgs__msg__BoundingBox__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geographic_msgs__msg__GeoPoint__EXPECTED_HASH, geographic_msgs__msg__GeoPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geographic_msgs__msg__GeoPoint__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Geographic map bounding box. \n"
  "#\n"
  "# The two GeoPoints denote diagonally opposite corners of the box.\n"
  "#\n"
  "# If min_pt.latitude is NaN, the bounding box is \"global\", matching\n"
  "# any valid latitude, longitude and altitude.\n"
  "#\n"
  "# If min_pt.altitude is NaN, the bounding box is two-dimensional and\n"
  "# matches any altitude within the specified latitude and longitude\n"
  "# range.\n"
  "\n"
  "GeoPoint min_pt         # lowest and most Southwestern corner\n"
  "GeoPoint max_pt         # highest and most Northeastern corner";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
geographic_msgs__msg__BoundingBox__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {geographic_msgs__msg__BoundingBox__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 490, 490},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
geographic_msgs__msg__BoundingBox__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *geographic_msgs__msg__BoundingBox__get_individual_type_description_source(NULL),
    sources[1] = *geographic_msgs__msg__GeoPoint__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
