// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fishbot_interfaces:srv/OledControl.idl
// generated code does not contain a copyright notice

#ifndef FISHBOT_INTERFACES__SRV__DETAIL__OLED_CONTROL__TRAITS_HPP_
#define FISHBOT_INTERFACES__SRV__DETAIL__OLED_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fishbot_interfaces/srv/detail/oled_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace fishbot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const OledControl_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: px
  {
    out << "px: ";
    rosidl_generator_traits::value_to_yaml(msg.px, out);
    out << ", ";
  }

  // member: py
  {
    out << "py: ";
    rosidl_generator_traits::value_to_yaml(msg.py, out);
    out << ", ";
  }

  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OledControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: px
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "px: ";
    rosidl_generator_traits::value_to_yaml(msg.px, out);
    out << "\n";
  }

  // member: py
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "py: ";
    rosidl_generator_traits::value_to_yaml(msg.py, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OledControl_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace fishbot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use fishbot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const fishbot_interfaces::srv::OledControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  fishbot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fishbot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const fishbot_interfaces::srv::OledControl_Request & msg)
{
  return fishbot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<fishbot_interfaces::srv::OledControl_Request>()
{
  return "fishbot_interfaces::srv::OledControl_Request";
}

template<>
inline const char * name<fishbot_interfaces::srv::OledControl_Request>()
{
  return "fishbot_interfaces/srv/OledControl_Request";
}

template<>
struct has_fixed_size<fishbot_interfaces::srv::OledControl_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fishbot_interfaces::srv::OledControl_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fishbot_interfaces::srv::OledControl_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace fishbot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const OledControl_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OledControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OledControl_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace fishbot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use fishbot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const fishbot_interfaces::srv::OledControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  fishbot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fishbot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const fishbot_interfaces::srv::OledControl_Response & msg)
{
  return fishbot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<fishbot_interfaces::srv::OledControl_Response>()
{
  return "fishbot_interfaces::srv::OledControl_Response";
}

template<>
inline const char * name<fishbot_interfaces::srv::OledControl_Response>()
{
  return "fishbot_interfaces/srv/OledControl_Response";
}

template<>
struct has_fixed_size<fishbot_interfaces::srv::OledControl_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<fishbot_interfaces::srv::OledControl_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<fishbot_interfaces::srv::OledControl_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fishbot_interfaces::srv::OledControl>()
{
  return "fishbot_interfaces::srv::OledControl";
}

template<>
inline const char * name<fishbot_interfaces::srv::OledControl>()
{
  return "fishbot_interfaces/srv/OledControl";
}

template<>
struct has_fixed_size<fishbot_interfaces::srv::OledControl>
  : std::integral_constant<
    bool,
    has_fixed_size<fishbot_interfaces::srv::OledControl_Request>::value &&
    has_fixed_size<fishbot_interfaces::srv::OledControl_Response>::value
  >
{
};

template<>
struct has_bounded_size<fishbot_interfaces::srv::OledControl>
  : std::integral_constant<
    bool,
    has_bounded_size<fishbot_interfaces::srv::OledControl_Request>::value &&
    has_bounded_size<fishbot_interfaces::srv::OledControl_Response>::value
  >
{
};

template<>
struct is_service<fishbot_interfaces::srv::OledControl>
  : std::true_type
{
};

template<>
struct is_service_request<fishbot_interfaces::srv::OledControl_Request>
  : std::true_type
{
};

template<>
struct is_service_response<fishbot_interfaces::srv::OledControl_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FISHBOT_INTERFACES__SRV__DETAIL__OLED_CONTROL__TRAITS_HPP_
