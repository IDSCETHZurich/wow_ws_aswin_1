// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from geographic_msgs:srv/GetRoutePlan.idl
// generated code does not contain a copyright notice

#include "geographic_msgs/srv/detail/get_route_plan__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
const rosidl_type_hash_t *
geographic_msgs__srv__GetRoutePlan__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1c, 0x08, 0xa7, 0x31, 0x49, 0xa0, 0xed, 0x4b,
      0x8a, 0x96, 0x86, 0xce, 0xbc, 0xd7, 0x1b, 0x39,
      0x13, 0xef, 0xde, 0x16, 0xdb, 0x34, 0x00, 0x7c,
      0x98, 0xcc, 0xd9, 0xb7, 0x51, 0x7b, 0x89, 0x57,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
const rosidl_type_hash_t *
geographic_msgs__srv__GetRoutePlan_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf8, 0xdd, 0xbc, 0x3e, 0x05, 0x96, 0x57, 0x2e,
      0x0a, 0x35, 0xe4, 0xcc, 0x46, 0x6d, 0xef, 0xbf,
      0x61, 0x8c, 0xa5, 0x23, 0x45, 0xc3, 0xda, 0xf4,
      0x83, 0x93, 0xc2, 0xb2, 0x70, 0x01, 0x1e, 0x88,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
const rosidl_type_hash_t *
geographic_msgs__srv__GetRoutePlan_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5f, 0x07, 0xb9, 0xf9, 0x8f, 0xff, 0xca, 0x34,
      0x07, 0xb0, 0xa7, 0x5a, 0x13, 0x69, 0xe0, 0x27,
      0x0b, 0x3f, 0xb0, 0xbb, 0x0c, 0xd0, 0x69, 0x21,
      0xef, 0xdb, 0x15, 0xf6, 0xe8, 0xf0, 0x17, 0x2a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_geographic_msgs
const rosidl_type_hash_t *
geographic_msgs__srv__GetRoutePlan_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa5, 0x3d, 0xc0, 0x10, 0x40, 0x42, 0xfe, 0x78,
      0x7e, 0x87, 0xde, 0x65, 0x3a, 0x7b, 0x3e, 0x6d,
      0x21, 0xc2, 0xbe, 0xfa, 0x35, 0x84, 0xfa, 0xd1,
      0xfb, 0x60, 0xa0, 0x5a, 0x19, 0x2c, 0x46, 0x62,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geographic_msgs/msg/detail/key_value__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geographic_msgs/msg/detail/route_path__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
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
static const rosidl_type_hash_t geographic_msgs__msg__KeyValue__EXPECTED_HASH = {1, {
    0x7b, 0x60, 0xe4, 0x65, 0xab, 0x0a, 0x5d, 0x81,
    0x08, 0x59, 0x57, 0x62, 0xd0, 0x5e, 0xe5, 0xf8,
    0xc9, 0xda, 0x8b, 0x7f, 0xfe, 0xd9, 0x21, 0xd6,
    0xf9, 0x12, 0x62, 0xf3, 0x84, 0xbe, 0xe2, 0x4b,
  }};
static const rosidl_type_hash_t geographic_msgs__msg__RoutePath__EXPECTED_HASH = {1, {
    0xe4, 0xb2, 0x2c, 0x83, 0x6b, 0x4d, 0x9a, 0x9e,
    0x86, 0xf6, 0x97, 0x7f, 0x4c, 0xc7, 0x8d, 0xb9,
    0xa7, 0x56, 0x97, 0xfe, 0x8e, 0x0a, 0x6b, 0x53,
    0x71, 0xc5, 0x1d, 0xcf, 0x7e, 0xab, 0xa3, 0xfe,
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

static char geographic_msgs__srv__GetRoutePlan__TYPE_NAME[] = "geographic_msgs/srv/GetRoutePlan";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geographic_msgs__msg__KeyValue__TYPE_NAME[] = "geographic_msgs/msg/KeyValue";
static char geographic_msgs__msg__RoutePath__TYPE_NAME[] = "geographic_msgs/msg/RoutePath";
static char geographic_msgs__srv__GetRoutePlan_Event__TYPE_NAME[] = "geographic_msgs/srv/GetRoutePlan_Event";
static char geographic_msgs__srv__GetRoutePlan_Request__TYPE_NAME[] = "geographic_msgs/srv/GetRoutePlan_Request";
static char geographic_msgs__srv__GetRoutePlan_Response__TYPE_NAME[] = "geographic_msgs/srv/GetRoutePlan_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";
static char unique_identifier_msgs__msg__UUID__TYPE_NAME[] = "unique_identifier_msgs/msg/UUID";

// Define type names, field names, and default values
static char geographic_msgs__srv__GetRoutePlan__FIELD_NAME__request_message[] = "request_message";
static char geographic_msgs__srv__GetRoutePlan__FIELD_NAME__response_message[] = "response_message";
static char geographic_msgs__srv__GetRoutePlan__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field geographic_msgs__srv__GetRoutePlan__FIELDS[] = {
  {
    {geographic_msgs__srv__GetRoutePlan__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geographic_msgs__srv__GetRoutePlan_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetRoutePlan__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geographic_msgs__srv__GetRoutePlan_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetRoutePlan__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geographic_msgs__srv__GetRoutePlan_Event__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription geographic_msgs__srv__GetRoutePlan__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__KeyValue__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__RoutePath__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetRoutePlan_Event__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetRoutePlan_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetRoutePlan_Response__TYPE_NAME, 41, 41},
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
geographic_msgs__srv__GetRoutePlan__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {geographic_msgs__srv__GetRoutePlan__TYPE_NAME, 32, 32},
      {geographic_msgs__srv__GetRoutePlan__FIELDS, 3, 3},
    },
    {geographic_msgs__srv__GetRoutePlan__REFERENCED_TYPE_DESCRIPTIONS, 9, 9},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__KeyValue__EXPECTED_HASH, geographic_msgs__msg__KeyValue__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geographic_msgs__msg__KeyValue__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__RoutePath__EXPECTED_HASH, geographic_msgs__msg__RoutePath__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geographic_msgs__msg__RoutePath__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = geographic_msgs__srv__GetRoutePlan_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = geographic_msgs__srv__GetRoutePlan_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = geographic_msgs__srv__GetRoutePlan_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&unique_identifier_msgs__msg__UUID__EXPECTED_HASH, unique_identifier_msgs__msg__UUID__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = unique_identifier_msgs__msg__UUID__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char geographic_msgs__srv__GetRoutePlan_Request__FIELD_NAME__network[] = "network";
static char geographic_msgs__srv__GetRoutePlan_Request__FIELD_NAME__start[] = "start";
static char geographic_msgs__srv__GetRoutePlan_Request__FIELD_NAME__goal[] = "goal";

static rosidl_runtime_c__type_description__Field geographic_msgs__srv__GetRoutePlan_Request__FIELDS[] = {
  {
    {geographic_msgs__srv__GetRoutePlan_Request__FIELD_NAME__network, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {unique_identifier_msgs__msg__UUID__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetRoutePlan_Request__FIELD_NAME__start, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {unique_identifier_msgs__msg__UUID__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetRoutePlan_Request__FIELD_NAME__goal, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {unique_identifier_msgs__msg__UUID__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription geographic_msgs__srv__GetRoutePlan_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {unique_identifier_msgs__msg__UUID__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
geographic_msgs__srv__GetRoutePlan_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {geographic_msgs__srv__GetRoutePlan_Request__TYPE_NAME, 40, 40},
      {geographic_msgs__srv__GetRoutePlan_Request__FIELDS, 3, 3},
    },
    {geographic_msgs__srv__GetRoutePlan_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&unique_identifier_msgs__msg__UUID__EXPECTED_HASH, unique_identifier_msgs__msg__UUID__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = unique_identifier_msgs__msg__UUID__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char geographic_msgs__srv__GetRoutePlan_Response__FIELD_NAME__success[] = "success";
static char geographic_msgs__srv__GetRoutePlan_Response__FIELD_NAME__status[] = "status";
static char geographic_msgs__srv__GetRoutePlan_Response__FIELD_NAME__plan[] = "plan";

static rosidl_runtime_c__type_description__Field geographic_msgs__srv__GetRoutePlan_Response__FIELDS[] = {
  {
    {geographic_msgs__srv__GetRoutePlan_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetRoutePlan_Response__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetRoutePlan_Response__FIELD_NAME__plan, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geographic_msgs__msg__RoutePath__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription geographic_msgs__srv__GetRoutePlan_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__KeyValue__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__RoutePath__TYPE_NAME, 29, 29},
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
geographic_msgs__srv__GetRoutePlan_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {geographic_msgs__srv__GetRoutePlan_Response__TYPE_NAME, 41, 41},
      {geographic_msgs__srv__GetRoutePlan_Response__FIELDS, 3, 3},
    },
    {geographic_msgs__srv__GetRoutePlan_Response__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__KeyValue__EXPECTED_HASH, geographic_msgs__msg__KeyValue__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geographic_msgs__msg__KeyValue__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__RoutePath__EXPECTED_HASH, geographic_msgs__msg__RoutePath__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geographic_msgs__msg__RoutePath__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&unique_identifier_msgs__msg__UUID__EXPECTED_HASH, unique_identifier_msgs__msg__UUID__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = unique_identifier_msgs__msg__UUID__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char geographic_msgs__srv__GetRoutePlan_Event__FIELD_NAME__info[] = "info";
static char geographic_msgs__srv__GetRoutePlan_Event__FIELD_NAME__request[] = "request";
static char geographic_msgs__srv__GetRoutePlan_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field geographic_msgs__srv__GetRoutePlan_Event__FIELDS[] = {
  {
    {geographic_msgs__srv__GetRoutePlan_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetRoutePlan_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {geographic_msgs__srv__GetRoutePlan_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetRoutePlan_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {geographic_msgs__srv__GetRoutePlan_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription geographic_msgs__srv__GetRoutePlan_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__KeyValue__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__msg__RoutePath__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetRoutePlan_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {geographic_msgs__srv__GetRoutePlan_Response__TYPE_NAME, 41, 41},
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
geographic_msgs__srv__GetRoutePlan_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {geographic_msgs__srv__GetRoutePlan_Event__TYPE_NAME, 38, 38},
      {geographic_msgs__srv__GetRoutePlan_Event__FIELDS, 3, 3},
    },
    {geographic_msgs__srv__GetRoutePlan_Event__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__KeyValue__EXPECTED_HASH, geographic_msgs__msg__KeyValue__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geographic_msgs__msg__KeyValue__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geographic_msgs__msg__RoutePath__EXPECTED_HASH, geographic_msgs__msg__RoutePath__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geographic_msgs__msg__RoutePath__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = geographic_msgs__srv__GetRoutePlan_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = geographic_msgs__srv__GetRoutePlan_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&unique_identifier_msgs__msg__UUID__EXPECTED_HASH, unique_identifier_msgs__msg__UUID__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = unique_identifier_msgs__msg__UUID__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Get a plan to traverse a route network from start to goal.\n"
  "#\n"
  "# Similar to nav_msgs/GetPlan, but constrained to use the route network.\n"
  "\n"
  "unique_identifier_msgs/UUID network      # route network to use\n"
  "unique_identifier_msgs/UUID start        # starting way point\n"
  "unique_identifier_msgs/UUID goal         # goal way point\n"
  "\n"
  "---\n"
  "\n"
  "bool            success         # true if the call succeeded\n"
  "string          status          # more details\n"
  "\n"
  "RoutePath       plan            # path to follow";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
geographic_msgs__srv__GetRoutePlan__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {geographic_msgs__srv__GetRoutePlan__TYPE_NAME, 32, 32},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 485, 485},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
geographic_msgs__srv__GetRoutePlan_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {geographic_msgs__srv__GetRoutePlan_Request__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
geographic_msgs__srv__GetRoutePlan_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {geographic_msgs__srv__GetRoutePlan_Response__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
geographic_msgs__srv__GetRoutePlan_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {geographic_msgs__srv__GetRoutePlan_Event__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
geographic_msgs__srv__GetRoutePlan__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[10];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 10, 10};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *geographic_msgs__srv__GetRoutePlan__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geographic_msgs__msg__KeyValue__get_individual_type_description_source(NULL);
    sources[3] = *geographic_msgs__msg__RoutePath__get_individual_type_description_source(NULL);
    sources[4] = *geographic_msgs__srv__GetRoutePlan_Event__get_individual_type_description_source(NULL);
    sources[5] = *geographic_msgs__srv__GetRoutePlan_Request__get_individual_type_description_source(NULL);
    sources[6] = *geographic_msgs__srv__GetRoutePlan_Response__get_individual_type_description_source(NULL);
    sources[7] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[8] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[9] = *unique_identifier_msgs__msg__UUID__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
geographic_msgs__srv__GetRoutePlan_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *geographic_msgs__srv__GetRoutePlan_Request__get_individual_type_description_source(NULL),
    sources[1] = *unique_identifier_msgs__msg__UUID__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
geographic_msgs__srv__GetRoutePlan_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *geographic_msgs__srv__GetRoutePlan_Response__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geographic_msgs__msg__KeyValue__get_individual_type_description_source(NULL);
    sources[3] = *geographic_msgs__msg__RoutePath__get_individual_type_description_source(NULL);
    sources[4] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[5] = *unique_identifier_msgs__msg__UUID__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
geographic_msgs__srv__GetRoutePlan_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *geographic_msgs__srv__GetRoutePlan_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geographic_msgs__msg__KeyValue__get_individual_type_description_source(NULL);
    sources[3] = *geographic_msgs__msg__RoutePath__get_individual_type_description_source(NULL);
    sources[4] = *geographic_msgs__srv__GetRoutePlan_Request__get_individual_type_description_source(NULL);
    sources[5] = *geographic_msgs__srv__GetRoutePlan_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[7] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[8] = *unique_identifier_msgs__msg__UUID__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
