// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from nmea_msgs:msg/Gpzda.idl
// generated code does not contain a copyright notice

#include "nmea_msgs/msg/detail/gpzda__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_nmea_msgs
const rosidl_type_hash_t *
nmea_msgs__msg__Gpzda__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa8, 0x97, 0x65, 0x4f, 0x5c, 0x3e, 0xbf, 0x15,
      0x21, 0x38, 0x48, 0x6e, 0x81, 0xfe, 0xe6, 0xbb,
      0x57, 0x15, 0x3c, 0x2c, 0x26, 0x0a, 0xa8, 0x52,
      0x43, 0xbd, 0x5c, 0xcc, 0xa4, 0x0c, 0xf1, 0x5a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char nmea_msgs__msg__Gpzda__TYPE_NAME[] = "nmea_msgs/msg/Gpzda";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char nmea_msgs__msg__Gpzda__FIELD_NAME__header[] = "header";
static char nmea_msgs__msg__Gpzda__FIELD_NAME__message_id[] = "message_id";
static char nmea_msgs__msg__Gpzda__FIELD_NAME__utc_seconds[] = "utc_seconds";
static char nmea_msgs__msg__Gpzda__FIELD_NAME__day[] = "day";
static char nmea_msgs__msg__Gpzda__FIELD_NAME__month[] = "month";
static char nmea_msgs__msg__Gpzda__FIELD_NAME__year[] = "year";
static char nmea_msgs__msg__Gpzda__FIELD_NAME__hour_offset_gmt[] = "hour_offset_gmt";
static char nmea_msgs__msg__Gpzda__FIELD_NAME__minute_offset_gmt[] = "minute_offset_gmt";

static rosidl_runtime_c__type_description__Field nmea_msgs__msg__Gpzda__FIELDS[] = {
  {
    {nmea_msgs__msg__Gpzda__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {nmea_msgs__msg__Gpzda__FIELD_NAME__message_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nmea_msgs__msg__Gpzda__FIELD_NAME__utc_seconds, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nmea_msgs__msg__Gpzda__FIELD_NAME__day, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nmea_msgs__msg__Gpzda__FIELD_NAME__month, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nmea_msgs__msg__Gpzda__FIELD_NAME__year, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nmea_msgs__msg__Gpzda__FIELD_NAME__hour_offset_gmt, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nmea_msgs__msg__Gpzda__FIELD_NAME__minute_offset_gmt, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription nmea_msgs__msg__Gpzda__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nmea_msgs__msg__Gpzda__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nmea_msgs__msg__Gpzda__TYPE_NAME, 19, 19},
      {nmea_msgs__msg__Gpzda__FIELDS, 8, 8},
    },
    {nmea_msgs__msg__Gpzda__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Message from GPRMC NMEA String\n"
  "std_msgs/Header header\n"
  "\n"
  "string message_id\n"
  "\n"
  "uint32 utc_seconds\n"
  "\n"
  "uint8 day\n"
  "uint8 month\n"
  "uint16 year\n"
  "\n"
  "# Local time zone offset from GMT (0 to +/-13 hr)\n"
  "int8 hour_offset_gmt\n"
  "\n"
  "# Local time zone offset from GMT (0 to 59 minutes)\n"
  "uint8 minute_offset_gmt";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
nmea_msgs__msg__Gpzda__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nmea_msgs__msg__Gpzda__TYPE_NAME, 19, 19},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 279, 279},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nmea_msgs__msg__Gpzda__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nmea_msgs__msg__Gpzda__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
