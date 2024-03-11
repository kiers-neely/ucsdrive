// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from user_input_interfaces:msg/RideRequest.idl
// generated code does not contain a copyright notice

#ifndef USER_INPUT_INTERFACES__MSG__DETAIL__RIDE_REQUEST__TRAITS_HPP_
#define USER_INPUT_INTERFACES__MSG__DETAIL__RIDE_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "user_input_interfaces/msg/detail/ride_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace user_input_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RideRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: first_name
  {
    out << "first_name: ";
    rosidl_generator_traits::value_to_yaml(msg.first_name, out);
    out << ", ";
  }

  // member: last_name
  {
    out << "last_name: ";
    rosidl_generator_traits::value_to_yaml(msg.last_name, out);
    out << ", ";
  }

  // member: pickup_location
  {
    out << "pickup_location: ";
    rosidl_generator_traits::value_to_yaml(msg.pickup_location, out);
    out << ", ";
  }

  // member: dropoff_location
  {
    out << "dropoff_location: ";
    rosidl_generator_traits::value_to_yaml(msg.dropoff_location, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RideRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: first_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "first_name: ";
    rosidl_generator_traits::value_to_yaml(msg.first_name, out);
    out << "\n";
  }

  // member: last_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_name: ";
    rosidl_generator_traits::value_to_yaml(msg.last_name, out);
    out << "\n";
  }

  // member: pickup_location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pickup_location: ";
    rosidl_generator_traits::value_to_yaml(msg.pickup_location, out);
    out << "\n";
  }

  // member: dropoff_location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dropoff_location: ";
    rosidl_generator_traits::value_to_yaml(msg.dropoff_location, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RideRequest & msg, bool use_flow_style = false)
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
  const user_input_interfaces::msg::RideRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  user_input_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use user_input_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const user_input_interfaces::msg::RideRequest & msg)
{
  return user_input_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<user_input_interfaces::msg::RideRequest>()
{
  return "user_input_interfaces::msg::RideRequest";
}

template<>
inline const char * name<user_input_interfaces::msg::RideRequest>()
{
  return "user_input_interfaces/msg/RideRequest";
}

template<>
struct has_fixed_size<user_input_interfaces::msg::RideRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<user_input_interfaces::msg::RideRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<user_input_interfaces::msg::RideRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // USER_INPUT_INTERFACES__MSG__DETAIL__RIDE_REQUEST__TRAITS_HPP_
