// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from geographic_msgs:msg/GeoPoseWithCovariance.idl
// generated code does not contain a copyright notice

#include "geographic_msgs/msg/detail/geo_pose_with_covariance__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
const rosidl_type_hash_t *
geographic_msgs__msg__GeoPoseWithCovariance__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe5, 0xa0, 0x71, 0xa4, 0xc0, 0x61, 0x68, 0x83,
      0x77, 0xf8, 0x25, 0xb7, 0x77, 0x16, 0x6e, 0x80,
      0xc3, 0xe3, 0x80, 0xaa, 0x9e, 0x41, 0xe1, 0xfa,
      0xc0, 0x69, 0x5f, 0x54, 0x41, 0x5e, 0xe4, 0x74,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geographic_msgs/msg/detail/geo_point__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "geographic_msgs/msg/detail/geo_pose__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geographic_msgs__msg__GeoPoint__EXPECTED_HASH = {1, {
    0x60, 0x2c, 0x64, 0x7c, 0xf8, 0x7b, 0xbe, 0x95,
    0xa0, 0x23, 0x1b, 0x45, 0x9b, 0x5a, 0xc3, 0x00,
    0x51, 0x87, 0x5d, 0x07, 0xc0, 0xc7, 0x40, 0xb3,
    0x1a, 0xd7, 0xa8, 0xc4, 0x66, 0x2b, 0x97, 0x1e,
  }};
static const rosidl_type_hash_t geographic_msgs__msg__GeoPose__EXPECTED_HASH = {1, {
    0x80, 0x52, 0x78, 0x6d, 0x76, 0x63, 0xe2, 0x25,
    0xe3, 0x89, 0x26, 0xf7, 0xd0, 0x57, 0x16, 0x04,
    0x6c, 0x93, 0x15, 0x72, 0xc2, 0x5e, 0x55, 0x7d,
    0x4f, 0x70, 0xdc, 0xa5, 0x5b, 0x97, 0x26, 0x26,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
#endif

static char geographic_msgs__msg__GeoPoseWithCovariance__TYPE_NAME[] = "geographic_msgs/msg/GeoPoseWithCovariance";
static char geographic_msgs__msg__GeoPoint__TYPE_NAME[] = "geographic_msgs/msg/GeoPoint";
static char geographic_msgs__msg__GeoPose__TYPE_NAME[] = "geographic_msgs/msg/GeoPose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";

// Define type names, field names, and default values
static char geographic_msgs__msg__GeoPoseWithCovariance__FIELD_NAME__pose[] = "pose";
static char geographic_msgs__msg__GeoPoseWithCovariance__FIELD_NAME__covariance[] = "covariance";

static rosidl_runtime_c__type_description__Field geographic_msgs__msg__GeoPoseWithCovariance__FIELDS[] = {
  {
    {geographic_msgs__msg__GeoPoseWithCovariance__FIELD_NAME__pose, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geographic_msgs__msg__GeoPose__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__GeoPoseWithCovariance__FIELD_NAME__covariance, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      36,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription geographic_msgs__msg__GeoPoseWithCovariance__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geographic_msgs__msg__GeoPoint__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__GeoPose__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
geographic_msgs__msg__GeoPoseWithCovariance__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {geographic_msgs__msg__GeoPoseWithCovariance__TYPE_NAME, 41, 41},
      {geographic_msgs__msg__GeoPoseWithCovariance__FIELDS, 2, 2},
    },
    {geographic_msgs__msg__GeoPoseWithCovariance__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&geographic_msgs__msg__GeoPoint__EXPECTED_HASH, geographic_msgs__msg__GeoPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geographic_msgs__msg__GeoPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__GeoPose__EXPECTED_HASH, geographic_msgs__msg__GeoPose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geographic_msgs__msg__GeoPose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Geographic pose, using the WGS 84 reference ellipsoid.\n"
  "#\n"
  "# Orientation uses the East-North-Up (ENU) frame of reference.\n"
  "# (But, what about singularities at the poles?)\n"
  "\n"
  "GeoPose pose\n"
  "\n"
  "# Row-major representation of the 6x6 covariance matrix\n"
  "# The orientation parameters use a fixed-axis representation.\n"
  "# In order, the parameters are:\n"
  "# (Lat, Lon, Alt, rotation about E (East) axis, rotation about N (North) axis, rotation about U (Up) axis)\n"
  "float64[36] covariance";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
geographic_msgs__msg__GeoPoseWithCovariance__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {geographic_msgs__msg__GeoPoseWithCovariance__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 464, 464},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
geographic_msgs__msg__GeoPoseWithCovariance__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *geographic_msgs__msg__GeoPoseWithCovariance__get_individual_type_description_source(NULL),
    sources[1] = *geographic_msgs__msg__GeoPoint__get_individual_type_description_source(NULL);
    sources[2] = *geographic_msgs__msg__GeoPose__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
