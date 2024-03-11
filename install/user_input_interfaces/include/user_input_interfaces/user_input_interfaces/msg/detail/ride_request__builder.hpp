// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from user_input_interfaces:msg/RideRequest.idl
// generated code does not contain a copyright notice

#ifndef USER_INPUT_INTERFACES__MSG__DETAIL__RIDE_REQUEST__BUILDER_HPP_
#define USER_INPUT_INTERFACES__MSG__DETAIL__RIDE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "user_input_interfaces/msg/detail/ride_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace user_input_interfaces
{

namespace msg
{

namespace builder
{

class Init_RideRequest_dropoff_location
{
public:
  explicit Init_RideRequest_dropoff_location(::user_input_interfaces::msg::RideRequest & msg)
  : msg_(msg)
  {}
  ::user_input_interfaces::msg::RideRequest dropoff_location(::user_input_interfaces::msg::RideRequest::_dropoff_location_type arg)
  {
    msg_.dropoff_location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::user_input_interfaces::msg::RideRequest msg_;
};

class Init_RideRequest_pickup_location
{
public:
  explicit Init_RideRequest_pickup_location(::user_input_interfaces::msg::RideRequest & msg)
  : msg_(msg)
  {}
  Init_RideRequest_dropoff_location pickup_location(::user_input_interfaces::msg::RideRequest::_pickup_location_type arg)
  {
    msg_.pickup_location = std::move(arg);
    return Init_RideRequest_dropoff_location(msg_);
  }

private:
  ::user_input_interfaces::msg::RideRequest msg_;
};

class Init_RideRequest_last_name
{
public:
  explicit Init_RideRequest_last_name(::user_input_interfaces::msg::RideRequest & msg)
  : msg_(msg)
  {}
  Init_RideRequest_pickup_location last_name(::user_input_interfaces::msg::RideRequest::_last_name_type arg)
  {
    msg_.last_name = std::move(arg);
    return Init_RideRequest_pickup_location(msg_);
  }

private:
  ::user_input_interfaces::msg::RideRequest msg_;
};

class Init_RideRequest_first_name
{
public:
  Init_RideRequest_first_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RideRequest_last_name first_name(::user_input_interfaces::msg::RideRequest::_first_name_type arg)
  {
    msg_.first_name = std::move(arg);
    return Init_RideRequest_last_name(msg_);
  }

private:
  ::user_input_interfaces::msg::RideRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::user_input_interfaces::msg::RideRequest>()
{
  return user_input_interfaces::msg::builder::Init_RideRequest_first_name();
}

}  // namespace user_input_interfaces

#endif  // USER_INPUT_INTERFACES__MSG__DETAIL__RIDE_REQUEST__BUILDER_HPP_
