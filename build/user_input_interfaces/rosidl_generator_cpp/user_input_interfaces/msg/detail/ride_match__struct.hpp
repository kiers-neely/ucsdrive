// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from user_input_interfaces:msg/RideMatch.idl
// generated code does not contain a copyright notice

#ifndef USER_INPUT_INTERFACES__MSG__DETAIL__RIDE_MATCH__STRUCT_HPP_
#define USER_INPUT_INTERFACES__MSG__DETAIL__RIDE_MATCH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__user_input_interfaces__msg__RideMatch __attribute__((deprecated))
#else
# define DEPRECATED__user_input_interfaces__msg__RideMatch __declspec(deprecated)
#endif

namespace user_input_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RideMatch_
{
  using Type = RideMatch_<ContainerAllocator>;

  explicit RideMatch_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->identified_face = "";
    }
  }

  explicit RideMatch_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : identified_face(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->identified_face = "";
    }
  }

  // field types and members
  using _identified_face_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _identified_face_type identified_face;

  // setters for named parameter idiom
  Type & set__identified_face(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->identified_face = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    user_input_interfaces::msg::RideMatch_<ContainerAllocator> *;
  using ConstRawPtr =
    const user_input_interfaces::msg::RideMatch_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<user_input_interfaces::msg::RideMatch_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<user_input_interfaces::msg::RideMatch_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      user_input_interfaces::msg::RideMatch_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<user_input_interfaces::msg::RideMatch_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      user_input_interfaces::msg::RideMatch_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<user_input_interfaces::msg::RideMatch_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<user_input_interfaces::msg::RideMatch_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<user_input_interfaces::msg::RideMatch_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__user_input_interfaces__msg__RideMatch
    std::shared_ptr<user_input_interfaces::msg::RideMatch_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__user_input_interfaces__msg__RideMatch
    std::shared_ptr<user_input_interfaces::msg::RideMatch_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RideMatch_ & other) const
  {
    if (this->identified_face != other.identified_face) {
      return false;
    }
    return true;
  }
  bool operator!=(const RideMatch_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RideMatch_

// alias to use template instance with default allocator
using RideMatch =
  user_input_interfaces::msg::RideMatch_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace user_input_interfaces

#endif  // USER_INPUT_INTERFACES__MSG__DETAIL__RIDE_MATCH__STRUCT_HPP_
