// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from user_input_interfaces:msg/RideMatch.idl
// generated code does not contain a copyright notice

#ifndef USER_INPUT_INTERFACES__MSG__DETAIL__RIDE_MATCH__TRAITS_HPP_
#define USER_INPUT_INTERFACES__MSG__DETAIL__RIDE_MATCH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "user_input_interfaces/msg/detail/ride_match__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace user_input_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RideMatch & msg,
  std::ostream & out)
{
  out << "{";
  // member: identified_face
  {
    out << "identified_face: ";
    rosidl_generator_traits::value_to_yaml(msg.identified_face, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RideMatch & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: identified_face
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "identified_face: ";
    rosidl_generator_traits::value_to_yaml(msg.identified_face, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RideMatch & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace user_input_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use user_input_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const user_input_interfaces::msg::RideMatch & msg,
  std::ostream & out, size_t indentation = 0)
{
  user_input_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use user_input_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const user_input_interfaces::msg::RideMatch & msg)
{
  return user_input_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<user_input_interfaces::msg::RideMatch>()
{
  return "user_input_interfaces::msg::RideMatch";
}

template<>
inline const char * name<user_input_interfaces::msg::RideMatch>()
{
  return "user_input_interfaces/msg/RideMatch";
}

template<>
struct has_fixed_size<user_input_interfaces::msg::RideMatch>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<user_input_interfaces::msg::RideMatch>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<user_input_interfaces::msg::RideMatch>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // USER_INPUT_INTERFACES__MSG__DETAIL__RIDE_MATCH__TRAITS_HPP_
