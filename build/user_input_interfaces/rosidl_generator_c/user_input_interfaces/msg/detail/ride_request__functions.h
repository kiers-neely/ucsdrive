// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from user_input_interfaces:msg/RideRequest.idl
// generated code does not contain a copyright notice

#ifndef USER_INPUT_INTERFACES__MSG__DETAIL__RIDE_REQUEST__FUNCTIONS_H_
#define USER_INPUT_INTERFACES__MSG__DETAIL__RIDE_REQUEST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "user_input_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "user_input_interfaces/msg/detail/ride_request__struct.h"

/// Initialize msg/RideRequest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * user_input_interfaces__msg__RideRequest
 * )) before or use
 * user_input_interfaces__msg__RideRequest__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_user_input_interfaces
bool
user_input_interfaces__msg__RideRequest__init(user_input_interfaces__msg__RideRequest * msg);

/// Finalize msg/RideRequest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_user_input_interfaces
void
user_input_interfaces__msg__RideRequest__fini(user_input_interfaces__msg__RideRequest * msg);

/// Create msg/RideRequest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * user_input_interfaces__msg__RideRequest__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_user_input_interfaces
user_input_interfaces__msg__RideRequest *
user_input_interfaces__msg__RideRequest__create();

/// Destroy msg/RideRequest message.
/**
 * It calls
 * user_input_interfaces__msg__RideRequest__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_user_input_interfaces
void
user_input_interfaces__msg__RideRequest__destroy(user_input_interfaces__msg__RideRequest * msg);

/// Check for msg/RideRequest message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_user_input_interfaces
bool
user_input_interfaces__msg__RideRequest__are_equal(const user_input_interfaces__msg__RideRequest * lhs, const user_input_interfaces__msg__RideRequest * rhs);

/// Copy a msg/RideRequest message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_user_input_interfaces
bool
user_input_interfaces__msg__RideRequest__copy(
  const user_input_interfaces__msg__RideRequest * input,
  user_input_interfaces__msg__RideRequest * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_user_input_interfaces
const rosidl_type_hash_t *
user_input_interfaces__msg__RideRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_user_input_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
user_input_interfaces__msg__RideRequest__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_user_input_interfaces
const rosidl_runtime_c__type_description__TypeSource *
user_input_interfaces__msg__RideRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_user_input_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
user_input_interfaces__msg__RideRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/RideRequest messages.
/**
 * It allocates the memory for the number of elements and calls
 * user_input_interfaces__msg__RideRequest__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_user_input_interfaces
bool
user_input_interfaces__msg__RideRequest__Sequence__init(user_input_interfaces__msg__RideRequest__Sequence * array, size_t size);

/// Finalize array of msg/RideRequest messages.
/**
 * It calls
 * user_input_interfaces__msg__RideRequest__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_user_input_interfaces
void
user_input_interfaces__msg__RideRequest__Sequence__fini(user_input_interfaces__msg__RideRequest__Sequence * array);

/// Create array of msg/RideRequest messages.
/**
 * It allocates the memory for the array and calls
 * user_input_interfaces__msg__RideRequest__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_user_input_interfaces
user_input_interfaces__msg__RideRequest__Sequence *
user_input_interfaces__msg__RideRequest__Sequence__create(size_t size);

/// Destroy array of msg/RideRequest messages.
/**
 * It calls
 * user_input_interfaces__msg__RideRequest__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_user_input_interfaces
void
user_input_interfaces__msg__RideRequest__Sequence__destroy(user_input_interfaces__msg__RideRequest__Sequence * array);

/// Check for msg/RideRequest message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_user_input_interfaces
bool
user_input_interfaces__msg__RideRequest__Sequence__are_equal(const user_input_interfaces__msg__RideRequest__Sequence * lhs, const user_input_interfaces__msg__RideRequest__Sequence * rhs);

/// Copy an array of msg/RideRequest messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_user_input_interfaces
bool
user_input_interfaces__msg__RideRequest__Sequence__copy(
  const user_input_interfaces__msg__RideRequest__Sequence * input,
  user_input_interfaces__msg__RideRequest__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // USER_INPUT_INTERFACES__MSG__DETAIL__RIDE_REQUEST__FUNCTIONS_H_