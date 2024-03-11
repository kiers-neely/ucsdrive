// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from user_input_interfaces:msg/RideMatch.idl
// generated code does not contain a copyright notice

#ifndef USER_INPUT_INTERFACES__MSG__DETAIL__RIDE_MATCH__STRUCT_H_
#define USER_INPUT_INTERFACES__MSG__DETAIL__RIDE_MATCH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'identified_face'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RideMatch in the package user_input_interfaces.
typedef struct user_input_interfaces__msg__RideMatch
{
  rosidl_runtime_c__String identified_face;
} user_input_interfaces__msg__RideMatch;

// Struct for a sequence of user_input_interfaces__msg__RideMatch.
typedef struct user_input_interfaces__msg__RideMatch__Sequence
{
  user_input_interfaces__msg__RideMatch * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} user_input_interfaces__msg__RideMatch__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // USER_INPUT_INTERFACES__MSG__DETAIL__RIDE_MATCH__STRUCT_H_
