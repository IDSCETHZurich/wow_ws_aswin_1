// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from gps_msgs:msg/GPSStatus.idl
// generated code does not contain a copyright notice

#include "gps_msgs/msg/detail/gps_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_gps_msgs
const rosidl_type_hash_t *
gps_msgs__msg__GPSStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x48, 0x1c, 0x1a, 0x76, 0x91, 0x71, 0x1d, 0xe4,
      0x3c, 0x84, 0xdf, 0xb1, 0xb0, 0x75, 0xf2, 0xce,
      0x8c, 0x48, 0x90, 0xc2, 0xdb, 0xd4, 0xb7, 0xd8,
      0x5e, 0x3f, 0x1c, 0xe0, 0xea, 0xf8, 0x90, 0xb6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
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
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char gps_msgs__msg__GPSStatus__TYPE_NAME[] = "gps_msgs/msg/GPSStatus";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char gps_msgs__msg__GPSStatus__FIELD_NAME__header[] = "header";
static char gps_msgs__msg__GPSStatus__FIELD_NAME__satellites_used[] = "satellites_used";
static char gps_msgs__msg__GPSStatus__FIELD_NAME__satellite_used_prn[] = "satellite_used_prn";
static char gps_msgs__msg__GPSStatus__FIELD_NAME__satellites_visible[] = "satellites_visible";
static char gps_msgs__msg__GPSStatus__FIELD_NAME__satellite_visible_prn[] = "satellite_visible_prn";
static char gps_msgs__msg__GPSStatus__FIELD_NAME__satellite_visible_z[] = "satellite_visible_z";
static char gps_msgs__msg__GPSStatus__FIELD_NAME__satellite_visible_azimuth[] = "satellite_visible_azimuth";
static char gps_msgs__msg__GPSStatus__FIELD_NAME__satellite_visible_snr[] = "satellite_visible_snr";
static char gps_msgs__msg__GPSStatus__FIELD_NAME__status[] = "status";
static char gps_msgs__msg__GPSStatus__FIELD_NAME__motion_source[] = "motion_source";
static char gps_msgs__msg__GPSStatus__FIELD_NAME__orientation_source[] = "orientation_source";
static char gps_msgs__msg__GPSStatus__FIELD_NAME__position_source[] = "position_source";

static rosidl_runtime_c__type_description__Field gps_msgs__msg__GPSStatus__FIELDS[] = {
  {
    {gps_msgs__msg__GPSStatus__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSStatus__FIELD_NAME__satellites_used, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSStatus__FIELD_NAME__satellite_used_prn, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSStatus__FIELD_NAME__satellites_visible, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSStatus__FIELD_NAME__satellite_visible_prn, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSStatus__FIELD_NAME__satellite_visible_z, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSStatus__FIELD_NAME__satellite_visible_azimuth, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSStatus__FIELD_NAME__satellite_visible_snr, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSStatus__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSStatus__FIELD_NAME__motion_source, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSStatus__FIELD_NAME__orientation_source, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps_msgs__msg__GPSStatus__FIELD_NAME__position_source, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription gps_msgs__msg__GPSStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
gps_msgs__msg__GPSStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gps_msgs__msg__GPSStatus__TYPE_NAME, 22, 22},
      {gps_msgs__msg__GPSStatus__FIELDS, 12, 12},
    },
    {gps_msgs__msg__GPSStatus__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "std_msgs/Header header\n"
  "\n"
  "# Satellites used in solution\n"
  "uint16 satellites_used # Number of satellites\n"
  "int32[] satellite_used_prn # PRN identifiers\n"
  "\n"
  "# Satellites visible\n"
  "uint16 satellites_visible\n"
  "int32[] satellite_visible_prn # PRN identifiers\n"
  "int32[] satellite_visible_z # Elevation of satellites\n"
  "int32[] satellite_visible_azimuth # Azimuth of satellites\n"
  "int32[] satellite_visible_snr # Signal-to-noise ratios (dB)\n"
  "\n"
  "# Measurement status\n"
  "int16 STATUS_NO_FIX=-1    # Unable to fix position\n"
  "int16 STATUS_FIX=0        # Normal fix\n"
  "int16 STATUS_SBAS_FIX=1   # Fixed using a satellite-based augmentation system\n"
  "int16 STATUS_GBAS_FIX=2   #          or a ground-based augmentation system\n"
  "int16 STATUS_DGPS_FIX=18  # Fixed with DGPS\n"
  "int16 STATUS_RTK_FIX=19   # Real-Time Kinematic, fixed integers\n"
  "int16 STATUS_RTK_FLOAT=20 # Real-Time Kinematic, float integers\n"
  "int16 STATUS_WAAS_FIX=33  # Fixed with WAAS\n"
  "int16 status\n"
  "\n"
  "uint16 SOURCE_NONE=0 # No information is available\n"
  "uint16 SOURCE_GPS=1 # Using standard GPS location [only valid for position_source]\n"
  "uint16 SOURCE_POINTS=2 # Motion/orientation fix is derived from successive points\n"
  "uint16 SOURCE_DOPPLER=4 # Motion is derived using the Doppler effect\n"
  "uint16 SOURCE_ALTIMETER=8 # Using an altimeter\n"
  "uint16 SOURCE_MAGNETIC=16 # Using magnetic sensors\n"
  "uint16 SOURCE_GYRO=32 # Using gyroscopes\n"
  "uint16 SOURCE_ACCEL=64 # Using accelerometers\n"
  "\n"
  "uint16 motion_source # Source for speed, climb and track\n"
  "uint16 orientation_source # Source for device orientation\n"
  "uint16 position_source # Source for position\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
gps_msgs__msg__GPSStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gps_msgs__msg__GPSStatus__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1540, 1540},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gps_msgs__msg__GPSStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gps_msgs__msg__GPSStatus__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
