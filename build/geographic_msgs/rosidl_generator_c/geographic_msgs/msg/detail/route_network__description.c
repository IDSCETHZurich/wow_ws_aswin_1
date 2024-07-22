// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from geographic_msgs:msg/RouteNetwork.idl
// generated code does not contain a copyright notice

#include "geographic_msgs/msg/detail/route_network__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
const rosidl_type_hash_t *
geographic_msgs__msg__RouteNetwork__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa5, 0x95, 0x45, 0x21, 0x93, 0x89, 0xa5, 0x9c,
      0xb7, 0x0b, 0xa0, 0x2c, 0x18, 0xb3, 0xb1, 0x54,
      0x48, 0xd6, 0x81, 0xa1, 0xc9, 0xcd, 0x19, 0xf5,
      0xe2, 0x3a, 0x30, 0x6a, 0xce, 0xa6, 0xff, 0xba,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geographic_msgs/msg/detail/key_value__functions.h"
#include "geographic_msgs/msg/detail/way_point__functions.h"
#include "geographic_msgs/msg/detail/route_segment__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geographic_msgs/msg/detail/geo_point__functions.h"
#include "geographic_msgs/msg/detail/bounding_box__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geographic_msgs__msg__BoundingBox__EXPECTED_HASH = {1, {
    0x80, 0xa8, 0x58, 0x27, 0xe5, 0x95, 0x32, 0x5b,
    0xd0, 0x42, 0x7f, 0x2f, 0xa1, 0xaa, 0x38, 0xb7,
    0x0f, 0x12, 0xd9, 0x56, 0x40, 0xd1, 0x73, 0x9d,
    0xb5, 0x1f, 0xe0, 0x20, 0xa4, 0x07, 0xda, 0xa6,
  }};
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
static const rosidl_type_hash_t geographic_msgs__msg__RouteSegment__EXPECTED_HASH = {1, {
    0xc9, 0x3d, 0x23, 0xba, 0xbd, 0x3c, 0xe2, 0x0d,
    0xe7, 0x19, 0x0f, 0xd4, 0x27, 0xc1, 0xeb, 0x5c,
    0x0b, 0x93, 0x47, 0xef, 0x43, 0xe1, 0x29, 0x2c,
    0x34, 0x37, 0xbf, 0x6a, 0xaa, 0x45, 0xee, 0x57,
  }};
static const rosidl_type_hash_t geographic_msgs__msg__WayPoint__EXPECTED_HASH = {1, {
    0xaf, 0x6f, 0x3c, 0x9c, 0x30, 0xdb, 0x80, 0xcb,
    0x86, 0x80, 0xf6, 0x0e, 0xf4, 0x0e, 0xc5, 0xe1,
    0x1c, 0x9d, 0x4b, 0x4d, 0x24, 0x6a, 0xa6, 0x64,
    0x47, 0x89, 0x88, 0xf5, 0x09, 0xb9, 0x63, 0x47,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
static const rosidl_type_hash_t unique_identifier_msgs__msg__UUID__EXPECTED_HASH = {1, {
    0x1b, 0x8e, 0x8a, 0xca, 0x95, 0x8c, 0xbe, 0xa2,
    0x8f, 0xe6, 0xef, 0x60, 0xbf, 0x6c, 0x19, 0xb6,
    0x83, 0xc9, 0x7a, 0x9e, 0xf6, 0x0b, 0xb3, 0x47,
    0x52, 0x06, 0x7d, 0x0f, 0x2f, 0x7a, 0xb4, 0x37,
  }};
#endif

static char geographic_msgs__msg__RouteNetwork__TYPE_NAME[] = "geographic_msgs/msg/RouteNetwork";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geographic_msgs__msg__BoundingBox__TYPE_NAME[] = "geographic_msgs/msg/BoundingBox";
static char geographic_msgs__msg__GeoPoint__TYPE_NAME[] = "geographic_msgs/msg/GeoPoint";
static char geographic_msgs__msg__KeyValue__TYPE_NAME[] = "geographic_msgs/msg/KeyValue";
static char geographic_msgs__msg__RouteSegment__TYPE_NAME[] = "geographic_msgs/msg/RouteSegment";
static char geographic_msgs__msg__WayPoint__TYPE_NAME[] = "geographic_msgs/msg/WayPoint";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";
static char unique_identifier_msgs__msg__UUID__TYPE_NAME[] = "unique_identifier_msgs/msg/UUID";

// Define type names, field names, and default values
static char geographic_msgs__msg__RouteNetwork__FIELD_NAME__header[] = "header";
static char geographic_msgs__msg__RouteNetwork__FIELD_NAME__id[] = "id";
static char geographic_msgs__msg__RouteNetwork__FIELD_NAME__bounds[] = "bounds";
static char geographic_msgs__msg__RouteNetwork__FIELD_NAME__points[] = "points";
static char geographic_msgs__msg__RouteNetwork__FIELD_NAME__segments[] = "segments";
static char geographic_msgs__msg__RouteNetwork__FIELD_NAME__props[] = "props";

static rosidl_runtime_c__type_description__Field geographic_msgs__msg__RouteNetwork__FIELDS[] = {
  {
    {geographic_msgs__msg__RouteNetwork__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__RouteNetwork__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {unique_identifier_msgs__msg__UUID__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__RouteNetwork__FIELD_NAME__bounds, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geographic_msgs__msg__BoundingBox__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__RouteNetwork__FIELD_NAME__points, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geographic_msgs__msg__WayPoint__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__RouteNetwork__FIELD_NAME__segments, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geographic_msgs__msg__RouteSegment__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__RouteNetwork__FIELD_NAME__props, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geographic_msgs__msg__KeyValue__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription geographic_msgs__msg__RouteNetwork__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__BoundingBox__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__GeoPoint__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__KeyValue__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__RouteSegment__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__WayPoint__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {unique_identifier_msgs__msg__UUID__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
geographic_msgs__msg__RouteNetwork__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {geographic_msgs__msg__RouteNetwork__TYPE_NAME, 32, 32},
      {geographic_msgs__msg__RouteNetwork__FIELDS, 6, 6},
    },
    {geographic_msgs__msg__RouteNetwork__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__BoundingBox__EXPECTED_HASH, geographic_msgs__msg__BoundingBox__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geographic_msgs__msg__BoundingBox__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__GeoPoint__EXPECTED_HASH, geographic_msgs__msg__GeoPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geographic_msgs__msg__GeoPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__KeyValue__EXPECTED_HASH, geographic_msgs__msg__KeyValue__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geographic_msgs__msg__KeyValue__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__RouteSegment__EXPECTED_HASH, geographic_msgs__msg__RouteSegment__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geographic_msgs__msg__RouteSegment__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__WayPoint__EXPECTED_HASH, geographic_msgs__msg__WayPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geographic_msgs__msg__WayPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&unique_identifier_msgs__msg__UUID__EXPECTED_HASH, unique_identifier_msgs__msg__UUID__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = unique_identifier_msgs__msg__UUID__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Geographic map route network.\n"
  "#\n"
  "# A directed graph of WayPoint nodes and RouteSegment edges.  This\n"
  "# information is extracted from the more-detailed contents of a\n"
  "# GeographicMap.  A RouteNetwork contains only the way points and\n"
  "# route segments of interest for path planning.\n"
  "\n"
  "std_msgs/Header          header\n"
  "\n"
  "unique_identifier_msgs/UUID id    # This route network identifier\n"
  "BoundingBox     bounds   # 2D bounding box for network\n"
  "\n"
  "WayPoint[]      points   # Way points in this network\n"
  "RouteSegment[]  segments # Directed edges of this network\n"
  "\n"
  "KeyValue[]      props    # Network key/value properties";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
geographic_msgs__msg__RouteNetwork__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {geographic_msgs__msg__RouteNetwork__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 604, 604},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
geographic_msgs__msg__RouteNetwork__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *geographic_msgs__msg__RouteNetwork__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geographic_msgs__msg__BoundingBox__get_individual_type_description_source(NULL);
    sources[3] = *geographic_msgs__msg__GeoPoint__get_individual_type_description_source(NULL);
    sources[4] = *geographic_msgs__msg__KeyValue__get_individual_type_description_source(NULL);
    sources[5] = *geographic_msgs__msg__RouteSegment__get_individual_type_description_source(NULL);
    sources[6] = *geographic_msgs__msg__WayPoint__get_individual_type_description_source(NULL);
    sources[7] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[8] = *unique_identifier_msgs__msg__UUID__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
