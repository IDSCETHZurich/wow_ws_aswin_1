// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from geographic_msgs:msg/GeoPoint.idl
// generated code does not contain a copyright notice

#include "geographic_msgs/msg/detail/geo_point__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
const rosidl_type_hash_t *
geographic_msgs__msg__GeoPoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x60, 0x2c, 0x64, 0x7c, 0xf8, 0x7b, 0xbe, 0x95,
      0xa0, 0x23, 0x1b, 0x45, 0x9b, 0x5a, 0xc3, 0x00,
      0x51, 0x87, 0x5d, 0x07, 0xc0, 0xc7, 0x40, 0xb3,
      0x1a, 0xd7, 0xa8, 0xc4, 0x66, 0x2b, 0x97, 0x1e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char geographic_msgs__msg__GeoPoint__TYPE_NAME[] = "geographic_msgs/msg/GeoPoint";

// Define type names, field names, and default values
static char geographic_msgs__msg__GeoPoint__FIELD_NAME__latitude[] = "latitude";
static char geographic_msgs__msg__GeoPoint__FIELD_NAME__longitude[] = "longitude";
static char geographic_msgs__msg__GeoPoint__FIELD_NAME__altitude[] = "altitude";

static rosidl_runtime_c__type_description__Field geographic_msgs__msg__GeoPoint__FIELDS[] = {
  {
    {geographic_msgs__msg__GeoPoint__FIELD_NAME__latitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__GeoPoint__FIELD_NAME__longitude, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__GeoPoint__FIELD_NAME__altitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
geographic_msgs__msg__GeoPoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {geographic_msgs__msg__GeoPoint__TYPE_NAME, 28, 28},
      {geographic_msgs__msg__GeoPoint__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Geographic point, using the WGS 84 reference ellipsoid.\n"
  "\n"
  "# Latitude [degrees]. Positive is north of equator; negative is south\n"
  "# (-90.0 <= latitude <= +90.0).\n"
  "float64 latitude\n"
  "\n"
  "# Longitude [degrees]. Positive is east of prime meridian; negative is\n"
  "# west (-180.0 <= longitude <= +180.0). At the poles, latitude is -90.0 or\n"
  "# +90.0, and longitude is irrelevant, but must be in range.\n"
  "float64 longitude\n"
  "\n"
  "# Altitude [m]. Positive is above the WGS 84 ellipsoid (NaN if unspecified).\n"
  "float64 altitude";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
geographic_msgs__msg__GeoPoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {geographic_msgs__msg__GeoPoint__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 498, 498},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
geographic_msgs__msg__GeoPoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *geographic_msgs__msg__GeoPoint__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
