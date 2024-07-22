// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from nmea_msgs:msg/Gprmc.idl
// generated code does not contain a copyright notice

#include "nmea_msgs/msg/detail/gprmc__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_nmea_msgs
const rosidl_type_hash_t *
nmea_msgs__msg__Gprmc__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfe, 0x34, 0x47, 0x43, 0xda, 0xdf, 0xbc, 0xee,
      0xa4, 0xc4, 0xf6, 0x52, 0x22, 0x8f, 0x97, 0x66,
      0xd8, 0xa0, 0x26, 0x4d, 0xcb, 0x68, 0xff, 0x8c,
      0x12, 0xde, 0x09, 0xde, 0xa1, 0x54, 0xb3, 0xca,
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

static char nmea_msgs__msg__Gprmc__TYPE_NAME[] = "nmea_msgs/msg/Gprmc";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char nmea_msgs__msg__Gprmc__FIELD_NAME__header[] = "header";
static char nmea_msgs__msg__Gprmc__FIELD_NAME__message_id[] = "message_id";
static char nmea_msgs__msg__Gprmc__FIELD_NAME__utc_seconds[] = "utc_seconds";
static char nmea_msgs__msg__Gprmc__FIELD_NAME__position_status[] = "position_status";
static char nmea_msgs__msg__Gprmc__FIELD_NAME__lat[] = "lat";
static char nmea_msgs__msg__Gprmc__FIELD_NAME__lon[] = "lon";
static char nmea_msgs__msg__Gprmc__FIELD_NAME__lat_dir[] = "lat_dir";
static char nmea_msgs__msg__Gprmc__FIELD_NAME__lon_dir[] = "lon_dir";
static char nmea_msgs__msg__Gprmc__FIELD_NAME__speed[] = "speed";
static char nmea_msgs__msg__Gprmc__FIELD_NAME__track[] = "track";
static char nmea_msgs__msg__Gprmc__FIELD_NAME__date[] = "date";
static char nmea_msgs__msg__Gprmc__FIELD_NAME__mag_var[] = "mag_var";
static char nmea_msgs__msg__Gprmc__FIELD_NAME__mag_var_direction[] = "mag_var_direction";
static char nmea_msgs__msg__Gprmc__FIELD_NAME__mode_indicator[] = "mode_indicator";

static rosidl_runtime_c__type_description__Field nmea_msgs__msg__Gprmc__FIELDS[] = {
  {
    {nmea_msgs__msg__Gprmc__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {nmea_msgs__msg__Gprmc__FIELD_NAME__message_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nmea_msgs__msg__Gprmc__FIELD_NAME__utc_seconds, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nmea_msgs__msg__Gprmc__FIELD_NAME__position_status, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nmea_msgs__msg__Gprmc__FIELD_NAME__lat, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nmea_msgs__msg__Gprmc__FIELD_NAME__lon, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nmea_msgs__msg__Gprmc__FIELD_NAME__lat_dir, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nmea_msgs__msg__Gprmc__FIELD_NAME__lon_dir, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nmea_msgs__msg__Gprmc__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nmea_msgs__msg__Gprmc__FIELD_NAME__track, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nmea_msgs__msg__Gprmc__FIELD_NAME__date, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nmea_msgs__msg__Gprmc__FIELD_NAME__mag_var, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nmea_msgs__msg__Gprmc__FIELD_NAME__mag_var_direction, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nmea_msgs__msg__Gprmc__FIELD_NAME__mode_indicator, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription nmea_msgs__msg__Gprmc__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
nmea_msgs__msg__Gprmc__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nmea_msgs__msg__Gprmc__TYPE_NAME, 19, 19},
      {nmea_msgs__msg__Gprmc__FIELDS, 14, 14},
    },
    {nmea_msgs__msg__Gprmc__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "float64 utc_seconds\n"
  "string position_status\n"
  "\n"
  "float64 lat\n"
  "float64 lon\n"
  "\n"
  "string lat_dir\n"
  "string lon_dir\n"
  "\n"
  "float32 speed\n"
  "float32 track\n"
  "string date\n"
  "float32 mag_var\n"
  "string mag_var_direction\n"
  "string mode_indicator";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
nmea_msgs__msg__Gprmc__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nmea_msgs__msg__Gprmc__TYPE_NAME, 19, 19},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 279, 279},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nmea_msgs__msg__Gprmc__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nmea_msgs__msg__Gprmc__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
