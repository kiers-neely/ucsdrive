// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from user_input_interfaces:msg/RideMatch.idl
// generated code does not contain a copyright notice
#include "user_input_interfaces/msg/detail/ride_match__rosidl_typesupport_fastrtps_cpp.hpp"
#include "user_input_interfaces/msg/detail/ride_match__functions.h"
#include "user_input_interfaces/msg/detail/ride_match__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace user_input_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_user_input_interfaces
cdr_serialize(
  const user_input_interfaces::msg::RideMatch & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: identified_face
  cdr << ros_message.identified_face;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_user_input_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  user_input_interfaces::msg::RideMatch & ros_message)
{
  // Member: identified_face
  cdr >> ros_message.identified_face;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_user_input_interfaces
get_serialized_size(
  const user_input_interfaces::msg::RideMatch & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: identified_face
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.identified_face.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_user_input_interfaces
max_serialized_size_RideMatch(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: identified_face
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = user_input_interfaces::msg::RideMatch;
    is_plain =
      (
      offsetof(DataType, identified_face) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RideMatch__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const user_input_interfaces::msg::RideMatch *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RideMatch__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<user_input_interfaces::msg::RideMatch *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RideMatch__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const user_input_interfaces::msg::RideMatch *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RideMatch__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RideMatch(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RideMatch__callbacks = {
  "user_input_interfaces::msg",
  "RideMatch",
  _RideMatch__cdr_serialize,
  _RideMatch__cdr_deserialize,
  _RideMatch__get_serialized_size,
  _RideMatch__max_serialized_size
};

static rosidl_message_type_support_t _RideMatch__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RideMatch__callbacks,
  get_message_typesupport_handle_function,
  &user_input_interfaces__msg__RideMatch__get_type_hash,
  &user_input_interfaces__msg__RideMatch__get_type_description,
  &user_input_interfaces__msg__RideMatch__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace user_input_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_user_input_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<user_input_interfaces::msg::RideMatch>()
{
  return &user_input_interfaces::msg::typesupport_fastrtps_cpp::_RideMatch__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, user_input_interfaces, msg, RideMatch)() {
  return &user_input_interfaces::msg::typesupport_fastrtps_cpp::_RideMatch__handle;
}

#ifdef __cplusplus
}
#endif
