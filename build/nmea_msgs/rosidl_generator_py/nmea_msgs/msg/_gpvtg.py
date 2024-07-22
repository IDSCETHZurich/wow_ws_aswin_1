# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nmea_msgs:msg/Gpvtg.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Gpvtg(type):
    """Metaclass of message 'Gpvtg'."""

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
                'nmea_msgs.msg.Gpvtg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gpvtg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gpvtg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gpvtg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gpvtg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gpvtg

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


class Gpvtg(metaclass=Metaclass_Gpvtg):
    """Message class 'Gpvtg'."""

    __slots__ = [
        '_header',
        '_message_id',
        '_track_t',
        '_track_t_ref',
        '_track_m',
        '_track_m_ref',
        '_speed_n',
        '_speed_n_unit',
        '_speed_k',
        '_speed_k_unit',
        '_mode_indicator',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'message_id': 'string',
        'track_t': 'float',
        'track_t_ref': 'string',
        'track_m': 'float',
        'track_m_ref': 'string',
        'speed_n': 'float',
        'speed_n_unit': 'string',
        'speed_k': 'float',
        'speed_k_unit': 'string',
        'mode_indicator': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.track_t = kwargs.get('track_t', float())
        self.track_t_ref = kwargs.get('track_t_ref', str())
        self.track_m = kwargs.get('track_m', float())
        self.track_m_ref = kwargs.get('track_m_ref', str())
        self.speed_n = kwargs.get('speed_n', float())
        self.speed_n_unit = kwargs.get('speed_n_unit', str())
        self.speed_k = kwargs.get('speed_k', float())
        self.speed_k_unit = kwargs.get('speed_k_unit', str())
        self.mode_indicator = kwargs.get('mode_indicator', str())

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
        if self.track_t != other.track_t:
            return False
        if self.track_t_ref != other.track_t_ref:
            return False
        if self.track_m != other.track_m:
            return False
        if self.track_m_ref != other.track_m_ref:
            return False
        if self.speed_n != other.speed_n:
            return False
        if self.speed_n_unit != other.speed_n_unit:
            return False
        if self.speed_k != other.speed_k:
            return False
        if self.speed_k_unit != other.speed_k_unit:
            return False
        if self.mode_indicator != other.mode_indicator:
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
    def track_t(self):
        """Message field 'track_t'."""
        return self._track_t

    @track_t.setter
    def track_t(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'track_t' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'track_t' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._track_t = value

    @builtins.property
    def track_t_ref(self):
        """Message field 'track_t_ref'."""
        return self._track_t_ref

    @track_t_ref.setter
    def track_t_ref(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'track_t_ref' field must be of type 'str'"
        self._track_t_ref = value

    @builtins.property
    def track_m(self):
        """Message field 'track_m'."""
        return self._track_m

    @track_m.setter
    def track_m(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'track_m' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'track_m' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._track_m = value

    @builtins.property
    def track_m_ref(self):
        """Message field 'track_m_ref'."""
        return self._track_m_ref

    @track_m_ref.setter
    def track_m_ref(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'track_m_ref' field must be of type 'str'"
        self._track_m_ref = value

    @builtins.property
    def speed_n(self):
        """Message field 'speed_n'."""
        return self._speed_n

    @speed_n.setter
    def speed_n(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'speed_n' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed_n' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed_n = value

    @builtins.property
    def speed_n_unit(self):
        """Message field 'speed_n_unit'."""
        return self._speed_n_unit

    @speed_n_unit.setter
    def speed_n_unit(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'speed_n_unit' field must be of type 'str'"
        self._speed_n_unit = value

    @builtins.property
    def speed_k(self):
        """Message field 'speed_k'."""
        return self._speed_k

    @speed_k.setter
    def speed_k(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'speed_k' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed_k' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed_k = value

    @builtins.property
    def speed_k_unit(self):
        """Message field 'speed_k_unit'."""
        return self._speed_k_unit

    @speed_k_unit.setter
    def speed_k_unit(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'speed_k_unit' field must be of type 'str'"
        self._speed_k_unit = value

    @builtins.property
    def mode_indicator(self):
        """Message field 'mode_indicator'."""
        return self._mode_indicator

    @mode_indicator.setter
    def mode_indicator(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'mode_indicator' field must be of type 'str'"
        self._mode_indicator = value
