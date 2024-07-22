# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nmea_msgs:msg/Gpzda.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Gpzda(type):
    """Metaclass of message 'Gpzda'."""

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
            module = import_type_support('nmea_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nmea_msgs.msg.Gpzda')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gpzda
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gpzda
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gpzda
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gpzda
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gpzda

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Gpzda(metaclass=Metaclass_Gpzda):
    """Message class 'Gpzda'."""

    __slots__ = [
        '_header',
        '_message_id',
        '_utc_seconds',
        '_day',
        '_month',
        '_year',
        '_hour_offset_gmt',
        '_minute_offset_gmt',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'message_id': 'string',
        'utc_seconds': 'uint32',
        'day': 'uint8',
        'month': 'uint8',
        'year': 'uint16',
        'hour_offset_gmt': 'int8',
        'minute_offset_gmt': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.message_id = kwargs.get('message_id', str())
        self.utc_seconds = kwargs.get('utc_seconds', int())
        self.day = kwargs.get('day', int())
        self.month = kwargs.get('month', int())
        self.year = kwargs.get('year', int())
        self.hour_offset_gmt = kwargs.get('hour_offset_gmt', int())
        self.minute_offset_gmt = kwargs.get('minute_offset_gmt', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.message_id != other.message_id:
            return False
        if self.utc_seconds != other.utc_seconds:
            return False
        if self.day != other.day:
            return False
        if self.month != other.month:
            return False
        if self.year != other.year:
            return False
        if self.hour_offset_gmt != other.hour_offset_gmt:
            return False
        if self.minute_offset_gmt != other.minute_offset_gmt:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def message_id(self):
        """Message field 'message_id'."""
        return self._message_id

    @message_id.setter
    def message_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'message_id' field must be of type 'str'"
        self._message_id = value

    @builtins.property
    def utc_seconds(self):
        """Message field 'utc_seconds'."""
        return self._utc_seconds

    @utc_seconds.setter
    def utc_seconds(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'utc_seconds' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'utc_seconds' field must be an unsigned integer in [0, 4294967295]"
        self._utc_seconds = value

    @builtins.property
    def day(self):
        """Message field 'day'."""
        return self._day

    @day.setter
    def day(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'day' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'day' field must be an unsigned integer in [0, 255]"
        self._day = value

    @builtins.property
    def month(self):
        """Message field 'month'."""
        return self._month

    @month.setter
    def month(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'month' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'month' field must be an unsigned integer in [0, 255]"
        self._month = value

    @builtins.property
    def year(self):
        """Message field 'year'."""
        return self._year

    @year.setter
    def year(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'year' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'year' field must be an unsigned integer in [0, 65535]"
        self._year = value

    @builtins.property
    def hour_offset_gmt(self):
        """Message field 'hour_offset_gmt'."""
        return self._hour_offset_gmt

    @hour_offset_gmt.setter
    def hour_offset_gmt(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'hour_offset_gmt' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'hour_offset_gmt' field must be an integer in [-128, 127]"
        self._hour_offset_gmt = value

    @builtins.property
    def minute_offset_gmt(self):
        """Message field 'minute_offset_gmt'."""
        return self._minute_offset_gmt

    @minute_offset_gmt.setter
    def minute_offset_gmt(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'minute_offset_gmt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'minute_offset_gmt' field must be an unsigned integer in [0, 255]"
        self._minute_offset_gmt = value
