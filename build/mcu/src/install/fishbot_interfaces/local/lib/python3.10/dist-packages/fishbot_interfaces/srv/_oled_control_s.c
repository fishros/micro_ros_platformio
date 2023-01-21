// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from fishbot_interfaces:srv/OledControl.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "fishbot_interfaces/srv/detail/oled_control__struct.h"
#include "fishbot_interfaces/srv/detail/oled_control__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool fishbot_interfaces__srv__oled_control__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("fishbot_interfaces.srv._oled_control.OledControl_Request", full_classname_dest, 56) == 0);
  }
  fishbot_interfaces__srv__OledControl_Request * ros_message = _ros_message;
  {  // px
    PyObject * field = PyObject_GetAttrString(_pymsg, "px");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->px = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // py
    PyObject * field = PyObject_GetAttrString(_pymsg, "py");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->py = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // data
    PyObject * field = PyObject_GetAttrString(_pymsg, "data");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->data, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * fishbot_interfaces__srv__oled_control__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OledControl_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("fishbot_interfaces.srv._oled_control");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OledControl_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  fishbot_interfaces__srv__OledControl_Request * ros_message = (fishbot_interfaces__srv__OledControl_Request *)raw_ros_message;
  {  // px
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->px);
    {
      int rc = PyObject_SetAttrString(_pymessage, "px", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // py
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->py);
    {
      int rc = PyObject_SetAttrString(_pymessage, "py", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->data.data,
      strlen(ros_message->data.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "fishbot_interfaces/srv/detail/oled_control__struct.h"
// already included above
// #include "fishbot_interfaces/srv/detail/oled_control__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool fishbot_interfaces__srv__oled_control__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("fishbot_interfaces.srv._oled_control.OledControl_Response", full_classname_dest, 57) == 0);
  }
  fishbot_interfaces__srv__OledControl_Response * ros_message = _ros_message;
  {  // result
    PyObject * field = PyObject_GetAttrString(_pymsg, "result");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->result = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * fishbot_interfaces__srv__oled_control__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OledControl_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("fishbot_interfaces.srv._oled_control");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OledControl_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  fishbot_interfaces__srv__OledControl_Response * ros_message = (fishbot_interfaces__srv__OledControl_Response *)raw_ros_message;
  {  // result
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->result);
    {
      int rc = PyObject_SetAttrString(_pymessage, "result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
