// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from geographic_msgs:msg/RouteSegment.idl
// generated code does not contain a copyright notice

#include "geographic_msgs/msg/detail/route_segment__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
const rosidl_type_hash_t *
geographic_msgs__msg__RouteSegment__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc9, 0x3d, 0x23, 0xba, 0xbd, 0x3c, 0xe2, 0x0d,
      0xe7, 0x19, 0x0f, 0xd4, 0x27, 0xc1, 0xeb, 0x5c,
      0x0b, 0x93, 0x47, 0xef, 0x43, 0xe1, 0x29, 0x2c,
      0x34, 0x37, 0xbf, 0x6a, 0xaa, 0x45, 0xee, 0x57,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geographic_msgs/msg/detail/key_value__functions.h"
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
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

static char geographic_msgs__msg__RouteSegment__TYPE_NAME[] = "geographic_msgs/msg/RouteSegment";
static char geographic_msgs__msg__KeyValue__TYPE_NAME[] = "geographic_msgs/msg/KeyValue";
static char unique_identifier_msgs__msg__UUID__TYPE_NAME[] = "unique_identifier_msgs/msg/UUID";

// Define type names, field names, and default values
static char geographic_msgs__msg__RouteSegment__FIELD_NAME__id[] = "id";
static char geographic_msgs__msg__RouteSegment__FIELD_NAME__start[] = "start";
static char geographic_msgs__msg__RouteSegment__FIELD_NAME__end[] = "end";
static char geographic_msgs__msg__RouteSegment__FIELD_NAME__props[] = "props";

static rosidl_runtime_c__type_description__Field geographic_msgs__msg__RouteSegment__FIELDS[] = {
  {
    {geographic_msgs__msg__RouteSegment__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {unique_identifier_msgs__msg__UUID__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__RouteSegment__FIELD_NAME__start, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {unique_identifier_msgs__msg__UUID__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__RouteSegment__FIELD_NAME__end, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {unique_identifier_msgs__msg__UUID__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__RouteSegment__FIELD_NAME__props, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geographic_msgs__msg__KeyValue__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription geographic_msgs__msg__RouteSegment__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
geographic_msgs__msg__RouteSegment__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {geographic_msgs__msg__RouteSegment__TYPE_NAME, 32, 32},
      {geographic_msgs__msg__RouteSegment__FIELDS, 4, 4},
    },
    {geographic_msgs__msg__RouteSegment__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&geographic_msgs__msg__KeyValue__EXPECTED_HASH, geographic_msgs__msg__KeyValue__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geographic_msgs__msg__KeyValue__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&unique_identifier_msgs__msg__UUID__EXPECTED_HASH, unique_identifier_msgs__msg__UUID__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = unique_identifier_msgs__msg__UUID__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Route network segment.\n"
  "#\n"
  "# This is one directed edge of a RouteNetwork graph. It represents a\n"
  "# known path from one way point to another.  If the path is two-way,\n"
  "# there will be another RouteSegment with \"start\" and \"end\" reversed.\n"
  "\n"
  "unique_identifier_msgs/UUID id           # Unique identifier for this segment\n"
  "\n"
  "unique_identifier_msgs/UUID start        # beginning way point of segment\n"
  "unique_identifier_msgs/UUID end          # ending way point of segment\n"
  "\n"
  "KeyValue[] props                # segment properties";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
geographic_msgs__msg__RouteSegment__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {geographic_msgs__msg__RouteSegment__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 514, 514},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
geographic_msgs__msg__RouteSegment__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *geographic_msgs__msg__RouteSegment__get_individual_type_description_source(NULL),
    sources[1] = *geographic_msgs__msg__KeyValue__get_individual_type_description_source(NULL);
    sources[2] = *unique_identifier_msgs__msg__UUID__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
