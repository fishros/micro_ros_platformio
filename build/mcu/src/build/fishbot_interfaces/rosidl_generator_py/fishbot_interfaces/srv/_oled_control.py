# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fishbot_interfaces:srv/OledControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OledControl_Request(type):
    """Metaclass of message 'OledControl_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('fishbot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'fishbot_interfaces.srv.OledControl_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__oled_control__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__oled_control__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__oled_control__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__oled_control__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__oled_control__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OledControl_Request(metaclass=Metaclass_OledControl_Request):
    """Message class 'OledControl_Request'."""

    __slots__ = [
        '_px',
        '_py',
        '_data',
    ]

    _fields_and_field_types = {
        'px': 'int32',
        'py': 'int32',
        'data': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.px = kwargs.get('px', int())
        self.py = kwargs.get('py', int())
        self.data = kwargs.get('data', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.px != other.px:
            return False
        if self.py != other.py:
            return False
        if self.data != other.data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def px(self):
        """Message field 'px'."""
        return self._px

    @px.setter
    def px(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'px' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'px' field must be an integer in [-2147483648, 2147483647]"
        self._px = value

    @builtins.property
    def py(self):
        """Message field 'py'."""
        return self._py

    @py.setter
    def py(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'py' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'py' field must be an integer in [-2147483648, 2147483647]"
        self._py = value

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'data' field must be of type 'str'"
        self._data = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_OledControl_Response(type):
    """Metaclass of message 'OledControl_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('fishbot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'fishbot_interfaces.srv.OledControl_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__oled_control__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__oled_control__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__oled_control__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__oled_control__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__oled_control__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OledControl_Response(metaclass=Metaclass_OledControl_Response):
    """Message class 'OledControl_Response'."""

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'result' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'result' field must be an integer in [-2147483648, 2147483647]"
        self._result = value


class Metaclass_OledControl(type):
    """Metaclass of service 'OledControl'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('fishbot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'fishbot_interfaces.srv.OledControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__oled_control

            from fishbot_interfaces.srv import _oled_control
            if _oled_control.Metaclass_OledControl_Request._TYPE_SUPPORT is None:
                _oled_control.Metaclass_OledControl_Request.__import_type_support__()
            if _oled_control.Metaclass_OledControl_Response._TYPE_SUPPORT is None:
                _oled_control.Metaclass_OledControl_Response.__import_type_support__()


class OledControl(metaclass=Metaclass_OledControl):
    from fishbot_interfaces.srv._oled_control import OledControl_Request as Request
    from fishbot_interfaces.srv._oled_control import OledControl_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
