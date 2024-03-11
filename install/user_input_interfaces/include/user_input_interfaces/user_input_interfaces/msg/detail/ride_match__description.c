// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from user_input_interfaces:msg/RideMatch.idl
// generated code does not contain a copyright notice

#include "user_input_interfaces/msg/detail/ride_match__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_user_input_interfaces
const rosidl_type_hash_t *
user_input_interfaces__msg__RideMatch__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x34, 0x39, 0xfd, 0xcc, 0xea, 0x4c, 0x12, 0x0e,
      0x52, 0x49, 0x2c, 0xfc, 0xf5, 0x57, 0xee, 0x31,
      0x41, 0x73, 0x10, 0x1c, 0x69, 0xe4, 0x6d, 0x21,
      0x36, 0xd1, 0xf8, 0x77, 0x59, 0xb6, 0x8e, 0xe2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char user_input_interfaces__msg__RideMatch__TYPE_NAME[] = "user_input_interfaces/msg/RideMatch";

// Define type names, field names, and default values
static char user_input_interfaces__msg__RideMatch__FIELD_NAME__identified_face[] = "identified_face";

static rosidl_runtime_c__type_description__Field user_input_interfaces__msg__RideMatch__FIELDS[] = {
  {
    {user_input_interfaces__msg__RideMatch__FIELD_NAME__identified_face, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
user_input_interfaces__msg__RideMatch__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {user_input_interfaces__msg__RideMatch__TYPE_NAME, 35, 35},
      {user_input_interfaces__msg__RideMatch__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string identified_face";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
user_input_interfaces__msg__RideMatch__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {user_input_interfaces__msg__RideMatch__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 22, 22},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
user_input_interfaces__msg__RideMatch__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *user_input_interfaces__msg__RideMatch__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
