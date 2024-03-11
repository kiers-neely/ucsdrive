// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from user_input_interfaces:msg/RideMatch.idl
// generated code does not contain a copyright notice

#ifndef USER_INPUT_INTERFACES__MSG__DETAIL__RIDE_MATCH__BUILDER_HPP_
#define USER_INPUT_INTERFACES__MSG__DETAIL__RIDE_MATCH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "user_input_interfaces/msg/detail/ride_match__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace user_input_interfaces
{

namespace msg
{

namespace builder
{

class Init_RideMatch_identified_face
{
public:
  Init_RideMatch_identified_face()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::user_input_interfaces::msg::RideMatch identified_face(::user_input_interfaces::msg::RideMatch::_identified_face_type arg)
  {
    msg_.identified_face = std::move(arg);
    return std::move(msg_);
  }

private:
  ::user_input_interfaces::msg::RideMatch msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::user_input_interfaces::msg::RideMatch>()
{
  return user_input_interfaces::msg::builder::Init_RideMatch_identified_face();
}

}  // namespace user_input_interfaces

#endif  // USER_INPUT_INTERFACES__MSG__DETAIL__RIDE_MATCH__BUILDER_HPP_
