// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from user_input_interfaces:msg/RideMatch.idl
// generated code does not contain a copyright notice
#include "user_input_interfaces/msg/detail/ride_match__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `identified_face`
#include "rosidl_runtime_c/string_functions.h"

bool
user_input_interfaces__msg__RideMatch__init(user_input_interfaces__msg__RideMatch * msg)
{
  if (!msg) {
    return false;
  }
  // identified_face
  if (!rosidl_runtime_c__String__init(&msg->identified_face)) {
    user_input_interfaces__msg__RideMatch__fini(msg);
    return false;
  }
  return true;
}

void
user_input_interfaces__msg__RideMatch__fini(user_input_interfaces__msg__RideMatch * msg)
{
  if (!msg) {
    return;
  }
  // identified_face
  rosidl_runtime_c__String__fini(&msg->identified_face);
}

bool
user_input_interfaces__msg__RideMatch__are_equal(const user_input_interfaces__msg__RideMatch * lhs, const user_input_interfaces__msg__RideMatch * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // identified_face
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->identified_face), &(rhs->identified_face)))
  {
    return false;
  }
  return true;
}

bool
user_input_interfaces__msg__RideMatch__copy(
  const user_input_interfaces__msg__RideMatch * input,
  user_input_interfaces__msg__RideMatch * output)
{
  if (!input || !output) {
    return false;
  }
  // identified_face
  if (!rosidl_runtime_c__String__copy(
      &(input->identified_face), &(output->identified_face)))
  {
    return false;
  }
  return true;
}

user_input_interfaces__msg__RideMatch *
user_input_interfaces__msg__RideMatch__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  user_input_interfaces__msg__RideMatch * msg = (user_input_interfaces__msg__RideMatch *)allocator.allocate(sizeof(user_input_interfaces__msg__RideMatch), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(user_input_interfaces__msg__RideMatch));
  bool success = user_input_interfaces__msg__RideMatch__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
user_input_interfaces__msg__RideMatch__destroy(user_input_interfaces__msg__RideMatch * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    user_input_interfaces__msg__RideMatch__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
user_input_interfaces__msg__RideMatch__Sequence__init(user_input_interfaces__msg__RideMatch__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  user_input_interfaces__msg__RideMatch * data = NULL;

  if (size) {
    data = (user_input_interfaces__msg__RideMatch *)allocator.zero_allocate(size, sizeof(user_input_interfaces__msg__RideMatch), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = user_input_interfaces__msg__RideMatch__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        user_input_interfaces__msg__RideMatch__fini(&data[i - 1]);
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
user_input_interfaces__msg__RideMatch__Sequence__fini(user_input_interfaces__msg__RideMatch__Sequence * array)
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
      user_input_interfaces__msg__RideMatch__fini(&array->data[i]);
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

user_input_interfaces__msg__RideMatch__Sequence *
user_input_interfaces__msg__RideMatch__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  user_input_interfaces__msg__RideMatch__Sequence * array = (user_input_interfaces__msg__RideMatch__Sequence *)allocator.allocate(sizeof(user_input_interfaces__msg__RideMatch__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = user_input_interfaces__msg__RideMatch__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
user_input_interfaces__msg__RideMatch__Sequence__destroy(user_input_interfaces__msg__RideMatch__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    user_input_interfaces__msg__RideMatch__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
user_input_interfaces__msg__RideMatch__Sequence__are_equal(const user_input_interfaces__msg__RideMatch__Sequence * lhs, const user_input_interfaces__msg__RideMatch__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!user_input_interfaces__msg__RideMatch__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
user_input_interfaces__msg__RideMatch__Sequence__copy(
  const user_input_interfaces__msg__RideMatch__Sequence * input,
  user_input_interfaces__msg__RideMatch__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(user_input_interfaces__msg__RideMatch);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    user_input_interfaces__msg__RideMatch * data =
      (user_input_interfaces__msg__RideMatch *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!user_input_interfaces__msg__RideMatch__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          user_input_interfaces__msg__RideMatch__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!user_input_interfaces__msg__RideMatch__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
