// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fishbot_interfaces:srv/OledControl.idl
// generated code does not contain a copyright notice

#ifndef FISHBOT_INTERFACES__SRV__DETAIL__OLED_CONTROL__STRUCT_HPP_
#define FISHBOT_INTERFACES__SRV__DETAIL__OLED_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__fishbot_interfaces__srv__OledControl_Request __attribute__((deprecated))
#else
# define DEPRECATED__fishbot_interfaces__srv__OledControl_Request __declspec(deprecated)
#endif

namespace fishbot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OledControl_Request_
{
  using Type = OledControl_Request_<ContainerAllocator>;

  explicit OledControl_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->px = 0l;
      this->py = 0l;
      this->data = "";
    }
  }

  explicit OledControl_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->px = 0l;
      this->py = 0l;
      this->data = "";
    }
  }

  // field types and members
  using _px_type =
    int32_t;
  _px_type px;
  using _py_type =
    int32_t;
  _py_type py;
  using _data_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__px(
    const int32_t & _arg)
  {
    this->px = _arg;
    return *this;
  }
  Type & set__py(
    const int32_t & _arg)
  {
    this->py = _arg;
    return *this;
  }
  Type & set__data(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fishbot_interfaces::srv::OledControl_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const fishbot_interfaces::srv::OledControl_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fishbot_interfaces::srv::OledControl_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fishbot_interfaces::srv::OledControl_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fishbot_interfaces::srv::OledControl_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fishbot_interfaces::srv::OledControl_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fishbot_interfaces::srv::OledControl_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fishbot_interfaces::srv::OledControl_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fishbot_interfaces::srv::OledControl_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fishbot_interfaces::srv::OledControl_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fishbot_interfaces__srv__OledControl_Request
    std::shared_ptr<fishbot_interfaces::srv::OledControl_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fishbot_interfaces__srv__OledControl_Request
    std::shared_ptr<fishbot_interfaces::srv::OledControl_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OledControl_Request_ & other) const
  {
    if (this->px != other.px) {
      return false;
    }
    if (this->py != other.py) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const OledControl_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OledControl_Request_

// alias to use template instance with default allocator
using OledControl_Request =
  fishbot_interfaces::srv::OledControl_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace fishbot_interfaces


#ifndef _WIN32
# define DEPRECATED__fishbot_interfaces__srv__OledControl_Response __attribute__((deprecated))
#else
# define DEPRECATED__fishbot_interfaces__srv__OledControl_Response __declspec(deprecated)
#endif

namespace fishbot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OledControl_Response_
{
  using Type = OledControl_Response_<ContainerAllocator>;

  explicit OledControl_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0l;
    }
  }

  explicit OledControl_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0l;
    }
  }

  // field types and members
  using _result_type =
    int32_t;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const int32_t & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fishbot_interfaces::srv::OledControl_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const fishbot_interfaces::srv::OledControl_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fishbot_interfaces::srv::OledControl_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fishbot_interfaces::srv::OledControl_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fishbot_interfaces::srv::OledControl_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fishbot_interfaces::srv::OledControl_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fishbot_interfaces::srv::OledControl_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fishbot_interfaces::srv::OledControl_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fishbot_interfaces::srv::OledControl_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fishbot_interfaces::srv::OledControl_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fishbot_interfaces__srv__OledControl_Response
    std::shared_ptr<fishbot_interfaces::srv::OledControl_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fishbot_interfaces__srv__OledControl_Response
    std::shared_ptr<fishbot_interfaces::srv::OledControl_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OledControl_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const OledControl_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OledControl_Response_

// alias to use template instance with default allocator
using OledControl_Response =
  fishbot_interfaces::srv::OledControl_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace fishbot_interfaces

namespace fishbot_interfaces
{

namespace srv
{

struct OledControl
{
  using Request = fishbot_interfaces::srv::OledControl_Request;
  using Response = fishbot_interfaces::srv::OledControl_Response;
};

}  // namespace srv

}  // namespace fishbot_interfaces

#endif  // FISHBOT_INTERFACES__SRV__DETAIL__OLED_CONTROL__STRUCT_HPP_
