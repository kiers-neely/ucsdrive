// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from user_input_interfaces:msg/RideRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "user_input_interfaces/msg/detail/ride_request__rosidl_typesupport_introspection_c.h"
#include "user_input_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "user_input_interfaces/msg/detail/ride_request__functions.h"
#include "user_input_interfaces/msg/detail/ride_request__struct.h"


// Include directives for member types
// Member `first_name`
// Member `last_name`
// Member `pickup_location`
// Member `dropoff_location`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void user_input_interfaces__msg__RideRequest__rosidl_typesupport_introspection_c__RideRequest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  user_input_interfaces__msg__RideRequest__init(message_memory);
}

void user_input_interfaces__msg__RideRequest__rosidl_typesupport_introspection_c__RideRequest_fini_function(void * message_memory)
{
  user_input_interfaces__msg__RideRequest__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember user_input_interfaces__msg__RideRequest__rosidl_typesupport_introspection_c__RideRequest_message_member_array[4] = {
  {
    "first_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(user_input_interfaces__msg__RideRequest, first_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(user_input_interfaces__msg__RideRequest, last_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pickup_location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(user_input_interfaces__msg__RideRequest, pickup_location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dropoff_location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(user_input_interfaces__msg__RideRequest, dropoff_location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers user_input_interfaces__msg__RideRequest__rosidl_typesupport_introspection_c__RideRequest_message_members = {
  "user_input_interfaces__msg",  // message namespace
  "RideRequest",  // message name
  4,  // number of fields
  sizeof(user_input_interfaces__msg__RideRequest),
  user_input_interfaces__msg__RideRequest__rosidl_typesupport_introspection_c__RideRequest_message_member_array,  // message members
  user_input_interfaces__msg__RideRequest__rosidl_typesupport_introspection_c__RideRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  user_input_interfaces__msg__RideRequest__rosidl_typesupport_introspection_c__RideRequest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t user_input_interfaces__msg__RideRequest__rosidl_typesupport_introspection_c__RideRequest_message_type_support_handle = {
  0,
  &user_input_interfaces__msg__RideRequest__rosidl_typesupport_introspection_c__RideRequest_message_members,
  get_message_typesupport_handle_function,
  &user_input_interfaces__msg__RideRequest__get_type_hash,
  &user_input_interfaces__msg__RideRequest__get_type_description,
  &user_input_interfaces__msg__RideRequest__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_user_input_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, user_input_interfaces, msg, RideRequest)() {
  if (!user_input_interfaces__msg__RideRequest__rosidl_typesupport_introspection_c__RideRequest_message_type_support_handle.typesupport_identifier) {
    user_input_interfaces__msg__RideRequest__rosidl_typesupport_introspection_c__RideRequest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &user_input_interfaces__msg__RideRequest__rosidl_typesupport_introspection_c__RideRequest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
