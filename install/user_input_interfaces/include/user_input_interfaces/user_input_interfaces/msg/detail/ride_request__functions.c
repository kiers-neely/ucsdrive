// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from user_input_interfaces:msg/RideRequest.idl
// generated code does not contain a copyright notice
#include "user_input_interfaces/msg/detail/ride_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `first_name`
// Member `last_name`
// Member `pickup_location`
// Member `dropoff_location`
#include "rosidl_runtime_c/string_functions.h"

bool
user_input_interfaces__msg__RideRequest__init(user_input_interfaces__msg__RideRequest * msg)
{
  if (!msg) {
    return false;
  }
  // first_name
  if (!rosidl_runtime_c__String__init(&msg->first_name)) {
    user_input_interfaces__msg__RideRequest__fini(msg);
    return false;
  }
  // last_name
  if (!rosidl_runtime_c__String__init(&msg->last_name)) {
    user_input_interfaces__msg__RideRequest__fini(msg);
    return false;
  }
  // pickup_location
  if (!rosidl_runtime_c__String__init(&msg->pickup_location)) {
    user_input_interfaces__msg__RideRequest__fini(msg);
    return false;
  }
  // dropoff_location
  if (!rosidl_runtime_c__String__init(&msg->dropoff_location)) {
    user_input_interfaces__msg__RideRequest__fini(msg);
    return false;
  }
  return true;
}

void
user_input_interfaces__msg__RideRequest__fini(user_input_interfaces__msg__RideRequest * msg)
{
  if (!msg) {
    return;
  }
  // first_name
  rosidl_runtime_c__String__fini(&msg->first_name);
  // last_name
  rosidl_runtime_c__String__fini(&msg->last_name);
  // pickup_location
  rosidl_runtime_c__String__fini(&msg->pickup_location);
  // dropoff_location
  rosidl_runtime_c__String__fini(&msg->dropoff_location);
}

bool
user_input_interfaces__msg__RideRequest__are_equal(const user_input_interfaces__msg__RideRequest * lhs, const user_input_interfaces__msg__RideRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // first_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->first_name), &(rhs->first_name)))
  {
    return false;
  }
  // last_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->last_name), &(rhs->last_name)))
  {
    return false;
  }
  // pickup_location
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pickup_location), &(rhs->pickup_location)))
  {
    return false;
  }
  // dropoff_location
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->dropoff_location), &(rhs->dropoff_location)))
  {
    return false;
  }
  return true;
}

bool
user_input_interfaces__msg__RideRequest__copy(
  const user_input_interfaces__msg__RideRequest * input,
  user_input_interfaces__msg__RideRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // first_name
  if (!rosidl_runtime_c__String__copy(
      &(input->first_name), &(output->first_name)))
  {
    return false;
  }
  // last_name
  if (!rosidl_runtime_c__String__copy(
      &(input->last_name), &(output->last_name)))
  {
    return false;
  }
  // pickup_location
  if (!rosidl_runtime_c__String__copy(
      &(input->pickup_location), &(output->pickup_location)))
  {
    return false;
  }
  // dropoff_location
  if (!rosidl_runtime_c__String__copy(
      &(input->dropoff_location), &(output->dropoff_location)))
  {
    return false;
  }
  return true;
}

user_input_interfaces__msg__RideRequest *
user_input_interfaces__msg__RideRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  user_input_interfaces__msg__RideRequest * msg = (user_input_interfaces__msg__RideRequest *)allocator.allocate(sizeof(user_input_interfaces__msg__RideRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(user_input_interfaces__msg__RideRequest));
  bool success = user_input_interfaces__msg__RideRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
user_input_interfaces__msg__RideRequest__destroy(user_input_interfaces__msg__RideRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    user_input_interfaces__msg__RideRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
user_input_interfaces__msg__RideRequest__Sequence__init(user_input_interfaces__msg__RideRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  user_input_interfaces__msg__RideRequest * data = NULL;

  if (size) {
    data = (user_input_interfaces__msg__RideRequest *)allocator.zero_allocate(size, sizeof(user_input_interfaces__msg__RideRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = user_input_interfaces__msg__RideRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        user_input_interfaces__msg__RideRequest__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
user_input_interfaces__msg__RideRequest__Sequence__fini(user_input_interfaces__msg__RideRequest__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      user_input_interfaces__msg__RideRequest__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

user_input_interfaces__msg__RideRequest__Sequence *
user_input_interfaces__msg__RideRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  user_input_interfaces__msg__RideRequest__Sequence * array = (user_input_interfaces__msg__RideRequest__Sequence *)allocator.allocate(sizeof(user_input_interfaces__msg__RideRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = user_input_interfaces__msg__RideRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
user_input_interfaces__msg__RideRequest__Sequence__destroy(user_input_interfaces__msg__RideRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    user_input_interfaces__msg__RideRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
user_input_interfaces__msg__RideRequest__Sequence__are_equal(const user_input_interfaces__msg__RideRequest__Sequence * lhs, const user_input_interfaces__msg__RideRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!user_input_interfaces__msg__RideRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
user_input_interfaces__msg__RideRequest__Sequence__copy(
  const user_input_interfaces__msg__RideRequest__Sequence * input,
  user_input_interfaces__msg__RideRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(user_input_interfaces__msg__RideRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    user_input_interfaces__msg__RideRequest * data =
      (user_input_interfaces__msg__RideRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!user_input_interfaces__msg__RideRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          user_input_interfaces__msg__RideRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!user_input_interfaces__msg__RideRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
