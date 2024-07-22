# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gps_msgs:msg/GPSFix.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'position_covariance'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GPSFix(type):
    """Metaclass of message 'GPSFix'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'COVARIANCE_TYPE_UNKNOWN': 0,
        'COVARIANCE_TYPE_APPROXIMATED': 1,
        'COVARIANCE_TYPE_DIAGONAL_KNOWN': 2,
        'COVARIANCE_TYPE_KNOWN': 3,
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
                'gps_msgs.msg.GPSFix')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gps_fix
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gps_fix
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gps_fix
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gps_fix
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gps_fix

            from gps_msgs.msg import GPSStatus
            if GPSStatus.__class__._TYPE_SUPPORT is None:
                GPSStatus.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'COVARIANCE_TYPE_UNKNOWN': cls.__constants['COVARIANCE_TYPE_UNKNOWN'],
            'COVARIANCE_TYPE_APPROXIMATED': cls.__constants['COVARIANCE_TYPE_APPROXIMATED'],
            'COVARIANCE_TYPE_DIAGONAL_KNOWN': cls.__constants['COVARIANCE_TYPE_DIAGONAL_KNOWN'],
            'COVARIANCE_TYPE_KNOWN': cls.__constants['COVARIANCE_TYPE_KNOWN'],
        }

    @property
    def COVARIANCE_TYPE_UNKNOWN(self):
        """Message constant 'COVARIANCE_TYPE_UNKNOWN'."""
        return Metaclass_GPSFix.__constants['COVARIANCE_TYPE_UNKNOWN']

    @property
    def COVARIANCE_TYPE_APPROXIMATED(self):
        """Message constant 'COVARIANCE_TYPE_APPROXIMATED'."""
        return Metaclass_GPSFix.__constants['COVARIANCE_TYPE_APPROXIMATED']

    @property
    def COVARIANCE_TYPE_DIAGONAL_KNOWN(self):
        """Message constant 'COVARIANCE_TYPE_DIAGONAL_KNOWN'."""
        return Metaclass_GPSFix.__constants['COVARIANCE_TYPE_DIAGONAL_KNOWN']

    @property
    def COVARIANCE_TYPE_KNOWN(self):
        """Message constant 'COVARIANCE_TYPE_KNOWN'."""
        return Metaclass_GPSFix.__constants['COVARIANCE_TYPE_KNOWN']


class GPSFix(metaclass=Metaclass_GPSFix):
    """
    Message class 'GPSFix'.

    Constants:
      COVARIANCE_TYPE_UNKNOWN
      COVARIANCE_TYPE_APPROXIMATED
      COVARIANCE_TYPE_DIAGONAL_KNOWN
      COVARIANCE_TYPE_KNOWN
    """

    __slots__ = [
        '_header',
        '_status',
        '_latitude',
        '_longitude',
        '_altitude',
        '_track',
        '_speed',
        '_climb',
        '_pitch',
        '_roll',
        '_dip',
        '_time',
        '_gdop',
        '_pdop',
        '_hdop',
        '_vdop',
        '_tdop',
        '_err',
        '_err_horz',
        '_err_vert',
        '_err_track',
        '_err_speed',
        '_err_climb',
        '_err_time',
        '_err_pitch',
        '_err_roll',
        '_err_dip',
        '_position_covariance',
        '_position_covariance_type',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'status': 'gps_msgs/GPSStatus',
        'latitude': 'double',
        'longitude': 'double',
        'altitude': 'double',
        'track': 'double',
        'speed': 'double',
        'climb': 'double',
        'pitch': 'double',
        'roll': 'double',
        'dip': 'double',
        'time': 'double',
        'gdop': 'double',
        'pdop': 'double',
        'hdop': 'double',
        'vdop': 'double',
        'tdop': 'double',
        'err': 'double',
        'err_horz': 'double',
        'err_vert': 'double',
        'err_track': 'double',
        'err_speed': 'double',
        'err_climb': 'double',
        'err_time': 'double',
        'err_pitch': 'double',
        'err_roll': 'double',
        'err_dip': 'double',
        'position_covariance': 'double[9]',
        'position_covariance_type': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['gps_msgs', 'msg'], 'GPSStatus'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 9),  # noqa: E501
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
        from gps_msgs.msg import GPSStatus
        self.status = kwargs.get('status', GPSStatus())
        self.latitude = kwargs.get('latitude', float())
        self.longitude = kwargs.get('longitude', float())
        self.altitude = kwargs.get('altitude', float())
        self.track = kwargs.get('track', float())
        self.speed = kwargs.get('speed', float())
        self.climb = kwargs.get('climb', float())
        self.pitch = kwargs.get('pitch', float())
        self.roll = kwargs.get('roll', float())
        self.dip = kwargs.get('dip', float())
        self.time = kwargs.get('time', float())
        self.gdop = kwargs.get('gdop', float())
        self.pdop = kwargs.get('pdop', float())
        self.hdop = kwargs.get('hdop', float())
        self.vdop = kwargs.get('vdop', float())
        self.tdop = kwargs.get('tdop', float())
        self.err = kwargs.get('err', float())
        self.err_horz = kwargs.get('err_horz', float())
        self.err_vert = kwargs.get('err_vert', float())
        self.err_track = kwargs.get('err_track', float())
        self.err_speed = kwargs.get('err_speed', float())
        self.err_climb = kwargs.get('err_climb', float())
        self.err_time = kwargs.get('err_time', float())
        self.err_pitch = kwargs.get('err_pitch', float())
        self.err_roll = kwargs.get('err_roll', float())
        self.err_dip = kwargs.get('err_dip', float())
        if 'position_covariance' not in kwargs:
            self.position_covariance = numpy.zeros(9, dtype=numpy.float64)
        else:
            self.position_covariance = numpy.array(kwargs.get('position_covariance'), dtype=numpy.float64)
            assert self.position_covariance.shape == (9, )
        self.position_covariance_type = kwargs.get('position_covariance_type', int())

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
        if self.status != other.status:
            return False
        if self.latitude != other.latitude:
            return False
        if self.longitude != other.longitude:
            return False
        if self.altitude != other.altitude:
            return False
        if self.track != other.track:
            return False
        if self.speed != other.speed:
            return False
        if self.climb != other.climb:
            return False
        if self.pitch != other.pitch:
            return False
        if self.roll != other.roll:
            return False
        if self.dip != other.dip:
            return False
        if self.time != other.time:
            return False
        if self.gdop != other.gdop:
            return False
        if self.pdop != other.pdop:
            return False
        if self.hdop != other.hdop:
            return False
        if self.vdop != other.vdop:
            return False
        if self.tdop != other.tdop:
            return False
        if self.err != other.err:
            return False
        if self.err_horz != other.err_horz:
            return False
        if self.err_vert != other.err_vert:
            return False
        if self.err_track != other.err_track:
            return False
        if self.err_speed != other.err_speed:
            return False
        if self.err_climb != other.err_climb:
            return False
        if self.err_time != other.err_time:
            return False
        if self.err_pitch != other.err_pitch:
            return False
        if self.err_roll != other.err_roll:
            return False
        if self.err_dip != other.err_dip:
            return False
        if all(self.position_covariance != other.position_covariance):
            return False
        if self.position_covariance_type != other.position_covariance_type:
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
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if self._check_fields:
            from gps_msgs.msg import GPSStatus
            assert \
                isinstance(value, GPSStatus), \
                "The 'status' field must be a sub message of type 'GPSStatus'"
        self._status = value

    @builtins.property
    def latitude(self):
        """Message field 'latitude'."""
        return self._latitude

    @latitude.setter
    def latitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'latitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'latitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._latitude = value

    @builtins.property
    def longitude(self):
        """Message field 'longitude'."""
        return self._longitude

    @longitude.setter
    def longitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'longitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'longitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._longitude = value

    @builtins.property
    def altitude(self):
        """Message field 'altitude'."""
        return self._altitude

    @altitude.setter
    def altitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'altitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'altitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._altitude = value

    @builtins.property
    def track(self):
        """Message field 'track'."""
        return self._track

    @track.setter
    def track(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'track' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'track' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._track = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed = value

    @builtins.property
    def climb(self):
        """Message field 'climb'."""
        return self._climb

    @climb.setter
    def climb(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'climb' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'climb' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._climb = value

    @builtins.property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'pitch' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pitch' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pitch = value

    @builtins.property
    def roll(self):
        """Message field 'roll'."""
        return self._roll

    @roll.setter
    def roll(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'roll' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'roll' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._roll = value

    @builtins.property
    def dip(self):
        """Message field 'dip'."""
        return self._dip

    @dip.setter
    def dip(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'dip' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dip' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dip = value

    @builtins.property
    def time(self):
        """Message field 'time'."""
        return self._time

    @time.setter
    def time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._time = value

    @builtins.property
    def gdop(self):
        """Message field 'gdop'."""
        return self._gdop

    @gdop.setter
    def gdop(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'gdop' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gdop' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gdop = value

    @builtins.property
    def pdop(self):
        """Message field 'pdop'."""
        return self._pdop

    @pdop.setter
    def pdop(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'pdop' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pdop' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pdop = value

    @builtins.property
    def hdop(self):
        """Message field 'hdop'."""
        return self._hdop

    @hdop.setter
    def hdop(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'hdop' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'hdop' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._hdop = value

    @builtins.property
    def vdop(self):
        """Message field 'vdop'."""
        return self._vdop

    @vdop.setter
    def vdop(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'vdop' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vdop' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vdop = value

    @builtins.property
    def tdop(self):
        """Message field 'tdop'."""
        return self._tdop

    @tdop.setter
    def tdop(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'tdop' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tdop' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tdop = value

    @builtins.property
    def err(self):
        """Message field 'err'."""
        return self._err

    @err.setter
    def err(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'err' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'err' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._err = value

    @builtins.property
    def err_horz(self):
        """Message field 'err_horz'."""
        return self._err_horz

    @err_horz.setter
    def err_horz(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'err_horz' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'err_horz' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._err_horz = value

    @builtins.property
    def err_vert(self):
        """Message field 'err_vert'."""
        return self._err_vert

    @err_vert.setter
    def err_vert(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'err_vert' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'err_vert' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._err_vert = value

    @builtins.property
    def err_track(self):
        """Message field 'err_track'."""
        return self._err_track

    @err_track.setter
    def err_track(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'err_track' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'err_track' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._err_track = value

    @builtins.property
    def err_speed(self):
        """Message field 'err_speed'."""
        return self._err_speed

    @err_speed.setter
    def err_speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'err_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'err_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._err_speed = value

    @builtins.property
    def err_climb(self):
        """Message field 'err_climb'."""
        return self._err_climb

    @err_climb.setter
    def err_climb(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'err_climb' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'err_climb' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._err_climb = value

    @builtins.property
    def err_time(self):
        """Message field 'err_time'."""
        return self._err_time

    @err_time.setter
    def err_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'err_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'err_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._err_time = value

    @builtins.property
    def err_pitch(self):
        """Message field 'err_pitch'."""
        return self._err_pitch

    @err_pitch.setter
    def err_pitch(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'err_pitch' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'err_pitch' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._err_pitch = value

    @builtins.property
    def err_roll(self):
        """Message field 'err_roll'."""
        return self._err_roll

    @err_roll.setter
    def err_roll(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'err_roll' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'err_roll' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._err_roll = value

    @builtins.property
    def err_dip(self):
        """Message field 'err_dip'."""
        return self._err_dip

    @err_dip.setter
    def err_dip(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'err_dip' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'err_dip' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._err_dip = value

    @builtins.property
    def position_covariance(self):
        """Message field 'position_covariance'."""
        return self._position_covariance

    @position_covariance.setter
    def position_covariance(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float64, \
                    "The 'position_covariance' numpy.ndarray() must have the dtype of 'numpy.float64'"
                assert value.size == 9, \
                    "The 'position_covariance' numpy.ndarray() must have a size of 9"
                self._position_covariance = value
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
                 len(value) == 9 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'position_covariance' field must be a set or sequence with length 9 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._position_covariance = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def position_covariance_type(self):
        """Message field 'position_covariance_type'."""
        return self._position_covariance_type

    @position_covariance_type.setter
    def position_covariance_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'position_covariance_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'position_covariance_type' field must be an unsigned integer in [0, 255]"
        self._position_covariance_type = value
