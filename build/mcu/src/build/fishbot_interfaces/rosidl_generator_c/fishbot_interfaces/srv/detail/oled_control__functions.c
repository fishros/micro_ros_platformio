// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fishbot_interfaces:srv/OledControl.idl
// generated code does not contain a copyright notice
#include "fishbot_interfaces/srv/detail/oled_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

bool
fishbot_interfaces__srv__OledControl_Request__init(fishbot_interfaces__srv__OledControl_Request * msg)
{
  if (!msg) {
    return false;
  }
  // px
  // py
  // data
  if (!rosidl_runtime_c__String__init(&msg->data)) {
    fishbot_interfaces__srv__OledControl_Request__fini(msg);
    return false;
  }
  return true;
}

void
fishbot_interfaces__srv__OledControl_Request__fini(fishbot_interfaces__srv__OledControl_Request * msg)
{
  if (!msg) {
    return;
  }
  // px
  // py
  // data
  rosidl_runtime_c__String__fini(&msg->data);
}

bool
fishbot_interfaces__srv__OledControl_Request__are_equal(const fishbot_interfaces__srv__OledControl_Request * lhs, const fishbot_interfaces__srv__OledControl_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // px
  if (lhs->px != rhs->px) {
    return false;
  }
  // py
  if (lhs->py != rhs->py) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
fishbot_interfaces__srv__OledControl_Request__copy(
  const fishbot_interfaces__srv__OledControl_Request * input,
  fishbot_interfaces__srv__OledControl_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // px
  output->px = input->px;
  // py
  output->py = input->py;
  // data
  if (!rosidl_runtime_c__String__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

fishbot_interfaces__srv__OledControl_Request *
fishbot_interfaces__srv__OledControl_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fishbot_interfaces__srv__OledControl_Request * msg = (fishbot_interfaces__srv__OledControl_Request *)allocator.allocate(sizeof(fishbot_interfaces__srv__OledControl_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fishbot_interfaces__srv__OledControl_Request));
  bool success = fishbot_interfaces__srv__OledControl_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fishbot_interfaces__srv__OledControl_Request__destroy(fishbot_interfaces__srv__OledControl_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fishbot_interfaces__srv__OledControl_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fishbot_interfaces__srv__OledControl_Request__Sequence__init(fishbot_interfaces__srv__OledControl_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fishbot_interfaces__srv__OledControl_Request * data = NULL;

  if (size) {
    data = (fishbot_interfaces__srv__OledControl_Request *)allocator.zero_allocate(size, sizeof(fishbot_interfaces__srv__OledControl_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fishbot_interfaces__srv__OledControl_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fishbot_interfaces__srv__OledControl_Request__fini(&data[i - 1]);
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
fishbot_interfaces__srv__OledControl_Request__Sequence__fini(fishbot_interfaces__srv__OledControl_Request__Sequence * array)
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
      fishbot_interfaces__srv__OledControl_Request__fini(&array->data[i]);
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

fishbot_interfaces__srv__OledControl_Request__Sequence *
fishbot_interfaces__srv__OledControl_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fishbot_interfaces__srv__OledControl_Request__Sequence * array = (fishbot_interfaces__srv__OledControl_Request__Sequence *)allocator.allocate(sizeof(fishbot_interfaces__srv__OledControl_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fishbot_interfaces__srv__OledControl_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fishbot_interfaces__srv__OledControl_Request__Sequence__destroy(fishbot_interfaces__srv__OledControl_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fishbot_interfaces__srv__OledControl_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fishbot_interfaces__srv__OledControl_Request__Sequence__are_equal(const fishbot_interfaces__srv__OledControl_Request__Sequence * lhs, const fishbot_interfaces__srv__OledControl_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fishbot_interfaces__srv__OledControl_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fishbot_interfaces__srv__OledControl_Request__Sequence__copy(
  const fishbot_interfaces__srv__OledControl_Request__Sequence * input,
  fishbot_interfaces__srv__OledControl_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fishbot_interfaces__srv__OledControl_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fishbot_interfaces__srv__OledControl_Request * data =
      (fishbot_interfaces__srv__OledControl_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fishbot_interfaces__srv__OledControl_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fishbot_interfaces__srv__OledControl_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fishbot_interfaces__srv__OledControl_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
fishbot_interfaces__srv__OledControl_Response__init(fishbot_interfaces__srv__OledControl_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
fishbot_interfaces__srv__OledControl_Response__fini(fishbot_interfaces__srv__OledControl_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
fishbot_interfaces__srv__OledControl_Response__are_equal(const fishbot_interfaces__srv__OledControl_Response * lhs, const fishbot_interfaces__srv__OledControl_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
fishbot_interfaces__srv__OledControl_Response__copy(
  const fishbot_interfaces__srv__OledControl_Response * input,
  fishbot_interfaces__srv__OledControl_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

fishbot_interfaces__srv__OledControl_Response *
fishbot_interfaces__srv__OledControl_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fishbot_interfaces__srv__OledControl_Response * msg = (fishbot_interfaces__srv__OledControl_Response *)allocator.allocate(sizeof(fishbot_interfaces__srv__OledControl_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fishbot_interfaces__srv__OledControl_Response));
  bool success = fishbot_interfaces__srv__OledControl_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fishbot_interfaces__srv__OledControl_Response__destroy(fishbot_interfaces__srv__OledControl_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fishbot_interfaces__srv__OledControl_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fishbot_interfaces__srv__OledControl_Response__Sequence__init(fishbot_interfaces__srv__OledControl_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fishbot_interfaces__srv__OledControl_Response * data = NULL;

  if (size) {
    data = (fishbot_interfaces__srv__OledControl_Response *)allocator.zero_allocate(size, sizeof(fishbot_interfaces__srv__OledControl_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fishbot_interfaces__srv__OledControl_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fishbot_interfaces__srv__OledControl_Response__fini(&data[i - 1]);
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
fishbot_interfaces__srv__OledControl_Response__Sequence__fini(fishbot_interfaces__srv__OledControl_Response__Sequence * array)
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
      fishbot_interfaces__srv__OledControl_Response__fini(&array->data[i]);
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

fishbot_interfaces__srv__OledControl_Response__Sequence *
fishbot_interfaces__srv__OledControl_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fishbot_interfaces__srv__OledControl_Response__Sequence * array = (fishbot_interfaces__srv__OledControl_Response__Sequence *)allocator.allocate(sizeof(fishbot_interfaces__srv__OledControl_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fishbot_interfaces__srv__OledControl_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fishbot_interfaces__srv__OledControl_Response__Sequence__destroy(fishbot_interfaces__srv__OledControl_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fishbot_interfaces__srv__OledControl_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fishbot_interfaces__srv__OledControl_Response__Sequence__are_equal(const fishbot_interfaces__srv__OledControl_Response__Sequence * lhs, const fishbot_interfaces__srv__OledControl_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fishbot_interfaces__srv__OledControl_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fishbot_interfaces__srv__OledControl_Response__Sequence__copy(
  const fishbot_interfaces__srv__OledControl_Response__Sequence * input,
  fishbot_interfaces__srv__OledControl_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fishbot_interfaces__srv__OledControl_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fishbot_interfaces__srv__OledControl_Response * data =
      (fishbot_interfaces__srv__OledControl_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fishbot_interfaces__srv__OledControl_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fishbot_interfaces__srv__OledControl_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fishbot_interfaces__srv__OledControl_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
