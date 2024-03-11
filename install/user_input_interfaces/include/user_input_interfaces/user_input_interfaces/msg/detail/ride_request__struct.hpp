// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from user_input_interfaces:msg/RideRequest.idl
// generated code does not contain a copyright notice

#ifndef USER_INPUT_INTERFACES__MSG__DETAIL__RIDE_REQUEST__STRUCT_HPP_
#define USER_INPUT_INTERFACES__MSG__DETAIL__RIDE_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__user_input_interfaces__msg__RideRequest __attribute__((deprecated))
#else
# define DEPRECATED__user_input_interfaces__msg__RideRequest __declspec(deprecated)
#endif

namespace user_input_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RideRequest_
{
  using Type = RideRequest_<ContainerAllocator>;

  explicit RideRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->first_name = "";
      this->last_name = "";
      this->pickup_location = "";
      this->dropoff_location = "";
    }
  }

  explicit RideRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : first_name(_alloc),
    last_name(_alloc),
    pickup_location(_alloc),
    dropoff_location(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->first_name = "";
      this->last_name = "";
      this->pickup_location = "";
      this->dropoff_location = "";
    }
  }

  // field types and members
  using _first_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _first_name_type first_name;
  using _last_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _last_name_type last_name;
  using _pickup_location_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pickup_location_type pickup_location;
  using _dropoff_location_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _dropoff_location_type dropoff_location;

  // setters for named parameter idiom
  Type & set__first_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->first_name = _arg;
    return *this;
  }
  Type & set__last_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->last_name = _arg;
    return *this;
  }
  Type & set__pickup_location(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pickup_location = _arg;
    return *this;
  }
  Type & set__dropoff_location(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->dropoff_location = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    user_input_interfaces::msg::RideRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const user_input_interfaces::msg::RideRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<user_input_interfaces::msg::RideRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<user_input_interfaces::msg::RideRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      user_input_interfaces::msg::RideRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<user_input_interfaces::msg::RideRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      user_input_interfaces::msg::RideRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<user_input_interfaces::msg::RideRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<user_input_interfaces::msg::RideRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<user_input_interfaces::msg::RideRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__user_input_interfaces__msg__RideRequest
    std::shared_ptr<user_input_interfaces::msg::RideRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__user_input_interfaces__msg__RideRequest
    std::shared_ptr<user_input_interfaces::msg::RideRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RideRequest_ & other) const
  {
    if (this->first_name != other.first_name) {
      return false;
    }
    if (this->last_name != other.last_name) {
      return false;
    }
    if (this->pickup_location != other.pickup_location) {
      return false;
    }
    if (this->dropoff_location != other.dropoff_location) {
      return false;
    }
    return true;
  }
  bool operator!=(const RideRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RideRequest_

// alias to use template instance with default allocator
using RideRequest =
  user_input_interfaces::msg::RideRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace user_input_interfaces

#endif  // USER_INPUT_INTERFACES__MSG__DETAIL__RIDE_REQUEST__STRUCT_HPP_
