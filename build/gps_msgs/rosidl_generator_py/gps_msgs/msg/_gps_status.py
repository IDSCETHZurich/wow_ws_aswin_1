# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gps_msgs:msg/GPSStatus.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'satellite_used_prn'
# Member 'satellite_visible_prn'
# Member 'satellite_visible_z'
# Member 'satellite_visible_azimuth'
# Member 'satellite_visible_snr'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GPSStatus(type):
    """Metaclass of message 'GPSStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATUS_NO_FIX': -1,
        'STATUS_FIX': 0,
        'STATUS_SBAS_FIX': 1,
        'STATUS_GBAS_FIX': 2,
        'STATUS_DGPS_FIX': 18,
        'STATUS_RTK_FIX': 19,
        'STATUS_RTK_FLOAT': 20,
        'STATUS_WAAS_FIX': 33,
        'SOURCE_NONE': 0,
        'SOURCE_GPS': 1,
        'SOURCE_POINTS': 2,
        'SOURCE_DOPPLER': 4,
        'SOURCE_ALTIMETER': 8,
        'SOURCE_MAGNETIC': 16,
        'SOURCE_GYRO': 32,
        'SOURCE_ACCEL': 64,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('gps_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'gps_msgs.msg.GPSStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gps_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gps_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gps_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gps_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gps_status

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATUS_NO_FIX': cls.__constants['STATUS_NO_FIX'],
            'STATUS_FIX': cls.__constants['STATUS_FIX'],
            'STATUS_SBAS_FIX': cls.__constants['STATUS_SBAS_FIX'],
            'STATUS_GBAS_FIX': cls.__constants['STATUS_GBAS_FIX'],
            'STATUS_DGPS_FIX': cls.__constants['STATUS_DGPS_FIX'],
            'STATUS_RTK_FIX': cls.__constants['STATUS_RTK_FIX'],
            'STATUS_RTK_FLOAT': cls.__constants['STATUS_RTK_FLOAT'],
            'STATUS_WAAS_FIX': cls.__constants['STATUS_WAAS_FIX'],
            'SOURCE_NONE': cls.__constants['SOURCE_NONE'],
            'SOURCE_GPS': cls.__constants['SOURCE_GPS'],
            'SOURCE_POINTS': cls.__constants['SOURCE_POINTS'],
            'SOURCE_DOPPLER': cls.__constants['SOURCE_DOPPLER'],
            'SOURCE_ALTIMETER': cls.__constants['SOURCE_ALTIMETER'],
            'SOURCE_MAGNETIC': cls.__constants['SOURCE_MAGNETIC'],
            'SOURCE_GYRO': cls.__constants['SOURCE_GYRO'],
            'SOURCE_ACCEL': cls.__constants['SOURCE_ACCEL'],
        }

    @property
    def STATUS_NO_FIX(self):
        """Message constant 'STATUS_NO_FIX'."""
        return Metaclass_GPSStatus.__constants['STATUS_NO_FIX']

    @property
    def STATUS_FIX(self):
        """Message constant 'STATUS_FIX'."""
        return Metaclass_GPSStatus.__constants['STATUS_FIX']

    @property
    def STATUS_SBAS_FIX(self):
        """Message constant 'STATUS_SBAS_FIX'."""
        return Metaclass_GPSStatus.__constants['STATUS_SBAS_FIX']

    @property
    def STATUS_GBAS_FIX(self):
        """Message constant 'STATUS_GBAS_FIX'."""
        return Metaclass_GPSStatus.__constants['STATUS_GBAS_FIX']

    @property
    def STATUS_DGPS_FIX(self):
        """Message constant 'STATUS_DGPS_FIX'."""
        return Metaclass_GPSStatus.__constants['STATUS_DGPS_FIX']

    @property
    def STATUS_RTK_FIX(self):
        """Message constant 'STATUS_RTK_FIX'."""
        return Metaclass_GPSStatus.__constants['STATUS_RTK_FIX']

    @property
    def STATUS_RTK_FLOAT(self):
        """Message constant 'STATUS_RTK_FLOAT'."""
        return Metaclass_GPSStatus.__constants['STATUS_RTK_FLOAT']

    @property
    def STATUS_WAAS_FIX(self):
        """Message constant 'STATUS_WAAS_FIX'."""
        return Metaclass_GPSStatus.__constants['STATUS_WAAS_FIX']

    @property
    def SOURCE_NONE(self):
        """Message constant 'SOURCE_NONE'."""
        return Metaclass_GPSStatus.__constants['SOURCE_NONE']

    @property
    def SOURCE_GPS(self):
        """Message constant 'SOURCE_GPS'."""
        return Metaclass_GPSStatus.__constants['SOURCE_GPS']

    @property
    def SOURCE_POINTS(self):
        """Message constant 'SOURCE_POINTS'."""
        return Metaclass_GPSStatus.__constants['SOURCE_POINTS']

    @property
    def SOURCE_DOPPLER(self):
        """Message constant 'SOURCE_DOPPLER'."""
        return Metaclass_GPSStatus.__constants['SOURCE_DOPPLER']

    @property
    def SOURCE_ALTIMETER(self):
        """Message constant 'SOURCE_ALTIMETER'."""
        return Metaclass_GPSStatus.__constants['SOURCE_ALTIMETER']

    @property
    def SOURCE_MAGNETIC(self):
        """Message constant 'SOURCE_MAGNETIC'."""
        return Metaclass_GPSStatus.__constants['SOURCE_MAGNETIC']

    @property
    def SOURCE_GYRO(self):
        """Message constant 'SOURCE_GYRO'."""
        return Metaclass_GPSStatus.__constants['SOURCE_GYRO']

    @property
    def SOURCE_ACCEL(self):
        """Message constant 'SOURCE_ACCEL'."""
        return Metaclass_GPSStatus.__constants['SOURCE_ACCEL']


class GPSStatus(metaclass=Metaclass_GPSStatus):
    """
    Message class 'GPSStatus'.

    Constants:
      STATUS_NO_FIX
      STATUS_FIX
      STATUS_SBAS_FIX
      STATUS_GBAS_FIX
      STATUS_DGPS_FIX
      STATUS_RTK_FIX
      STATUS_RTK_FLOAT
      STATUS_WAAS_FIX
      SOURCE_NONE
      SOURCE_GPS
      SOURCE_POINTS
      SOURCE_DOPPLER
      SOURCE_ALTIMETER
      SOURCE_MAGNETIC
      SOURCE_GYRO
      SOURCE_ACCEL
    """

    __slots__ = [
        '_header',
        '_satellites_used',
        '_satellite_used_prn',
        '_satellites_visible',
        '_satellite_visible_prn',
        '_satellite_visible_z',
        '_satellite_visible_azimuth',
        '_satellite_visible_snr',
        '_status',
        '_motion_source',
        '_orientation_source',
        '_position_source',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'satellites_used': 'uint16',
        'satellite_used_prn': 'sequence<int32>',
        'satellites_visible': 'uint16',
        'satellite_visible_prn': 'sequence<int32>',
        'satellite_visible_z': 'sequence<int32>',
        'satellite_visible_azimuth': 'sequence<int32>',
        'satellite_visible_snr': 'sequence<int32>',
        'status': 'int16',
        'motion_source': 'uint16',
        'orientation_source': 'uint16',
        'position_source': 'uint16',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
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
        self.satellites_used = kwargs.get('satellites_used', int())
        self.satellite_used_prn = array.array('i', kwargs.get('satellite_used_prn', []))
        self.satellites_visible = kwargs.get('satellites_visible', int())
        self.satellite_visible_prn = array.array('i', kwargs.get('satellite_visible_prn', []))
        self.satellite_visible_z = array.array('i', kwargs.get('satellite_visible_z', []))
        self.satellite_visible_azimuth = array.array('i', kwargs.get('satellite_visible_azimuth', []))
        self.satellite_visible_snr = array.array('i', kwargs.get('satellite_visible_snr', []))
        self.status = kwargs.get('status', int())
        self.motion_source = kwargs.get('motion_source', int())
        self.orientation_source = kwargs.get('orientation_source', int())
        self.position_source = kwargs.get('position_source', int())

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
        if self.satellites_used != other.satellites_used:
            return False
        if self.satellite_used_prn != other.satellite_used_prn:
            return False
        if self.satellites_visible != other.satellites_visible:
            return False
        if self.satellite_visible_prn != other.satellite_visible_prn:
            return False
        if self.satellite_visible_z != other.satellite_visible_z:
            return False
        if self.satellite_visible_azimuth != other.satellite_visible_azimuth:
            return False
        if self.satellite_visible_snr != other.satellite_visible_snr:
            return False
        if self.status != other.status:
            return False
        if self.motion_source != other.motion_source:
            return False
        if self.orientation_source != other.orientation_source:
            return False
        if self.position_source != other.position_source:
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
    def satellites_used(self):
        """Message field 'satellites_used'."""
        return self._satellites_used

    @satellites_used.setter
    def satellites_used(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'satellites_used' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'satellites_used' field must be an unsigned integer in [0, 65535]"
        self._satellites_used = value

    @builtins.property
    def satellite_used_prn(self):
        """Message field 'satellite_used_prn'."""
        return self._satellite_used_prn

    @satellite_used_prn.setter
    def satellite_used_prn(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'i', \
                    "The 'satellite_used_prn' array.array() must have the type code of 'i'"
                self._satellite_used_prn = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'satellite_used_prn' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._satellite_used_prn = array.array('i', value)

    @builtins.property
    def satellites_visible(self):
        """Message field 'satellites_visible'."""
        return self._satellites_visible

    @satellites_visible.setter
    def satellites_visible(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'satellites_visible' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'satellites_visible' field must be an unsigned integer in [0, 65535]"
        self._satellites_visible = value

    @builtins.property
    def satellite_visible_prn(self):
        """Message field 'satellite_visible_prn'."""
        return self._satellite_visible_prn

    @satellite_visible_prn.setter
    def satellite_visible_prn(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'i', \
                    "The 'satellite_visible_prn' array.array() must have the type code of 'i'"
                self._satellite_visible_prn = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'satellite_visible_prn' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._satellite_visible_prn = array.array('i', value)

    @builtins.property
    def satellite_visible_z(self):
        """Message field 'satellite_visible_z'."""
        return self._satellite_visible_z

    @satellite_visible_z.setter
    def satellite_visible_z(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'i', \
                    "The 'satellite_visible_z' array.array() must have the type code of 'i'"
                self._satellite_visible_z = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'satellite_visible_z' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._satellite_visible_z = array.array('i', value)

    @builtins.property
    def satellite_visible_azimuth(self):
        """Message field 'satellite_visible_azimuth'."""
        return self._satellite_visible_azimuth

    @satellite_visible_azimuth.setter
    def satellite_visible_azimuth(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'i', \
                    "The 'satellite_visible_azimuth' array.array() must have the type code of 'i'"
                self._satellite_visible_azimuth = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'satellite_visible_azimuth' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._satellite_visible_azimuth = array.array('i', value)

    @builtins.property
    def satellite_visible_snr(self):
        """Message field 'satellite_visible_snr'."""
        return self._satellite_visible_snr

    @satellite_visible_snr.setter
    def satellite_visible_snr(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'i', \
                    "The 'satellite_visible_snr' array.array() must have the type code of 'i'"
                self._satellite_visible_snr = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'satellite_visible_snr' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._satellite_visible_snr = array.array('i', value)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'status' field must be an integer in [-32768, 32767]"
        self._status = value

    @builtins.property
    def motion_source(self):
        """Message field 'motion_source'."""
        return self._motion_source

    @motion_source.setter
    def motion_source(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'motion_source' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'motion_source' field must be an unsigned integer in [0, 65535]"
        self._motion_source = value

    @builtins.property
    def orientation_source(self):
        """Message field 'orientation_source'."""
        return self._orientation_source

    @orientation_source.setter
    def orientation_source(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'orientation_source' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'orientation_source' field must be an unsigned integer in [0, 65535]"
        self._orientation_source = value

    @builtins.property
    def position_source(self):
        """Message field 'position_source'."""
        return self._position_source

    @position_source.setter
    def position_source(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'position_source' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'position_source' field must be an unsigned integer in [0, 65535]"
        self._position_source = value
