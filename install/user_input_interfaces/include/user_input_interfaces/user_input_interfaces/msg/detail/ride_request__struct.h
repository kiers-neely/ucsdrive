// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from user_input_interfaces:msg/RideRequest.idl
// generated code does not contain a copyright notice

#ifndef USER_INPUT_INTERFACES__MSG__DETAIL__RIDE_REQUEST__STRUCT_H_
#define USER_INPUT_INTERFACES__MSG__DETAIL__RIDE_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'first_name'
// Member 'last_name'
// Member 'pickup_location'
// Member 'dropoff_location'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RideRequest in the package user_input_interfaces.
typedef struct user_input_interfaces__msg__RideRequest
{
  rosidl_runtime_c__String first_name;
  rosidl_runtime_c__String last_name;
  rosidl_runtime_c__String pickup_location;
  rosidl_runtime_c__String dropoff_location;
} user_input_interfaces__msg__RideRequest;

// Struct for a sequence of user_input_interfaces__msg__RideRequest.
typedef struct user_input_interfaces__msg__RideRequest__Sequence
{
  user_input_interfaces__msg__RideRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} user_input_interfaces__msg__RideRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // USER_INPUT_INTERFACES__MSG__DETAIL__RIDE_REQUEST__STRUCT_H_
