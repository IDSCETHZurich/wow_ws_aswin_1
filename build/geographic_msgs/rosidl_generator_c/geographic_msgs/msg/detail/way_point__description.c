// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from geographic_msgs:msg/WayPoint.idl
// generated code does not contain a copyright notice

#include "geographic_msgs/msg/detail/way_point__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
const rosidl_type_hash_t *
geographic_msgs__msg__WayPoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xaf, 0x6f, 0x3c, 0x9c, 0x30, 0xdb, 0x80, 0xcb,
      0x86, 0x80, 0xf6, 0x0e, 0xf4, 0x0e, 0xc5, 0xe1,
      0x1c, 0x9d, 0x4b, 0x4d, 0x24, 0x6a, 0xa6, 0x64,
      0x47, 0x89, 0x88, 0xf5, 0x09, 0xb9, 0x63, 0x47,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geographic_msgs/msg/detail/key_value__functions.h"
#include "geographic_msgs/msg/detail/geo_point__functions.h"
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geographic_msgs__msg__GeoPoint__EXPECTED_HASH = {1, {
    0x60, 0x2c, 0x64, 0x7c, 0xf8, 0x7b, 0xbe, 0x95,
    0xa0, 0x23, 0x1b, 0x45, 0x9b, 0x5a, 0xc3, 0x00,
    0x51, 0x87, 0x5d, 0x07, 0xc0, 0xc7, 0x40, 0xb3,
    0x1a, 0xd7, 0xa8, 0xc4, 0x66, 0x2b, 0x97, 0x1e,
  }};
static const rosidl_type_hash_t geographic_msgs__msg__KeyValue__EXPECTED_HASH = {1, {
    0x7b, 0x60, 0xe4, 0x65, 0xab, 0x0a, 0x5d, 0x81,
    0x08, 0x59, 0x57, 0x62, 0xd0, 0x5e, 0xe5, 0xf8,
    0xc9, 0xda, 0x8b, 0x7f, 0xfe, 0xd9, 0x21, 0xd6,
    0xf9, 0x12, 0x62, 0xf3, 0x84, 0xbe, 0xe2, 0x4b,
  }};
static const rosidl_type_hash_t unique_identifier_msgs__msg__UUID__EXPECTED_HASH = {1, {
    0x1b, 0x8e, 0x8a, 0xca, 0x95, 0x8c, 0xbe, 0xa2,
    0x8f, 0xe6, 0xef, 0x60, 0xbf, 0x6c, 0x19, 0xb6,
    0x83, 0xc9, 0x7a, 0x9e, 0xf6, 0x0b, 0xb3, 0x47,
    0x52, 0x06, 0x7d, 0x0f, 0x2f, 0x7a, 0xb4, 0x37,
  }};
#endif

static char geographic_msgs__msg__WayPoint__TYPE_NAME[] = "geographic_msgs/msg/WayPoint";
static char geographic_msgs__msg__GeoPoint__TYPE_NAME[] = "geographic_msgs/msg/GeoPoint";
static char geographic_msgs__msg__KeyValue__TYPE_NAME[] = "geographic_msgs/msg/KeyValue";
static char unique_identifier_msgs__msg__UUID__TYPE_NAME[] = "unique_identifier_msgs/msg/UUID";

// Define type names, field names, and default values
static char geographic_msgs__msg__WayPoint__FIELD_NAME__id[] = "id";
static char geographic_msgs__msg__WayPoint__FIELD_NAME__position[] = "position";
static char geographic_msgs__msg__WayPoint__FIELD_NAME__props[] = "props";

static rosidl_runtime_c__type_description__Field geographic_msgs__msg__WayPoint__FIELDS[] = {
  {
    {geographic_msgs__msg__WayPoint__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {unique_identifier_msgs__msg__UUID__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__WayPoint__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geographic_msgs__msg__GeoPoint__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__WayPoint__FIELD_NAME__props, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geographic_msgs__msg__KeyValue__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription geographic_msgs__msg__WayPoint__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geographic_msgs__msg__GeoPoint__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__KeyValue__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {unique_identifier_msgs__msg__UUID__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
geographic_msgs__msg__WayPoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {geographic_msgs__msg__WayPoint__TYPE_NAME, 28, 28},
      {geographic_msgs__msg__WayPoint__FIELDS, 3, 3},
    },
    {geographic_msgs__msg__WayPoint__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&geographic_msgs__msg__GeoPoint__EXPECTED_HASH, geographic_msgs__msg__GeoPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geographic_msgs__msg__GeoPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__KeyValue__EXPECTED_HASH, geographic_msgs__msg__KeyValue__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geographic_msgs__msg__KeyValue__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&unique_identifier_msgs__msg__UUID__EXPECTED_HASH, unique_identifier_msgs__msg__UUID__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = unique_identifier_msgs__msg__UUID__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Way-point element for a geographic map.\n"
  "\n"
  "unique_identifier_msgs/UUID id   # Unique way-point identifier\n"
  "GeoPoint   position     # Position relative to WGS 84 ellipsoid\n"
  "KeyValue[] props        # Key/value properties for this point";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
geographic_msgs__msg__WayPoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {geographic_msgs__msg__WayPoint__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 232, 232},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
geographic_msgs__msg__WayPoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *geographic_msgs__msg__WayPoint__get_individual_type_description_source(NULL),
    sources[1] = *geographic_msgs__msg__GeoPoint__get_individual_type_description_source(NULL);
    sources[2] = *geographic_msgs__msg__KeyValue__get_individual_type_description_source(NULL);
    sources[3] = *unique_identifier_msgs__msg__UUID__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
