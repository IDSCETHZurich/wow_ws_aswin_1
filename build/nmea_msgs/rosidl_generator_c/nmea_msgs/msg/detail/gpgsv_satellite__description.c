// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from nmea_msgs:msg/GpgsvSatellite.idl
// generated code does not contain a copyright notice

#include "nmea_msgs/msg/detail/gpgsv_satellite__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_nmea_msgs
const rosidl_type_hash_t *
nmea_msgs__msg__GpgsvSatellite__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x98, 0x17, 0x69, 0x0a, 0xa3, 0xdf, 0x5c, 0xa6,
      0x62, 0x3c, 0xa7, 0xb4, 0x81, 0xea, 0x19, 0xf1,
      0x78, 0x70, 0xc2, 0x29, 0xb2, 0xe9, 0x0c, 0xfe,
      0xec, 0xbb, 0xfe, 0xf9, 0x34, 0xcf, 0x8e, 0x2f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char nmea_msgs__msg__GpgsvSatellite__TYPE_NAME[] = "nmea_msgs/msg/GpgsvSatellite";

// Define type names, field names, and default values
static char nmea_msgs__msg__GpgsvSatellite__FIELD_NAME__prn[] = "prn";
static char nmea_msgs__msg__GpgsvSatellite__FIELD_NAME__elevation[] = "elevation";
static char nmea_msgs__msg__GpgsvSatellite__FIELD_NAME__azimuth[] = "azimuth";
static char nmea_msgs__msg__GpgsvSatellite__FIELD_NAME__snr[] = "snr";

static rosidl_runtime_c__type_description__Field nmea_msgs__msg__GpgsvSatellite__FIELDS[] = {
  {
    {nmea_msgs__msg__GpgsvSatellite__FIELD_NAME__prn, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nmea_msgs__msg__GpgsvSatellite__FIELD_NAME__elevation, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nmea_msgs__msg__GpgsvSatellite__FIELD_NAME__azimuth, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nmea_msgs__msg__GpgsvSatellite__FIELD_NAME__snr, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nmea_msgs__msg__GpgsvSatellite__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nmea_msgs__msg__GpgsvSatellite__TYPE_NAME, 28, 28},
      {nmea_msgs__msg__GpgsvSatellite__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Satellite data structure used in GPGSV messages\n"
  "\n"
  "# PRN number of the satellite\n"
  "# GPS = 1..32\n"
  "# SBAS = 33..64\n"
  "# GLO = 65..96\n"
  "uint8 prn\n"
  "\n"
  "# Elevation, degrees. Maximum 90\n"
  "uint8 elevation\n"
  "\n"
  "# Azimuth, True North degrees. [0, 359]\n"
  "uint16 azimuth\n"
  "\n"
  "# Signal to noise ratio, 0-99 dB. -1 when null in NMEA sentence (not tracking)\n"
  "int8 snr";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
nmea_msgs__msg__GpgsvSatellite__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nmea_msgs__msg__GpgsvSatellite__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 331, 331},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nmea_msgs__msg__GpgsvSatellite__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nmea_msgs__msg__GpgsvSatellite__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
