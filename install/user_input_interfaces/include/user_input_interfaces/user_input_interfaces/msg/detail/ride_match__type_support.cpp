// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from user_input_interfaces:msg/RideMatch.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "user_input_interfaces/msg/detail/ride_match__functions.h"
#include "user_input_interfaces/msg/detail/ride_match__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace user_input_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RideMatch_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) user_input_interfaces::msg::RideMatch(_init);
}

void RideMatch_fini_function(void * message_memory)
{
  auto typed_message = static_cast<user_input_interfaces::msg::RideMatch *>(message_memory);
  typed_message->~RideMatch();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RideMatch_message_member_array[1] = {
  {
    "identified_face",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(user_input_interfaces::msg::RideMatch, identified_face),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RideMatch_message_members = {
  "user_input_interfaces::msg",  // message namespace
  "RideMatch",  // message name
  1,  // number of fields
  sizeof(user_input_interfaces::msg::RideMatch),
  RideMatch_message_member_array,  // message members
  RideMatch_init_function,  // function to initialize message memory (memory has to be allocated)
  RideMatch_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RideMatch_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RideMatch_message_members,
  get_message_typesupport_handle_function,
  &user_input_interfaces__msg__RideMatch__get_type_hash,
  &user_input_interfaces__msg__RideMatch__get_type_description,
  &user_input_interfaces__msg__RideMatch__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace user_input_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<user_input_interfaces::msg::RideMatch>()
{
  return &::user_input_interfaces::msg::rosidl_typesupport_introspection_cpp::RideMatch_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, user_input_interfaces, msg, RideMatch)() {
  return &::user_input_interfaces::msg::rosidl_typesupport_introspection_cpp::RideMatch_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
