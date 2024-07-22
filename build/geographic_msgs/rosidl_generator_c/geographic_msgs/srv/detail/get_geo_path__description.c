// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from geographic_msgs:srv/GetGeoPath.idl
// generated code does not contain a copyright notice

#include "geographic_msgs/srv/detail/get_geo_path__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
const rosidl_type_hash_t *
geographic_msgs__srv__GetGeoPath__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe0, 0xc1, 0xa0, 0x8d, 0xf2, 0x9c, 0xbf, 0xcb,
      0xdd, 0xfc, 0x01, 0x80, 0x36, 0x2e, 0x4d, 0x15,
      0xed, 0xa8, 0xc5, 0x28, 0x89, 0x6f, 0x99, 0xa1,
      0x5d, 0x81, 0xf6, 0xbb, 0x0b, 0x0a, 0xa5, 0xd8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
const rosidl_type_hash_t *
geographic_msgs__srv__GetGeoPath_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x88, 0x11, 0x71, 0x26, 0x09, 0xbb, 0x7e, 0x10,
      0xba, 0xb5, 0xf0, 0x4d, 0x54, 0xb9, 0x8c, 0x6d,
      0x11, 0x77, 0xe0, 0x9e, 0xdf, 0xe1, 0xcc, 0x15,
      0x89, 0x6c, 0x4f, 0x66, 0x02, 0x71, 0x9d, 0xa4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
const rosidl_type_hash_t *
geographic_msgs__srv__GetGeoPath_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6b, 0x56, 0xfc, 0xcb, 0x05, 0x6c, 0xa7, 0xf5,
      0x04, 0x47, 0xb8, 0x09, 0x9b, 0xc1, 0xd3, 0x17,
      0xc9, 0x13, 0x87, 0xda, 0xc7, 0xb1, 0x00, 0x62,
      0xcf, 0xa2, 0x38, 0x04, 0xee, 0xa1, 0xa4, 0xe7,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
const rosidl_type_hash_t *
geographic_msgs__srv__GetGeoPath_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3e, 0x67, 0x15, 0x1d, 0xe9, 0x8e, 0x8f, 0x7c,
      0xc7, 0xce, 0xc4, 0x52, 0x64, 0x21, 0x0b, 0x9e,
      0x14, 0xd6, 0xa2, 0xb1, 0xde, 0x3e, 0xfb, 0xf3,
      0xba, 0xee, 0x02, 0x1e, 0x9c, 0xb9, 0x65, 0x07,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geographic_msgs/msg/detail/geo_point__functions.h"
#include "geographic_msgs/msg/detail/geo_pose_stamped__functions.h"
#include "geographic_msgs/msg/detail/geo_path__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
#include "geographic_msgs/msg/detail/geo_pose__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geographic_msgs__msg__GeoPath__EXPECTED_HASH = {1, {
    0xda, 0x06, 0xa0, 0x3e, 0x5d, 0x5f, 0x28, 0x20,
    0x0c, 0xf0, 0xdc, 0x03, 0x11, 0x55, 0xa9, 0xce,
    0xaf, 0x64, 0x4e, 0x86, 0x15, 0xc4, 0xdc, 0xd1,
    0xf0, 0x4d, 0x68, 0x9f, 0x86, 0xc0, 0x64, 0xe3,
  }};
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
static const rosidl_type_hash_t geographic_msgs__msg__GeoPoseStamped__EXPECTED_HASH = {1, {
    0xa8, 0xe6, 0x03, 0xc0, 0x50, 0xfa, 0x99, 0x2a,
    0x74, 0x28, 0x3b, 0xb4, 0x62, 0xa9, 0x6f, 0xe9,
    0xd2, 0xb1, 0x51, 0xb7, 0xa6, 0x7b, 0x14, 0xd7,
    0x72, 0x50, 0xed, 0x7c, 0xb4, 0xed, 0x96, 0xb7,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
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

static char geographic_msgs__srv__GetGeoPath__TYPE_NAME[] = "geographic_msgs/srv/GetGeoPath";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geographic_msgs__msg__GeoPath__TYPE_NAME[] = "geographic_msgs/msg/GeoPath";
static char geographic_msgs__msg__GeoPoint__TYPE_NAME[] = "geographic_msgs/msg/GeoPoint";
static char geographic_msgs__msg__GeoPose__TYPE_NAME[] = "geographic_msgs/msg/GeoPose";
static char geographic_msgs__msg__GeoPoseStamped__TYPE_NAME[] = "geographic_msgs/msg/GeoPoseStamped";
static char geographic_msgs__srv__GetGeoPath_Event__TYPE_NAME[] = "geographic_msgs/srv/GetGeoPath_Event";
static char geographic_msgs__srv__GetGeoPath_Request__TYPE_NAME[] = "geographic_msgs/srv/GetGeoPath_Request";
static char geographic_msgs__srv__GetGeoPath_Response__TYPE_NAME[] = "geographic_msgs/srv/GetGeoPath_Response";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";
static char unique_identifier_msgs__msg__UUID__TYPE_NAME[] = "unique_identifier_msgs/msg/UUID";

// Define type names, field names, and default values
static char geographic_msgs__srv__GetGeoPath__FIELD_NAME__request_message[] = "request_message";
static char geographic_msgs__srv__GetGeoPath__FIELD_NAME__response_message[] = "response_message";
static char geographic_msgs__srv__GetGeoPath__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field geographic_msgs__srv__GetGeoPath__FIELDS[] = {
  {
    {geographic_msgs__srv__GetGeoPath__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geographic_msgs__srv__GetGeoPath_Request__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetGeoPath__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geographic_msgs__srv__GetGeoPath_Response__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetGeoPath__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geographic_msgs__srv__GetGeoPath_Event__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription geographic_msgs__srv__GetGeoPath__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__GeoPath__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__GeoPoint__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__GeoPose__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__GeoPoseStamped__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetGeoPath_Event__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetGeoPath_Request__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetGeoPath_Response__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
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
geographic_msgs__srv__GetGeoPath__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {geographic_msgs__srv__GetGeoPath__TYPE_NAME, 30, 30},
      {geographic_msgs__srv__GetGeoPath__FIELDS, 3, 3},
    },
    {geographic_msgs__srv__GetGeoPath__REFERENCED_TYPE_DESCRIPTIONS, 12, 12},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__GeoPath__EXPECTED_HASH, geographic_msgs__msg__GeoPath__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geographic_msgs__msg__GeoPath__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__GeoPoint__EXPECTED_HASH, geographic_msgs__msg__GeoPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geographic_msgs__msg__GeoPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__GeoPose__EXPECTED_HASH, geographic_msgs__msg__GeoPose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geographic_msgs__msg__GeoPose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__GeoPoseStamped__EXPECTED_HASH, geographic_msgs__msg__GeoPoseStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geographic_msgs__msg__GeoPoseStamped__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = geographic_msgs__srv__GetGeoPath_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[6].fields = geographic_msgs__srv__GetGeoPath_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[7].fields = geographic_msgs__srv__GetGeoPath_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&unique_identifier_msgs__msg__UUID__EXPECTED_HASH, unique_identifier_msgs__msg__UUID__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = unique_identifier_msgs__msg__UUID__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char geographic_msgs__srv__GetGeoPath_Request__FIELD_NAME__start[] = "start";
static char geographic_msgs__srv__GetGeoPath_Request__FIELD_NAME__goal[] = "goal";

static rosidl_runtime_c__type_description__Field geographic_msgs__srv__GetGeoPath_Request__FIELDS[] = {
  {
    {geographic_msgs__srv__GetGeoPath_Request__FIELD_NAME__start, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geographic_msgs__msg__GeoPoint__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetGeoPath_Request__FIELD_NAME__goal, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geographic_msgs__msg__GeoPoint__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription geographic_msgs__srv__GetGeoPath_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geographic_msgs__msg__GeoPoint__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
geographic_msgs__srv__GetGeoPath_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {geographic_msgs__srv__GetGeoPath_Request__TYPE_NAME, 38, 38},
      {geographic_msgs__srv__GetGeoPath_Request__FIELDS, 2, 2},
    },
    {geographic_msgs__srv__GetGeoPath_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geographic_msgs__msg__GeoPoint__EXPECTED_HASH, geographic_msgs__msg__GeoPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geographic_msgs__msg__GeoPoint__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char geographic_msgs__srv__GetGeoPath_Response__FIELD_NAME__success[] = "success";
static char geographic_msgs__srv__GetGeoPath_Response__FIELD_NAME__status[] = "status";
static char geographic_msgs__srv__GetGeoPath_Response__FIELD_NAME__plan[] = "plan";
static char geographic_msgs__srv__GetGeoPath_Response__FIELD_NAME__network[] = "network";
static char geographic_msgs__srv__GetGeoPath_Response__FIELD_NAME__start_seg[] = "start_seg";
static char geographic_msgs__srv__GetGeoPath_Response__FIELD_NAME__goal_seg[] = "goal_seg";
static char geographic_msgs__srv__GetGeoPath_Response__FIELD_NAME__distance[] = "distance";

static rosidl_runtime_c__type_description__Field geographic_msgs__srv__GetGeoPath_Response__FIELDS[] = {
  {
    {geographic_msgs__srv__GetGeoPath_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetGeoPath_Response__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetGeoPath_Response__FIELD_NAME__plan, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geographic_msgs__msg__GeoPath__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetGeoPath_Response__FIELD_NAME__network, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {unique_identifier_msgs__msg__UUID__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetGeoPath_Response__FIELD_NAME__start_seg, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {unique_identifier_msgs__msg__UUID__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetGeoPath_Response__FIELD_NAME__goal_seg, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {unique_identifier_msgs__msg__UUID__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetGeoPath_Response__FIELD_NAME__distance, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription geographic_msgs__srv__GetGeoPath_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__GeoPath__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__GeoPoint__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__GeoPose__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__GeoPoseStamped__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
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
geographic_msgs__srv__GetGeoPath_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {geographic_msgs__srv__GetGeoPath_Response__TYPE_NAME, 39, 39},
      {geographic_msgs__srv__GetGeoPath_Response__FIELDS, 7, 7},
    },
    {geographic_msgs__srv__GetGeoPath_Response__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__GeoPath__EXPECTED_HASH, geographic_msgs__msg__GeoPath__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geographic_msgs__msg__GeoPath__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__GeoPoint__EXPECTED_HASH, geographic_msgs__msg__GeoPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geographic_msgs__msg__GeoPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__GeoPose__EXPECTED_HASH, geographic_msgs__msg__GeoPose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geographic_msgs__msg__GeoPose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__GeoPoseStamped__EXPECTED_HASH, geographic_msgs__msg__GeoPoseStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geographic_msgs__msg__GeoPoseStamped__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&unique_identifier_msgs__msg__UUID__EXPECTED_HASH, unique_identifier_msgs__msg__UUID__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = unique_identifier_msgs__msg__UUID__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char geographic_msgs__srv__GetGeoPath_Event__FIELD_NAME__info[] = "info";
static char geographic_msgs__srv__GetGeoPath_Event__FIELD_NAME__request[] = "request";
static char geographic_msgs__srv__GetGeoPath_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field geographic_msgs__srv__GetGeoPath_Event__FIELDS[] = {
  {
    {geographic_msgs__srv__GetGeoPath_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetGeoPath_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {geographic_msgs__srv__GetGeoPath_Request__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetGeoPath_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {geographic_msgs__srv__GetGeoPath_Response__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription geographic_msgs__srv__GetGeoPath_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__GeoPath__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__GeoPoint__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__GeoPose__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__GeoPoseStamped__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetGeoPath_Request__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetGeoPath_Response__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
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
geographic_msgs__srv__GetGeoPath_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {geographic_msgs__srv__GetGeoPath_Event__TYPE_NAME, 36, 36},
      {geographic_msgs__srv__GetGeoPath_Event__FIELDS, 3, 3},
    },
    {geographic_msgs__srv__GetGeoPath_Event__REFERENCED_TYPE_DESCRIPTIONS, 11, 11},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__GeoPath__EXPECTED_HASH, geographic_msgs__msg__GeoPath__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geographic_msgs__msg__GeoPath__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__GeoPoint__EXPECTED_HASH, geographic_msgs__msg__GeoPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geographic_msgs__msg__GeoPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__GeoPose__EXPECTED_HASH, geographic_msgs__msg__GeoPose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geographic_msgs__msg__GeoPose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__GeoPoseStamped__EXPECTED_HASH, geographic_msgs__msg__GeoPoseStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geographic_msgs__msg__GeoPoseStamped__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = geographic_msgs__srv__GetGeoPath_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[6].fields = geographic_msgs__srv__GetGeoPath_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&unique_identifier_msgs__msg__UUID__EXPECTED_HASH, unique_identifier_msgs__msg__UUID__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = unique_identifier_msgs__msg__UUID__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Searches for given start and goal the nearest route segments\n"
  "# and determine the path through the RouteNetwork\n"
  "\n"
  "geographic_msgs/GeoPoint start        # starting point\n"
  "geographic_msgs/GeoPoint goal         # goal point\n"
  "\n"
  "---\n"
  "\n"
  "bool success                          # true if the call succeeded\n"
  "string status                         # more details\n"
  "\n"
  "geographic_msgs/GeoPath plan          # path to follow\n"
  "\n"
  "unique_identifier_msgs/UUID network            # the uuid of the RouteNetwork\n"
  "unique_identifier_msgs/UUID start_seg          # the uuid of the starting RouteSegment\n"
  "unique_identifier_msgs/UUID goal_seg           # the uuid of the ending RouteSegment\n"
  "float64 distance                      # the length of the plan";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
geographic_msgs__srv__GetGeoPath__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {geographic_msgs__srv__GetGeoPath__TYPE_NAME, 30, 30},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 716, 716},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
geographic_msgs__srv__GetGeoPath_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {geographic_msgs__srv__GetGeoPath_Request__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
geographic_msgs__srv__GetGeoPath_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {geographic_msgs__srv__GetGeoPath_Response__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
geographic_msgs__srv__GetGeoPath_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {geographic_msgs__srv__GetGeoPath_Event__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
geographic_msgs__srv__GetGeoPath__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[13];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 13, 13};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *geographic_msgs__srv__GetGeoPath__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geographic_msgs__msg__GeoPath__get_individual_type_description_source(NULL);
    sources[3] = *geographic_msgs__msg__GeoPoint__get_individual_type_description_source(NULL);
    sources[4] = *geographic_msgs__msg__GeoPose__get_individual_type_description_source(NULL);
    sources[5] = *geographic_msgs__msg__GeoPoseStamped__get_individual_type_description_source(NULL);
    sources[6] = *geographic_msgs__srv__GetGeoPath_Event__get_individual_type_description_source(NULL);
    sources[7] = *geographic_msgs__srv__GetGeoPath_Request__get_individual_type_description_source(NULL);
    sources[8] = *geographic_msgs__srv__GetGeoPath_Response__get_individual_type_description_source(NULL);
    sources[9] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[10] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[11] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[12] = *unique_identifier_msgs__msg__UUID__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
geographic_msgs__srv__GetGeoPath_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *geographic_msgs__srv__GetGeoPath_Request__get_individual_type_description_source(NULL),
    sources[1] = *geographic_msgs__msg__GeoPoint__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
geographic_msgs__srv__GetGeoPath_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *geographic_msgs__srv__GetGeoPath_Response__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geographic_msgs__msg__GeoPath__get_individual_type_description_source(NULL);
    sources[3] = *geographic_msgs__msg__GeoPoint__get_individual_type_description_source(NULL);
    sources[4] = *geographic_msgs__msg__GeoPose__get_individual_type_description_source(NULL);
    sources[5] = *geographic_msgs__msg__GeoPoseStamped__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[7] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[8] = *unique_identifier_msgs__msg__UUID__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
geographic_msgs__srv__GetGeoPath_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[12];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 12, 12};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *geographic_msgs__srv__GetGeoPath_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geographic_msgs__msg__GeoPath__get_individual_type_description_source(NULL);
    sources[3] = *geographic_msgs__msg__GeoPoint__get_individual_type_description_source(NULL);
    sources[4] = *geographic_msgs__msg__GeoPose__get_individual_type_description_source(NULL);
    sources[5] = *geographic_msgs__msg__GeoPoseStamped__get_individual_type_description_source(NULL);
    sources[6] = *geographic_msgs__srv__GetGeoPath_Request__get_individual_type_description_source(NULL);
    sources[7] = *geographic_msgs__srv__GetGeoPath_Response__get_individual_type_description_source(NULL);
    sources[8] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[9] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[10] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[11] = *unique_identifier_msgs__msg__UUID__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
