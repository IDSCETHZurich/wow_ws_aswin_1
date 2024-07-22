// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from gps_msgs:msg/GPSFix.idl
// generated code does not contain a copyright notice

#include "gps_msgs/msg/detail/gps_fix__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_gps_msgs
const rosidl_type_hash_t *
gps_msgs__msg__GPSFix__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf4, 0xe1, 0x1a, 0x63, 0x87, 0x2a, 0x19, 0x8f,
      0x70, 0x30, 0x0a, 0x39, 0x90, 0xf5, 0x0b, 0x09,
      0x6e, 0xd8, 0x22, 0xf2, 0xdb, 0x2b, 0xb6, 0x26,
      0xf6, 0xcd, 0xce, 0xe5, 0xf0, 0xf9, 0x29, 0x42,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "gps_msgs/msg/detail/gps_status__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t gps_msgs__msg__GPSStatus__EXPECTED_HASH = {1, {
    0x48, 0x1c, 0x1a, 0x76, 0x91, 0x71, 0x1d, 0xe4,
    0x3c, 0x84, 0xdf, 0xb1, 0xb0, 0x75, 0xf2, 0xce,
    0x8c, 0x48, 0x90, 0xc2, 0xdb, 0xd4, 0xb7, 0xd8,
    0x5e, 0x3f, 0x1c, 0xe0, 0xea, 0xf8, 0x90, 0xb6,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char gps_msgs__msg__GPSFix__TYPE_NAME[] = "gps_msgs/msg/GPSFix";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char gps_msgs__msg__GPSStatus__TYPE_NAME[] = "gps_msgs/msg/GPSStatus";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char gps_msgs__msg__GPSFix__FIELD_NAME__header[] = "header";
static char gps_msgs__msg__GPSFix__FIELD_NAME__status[] = "status";
static char gps_msgs__msg__GPSFix__FIELD_NAME__latitude[] = "latitude";
static char gps_msgs__msg__GPSFix__FIELD_NAME__longitude[] = "longitude";
static char gps_msgs__msg__GPSFix__FIELD_NAME__altitude[] = "altitude";
static char gps_msgs__msg__GPSFix__FIELD_NAME__track[] = "track";
static char gps_msgs__msg__GPSFix__FIELD_NAME__speed[] = "speed";
static char gps_msgs__msg__GPSFix__FIELD_NAME__climb[] = "climb";
static char gps_msgs__msg__GPSFix__FIELD_NAME__pitch[] = "pitch";
static char gps_msgs__msg__GPSFix__FIELD_NAME__roll[] = "roll";
static char gps_msgs__msg__GPSFix__FIELD_NAME__dip[] = "dip";
static char gps_msgs__msg__GPSFix__FIELD_NAME__time[] = "time";
static char gps_msgs__msg__GPSFix__FIELD_NAME__gdop[] = "gdop";
static char gps_msgs__msg__GPSFix__FIELD_NAME__pdop[] = "pdop";
static char gps_msgs__msg__GPSFix__FIELD_NAME__hdop[] = "hdop";
static char gps_msgs__msg__GPSFix__FIELD_NAME__vdop[] = "vdop";
static char gps_msgs__msg__GPSFix__FIELD_NAME__tdop[] = "tdop";
static char gps_msgs__msg__GPSFix__FIELD_NAME__err[] = "err";
static char gps_msgs__msg__GPSFix__FIELD_NAME__err_horz[] = "err_horz";
static char gps_msgs__msg__GPSFix__FIELD_NAME__err_vert[] = "err_vert";
static char gps_msgs__msg__GPSFix__FIELD_NAME__err_track[] = "err_track";
static char gps_msgs__msg__GPSFix__FIELD_NAME__err_speed[] = "err_speed";
static char gps_msgs__msg__GPSFix__FIELD_NAME__err_climb[] = "err_climb";
static char gps_msgs__msg__GPSFix__FIELD_NAME__err_time[] = "err_time";
static char gps_msgs__msg__GPSFix__FIELD_NAME__err_pitch[] = "err_pitch";
static char gps_msgs__msg__GPSFix__FIELD_NAME__err_roll[] = "err_roll";
static char gps_msgs__msg__GPSFix__FIELD_NAME__err_dip[] = "err_dip";
static char gps_msgs__msg__GPSFix__FIELD_NAME__position_covariance[] = "position_covariance";
static char gps_msgs__msg__GPSFix__FIELD_NAME__position_covariance_type[] = "position_covariance_type";

static rosidl_runtime_c__type_description__Field gps_msgs__msg__GPSFix__FIELDS[] = {
  {
    {gps_msgs__msg__GPSFix__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSFix__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {gps_msgs__msg__GPSStatus__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSFix__FIELD_NAME__latitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSFix__FIELD_NAME__longitude, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSFix__FIELD_NAME__altitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSFix__FIELD_NAME__track, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSFix__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSFix__FIELD_NAME__climb, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSFix__FIELD_NAME__pitch, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSFix__FIELD_NAME__roll, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSFix__FIELD_NAME__dip, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSFix__FIELD_NAME__time, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSFix__FIELD_NAME__gdop, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSFix__FIELD_NAME__pdop, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSFix__FIELD_NAME__hdop, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSFix__FIELD_NAME__vdop, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSFix__FIELD_NAME__tdop, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSFix__FIELD_NAME__err, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSFix__FIELD_NAME__err_horz, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSFix__FIELD_NAME__err_vert, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSFix__FIELD_NAME__err_track, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSFix__FIELD_NAME__err_speed, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSFix__FIELD_NAME__err_climb, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSFix__FIELD_NAME__err_time, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSFix__FIELD_NAME__err_pitch, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSFix__FIELD_NAME__err_roll, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSFix__FIELD_NAME__err_dip, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSFix__FIELD_NAME__position_covariance, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      9,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSFix__FIELD_NAME__position_covariance_type, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription gps_msgs__msg__GPSFix__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSStatus__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
gps_msgs__msg__GPSFix__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gps_msgs__msg__GPSFix__TYPE_NAME, 19, 19},
      {gps_msgs__msg__GPSFix__FIELDS, 29, 29},
    },
    {gps_msgs__msg__GPSFix__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&gps_msgs__msg__GPSStatus__EXPECTED_HASH, gps_msgs__msg__GPSStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = gps_msgs__msg__GPSStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# A more complete GPS fix to supplement sensor_msgs/NavSatFix.\n"
  "std_msgs/Header header\n"
  "\n"
  "GPSStatus status\n"
  "\n"
  "# Latitude (degrees). Positive is north of equator; negative is south.\n"
  "float64 latitude\n"
  "\n"
  "# Longitude (degrees). Positive is east of prime meridian, negative west.\n"
  "float64 longitude\n"
  "\n"
  "# Altitude (meters). Positive is above reference (e.g., sea level).\n"
  "float64 altitude\n"
  "\n"
  "# Direction (degrees from north)\n"
  "float64 track\n"
  "\n"
  "# Ground speed (meters/second)\n"
  "float64 speed\n"
  "\n"
  "# Vertical speed (meters/second)\n"
  "float64 climb\n"
  "\n"
  "# Device orientation (units in degrees)\n"
  "float64 pitch\n"
  "float64 roll\n"
  "float64 dip\n"
  "\n"
  "# GPS time\n"
  "float64 time\n"
  "\n"
  "## Dilution of precision; Xdop<=0 means the value is unknown\n"
  "\n"
  "# Total (positional-temporal) dilution of precision\n"
  "float64 gdop\n"
  "\n"
  "# Positional (3D) dilution of precision\n"
  "float64 pdop\n"
  "\n"
  "# Horizontal dilution of precision\n"
  "float64 hdop\n"
  "\n"
  "# Vertical dilution of precision\n"
  "float64 vdop\n"
  "\n"
  "# Temporal dilution of precision\n"
  "float64 tdop\n"
  "\n"
  "## Uncertainty of measurement, 95% confidence\n"
  "\n"
  "# Spherical position uncertainty (meters) [epe]\n"
  "float64 err\n"
  "\n"
  "# Horizontal position uncertainty (meters) [eph]\n"
  "float64 err_horz\n"
  "\n"
  "# Vertical position uncertainty (meters) [epv]\n"
  "float64 err_vert\n"
  "\n"
  "# Track uncertainty (degrees) [epd]\n"
  "float64 err_track\n"
  "\n"
  "# Ground speed uncertainty (meters/second) [eps]\n"
  "float64 err_speed\n"
  "\n"
  "# Vertical speed uncertainty (meters/second) [epc]\n"
  "float64 err_climb\n"
  "\n"
  "# Temporal uncertainty [ept]\n"
  "float64 err_time\n"
  "\n"
  "# Orientation uncertainty (degrees)\n"
  "float64 err_pitch\n"
  "float64 err_roll\n"
  "float64 err_dip\n"
  "\n"
  "# Position covariance [m^2] defined relative to a tangential plane\n"
  "# through the reported position. The components are East, North, and\n"
  "# Up (ENU), in row-major order.\n"
  "\n"
  "float64[9] position_covariance\n"
  "\n"
  "uint8 COVARIANCE_TYPE_UNKNOWN = 0\n"
  "uint8 COVARIANCE_TYPE_APPROXIMATED = 1\n"
  "uint8 COVARIANCE_TYPE_DIAGONAL_KNOWN = 2\n"
  "uint8 COVARIANCE_TYPE_KNOWN = 3\n"
  "\n"
  "uint8 position_covariance_type\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
gps_msgs__msg__GPSFix__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gps_msgs__msg__GPSFix__TYPE_NAME, 19, 19},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1893, 1893},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gps_msgs__msg__GPSFix__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gps_msgs__msg__GPSFix__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *gps_msgs__msg__GPSStatus__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
