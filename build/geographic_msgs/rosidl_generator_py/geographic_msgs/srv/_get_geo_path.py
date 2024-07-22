# generated from rosidl_generator_py/resource/_idl.py.em
# with input from geographic_msgs:srv/GetGeoPath.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetGeoPath_Request(type):
    """Metaclass of message 'GetGeoPath_Request'."""

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
            module = import_type_support('geographic_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'geographic_msgs.srv.GetGeoPath_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_geo_path__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_geo_path__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_geo_path__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_geo_path__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_geo_path__request

            from geographic_msgs.msg import GeoPoint
            if GeoPoint.__class__._TYPE_SUPPORT is None:
                GeoPoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetGeoPath_Request(metaclass=Metaclass_GetGeoPath_Request):
    """Message class 'GetGeoPath_Request'."""

    __slots__ = [
        '_start',
        '_goal',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'start': 'geographic_msgs/GeoPoint',
        'goal': 'geographic_msgs/GeoPoint',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geographic_msgs', 'msg'], 'GeoPoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geographic_msgs', 'msg'], 'GeoPoint'),  # noqa: E501
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
        from geographic_msgs.msg import GeoPoint
        self.start = kwargs.get('start', GeoPoint())
        from geographic_msgs.msg import GeoPoint
        self.goal = kwargs.get('goal', GeoPoint())

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
        if self.start != other.start:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def start(self):
        """Message field 'start'."""
        return self._start

    @start.setter
    def start(self, value):
        if self._check_fields:
            from geographic_msgs.msg import GeoPoint
            assert \
                isinstance(value, GeoPoint), \
                "The 'start' field must be a sub message of type 'GeoPoint'"
        self._start = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if self._check_fields:
            from geographic_msgs.msg import GeoPoint
            assert \
                isinstance(value, GeoPoint), \
                "The 'goal' field must be a sub message of type 'GeoPoint'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetGeoPath_Response(type):
    """Metaclass of message 'GetGeoPath_Response'."""

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
            module = import_type_support('geographic_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'geographic_msgs.srv.GetGeoPath_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_geo_path__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_geo_path__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_geo_path__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_geo_path__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_geo_path__response

            from geographic_msgs.msg import GeoPath
            if GeoPath.__class__._TYPE_SUPPORT is None:
                GeoPath.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetGeoPath_Response(metaclass=Metaclass_GetGeoPath_Response):
    """Message class 'GetGeoPath_Response'."""

    __slots__ = [
        '_success',
        '_status',
        '_plan',
        '_network',
        '_start_seg',
        '_goal_seg',
        '_distance',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'status': 'string',
        'plan': 'geographic_msgs/GeoPath',
        'network': 'unique_identifier_msgs/UUID',
        'start_seg': 'unique_identifier_msgs/UUID',
        'goal_seg': 'unique_identifier_msgs/UUID',
        'distance': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geographic_msgs', 'msg'], 'GeoPath'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.success = kwargs.get('success', bool())
        self.status = kwargs.get('status', str())
        from geographic_msgs.msg import GeoPath
        self.plan = kwargs.get('plan', GeoPath())
        from unique_identifier_msgs.msg import UUID
        self.network = kwargs.get('network', UUID())
        from unique_identifier_msgs.msg import UUID
        self.start_seg = kwargs.get('start_seg', UUID())
        from unique_identifier_msgs.msg import UUID
        self.goal_seg = kwargs.get('goal_seg', UUID())
        self.distance = kwargs.get('distance', float())

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
        if self.success != other.success:
            return False
        if self.status != other.status:
            return False
        if self.plan != other.plan:
            return False
        if self.network != other.network:
            return False
        if self.start_seg != other.start_seg:
            return False
        if self.goal_seg != other.goal_seg:
            return False
        if self.distance != other.distance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'status' field must be of type 'str'"
        self._status = value

    @builtins.property
    def plan(self):
        """Message field 'plan'."""
        return self._plan

    @plan.setter
    def plan(self, value):
        if self._check_fields:
            from geographic_msgs.msg import GeoPath
            assert \
                isinstance(value, GeoPath), \
                "The 'plan' field must be a sub message of type 'GeoPath'"
        self._plan = value

    @builtins.property
    def network(self):
        """Message field 'network'."""
        return self._network

    @network.setter
    def network(self, value):
        if self._check_fields:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'network' field must be a sub message of type 'UUID'"
        self._network = value

    @builtins.property
    def start_seg(self):
        """Message field 'start_seg'."""
        return self._start_seg

    @start_seg.setter
    def start_seg(self, value):
        if self._check_fields:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'start_seg' field must be a sub message of type 'UUID'"
        self._start_seg = value

    @builtins.property
    def goal_seg(self):
        """Message field 'goal_seg'."""
        return self._goal_seg

    @goal_seg.setter
    def goal_seg(self, value):
        if self._check_fields:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_seg' field must be a sub message of type 'UUID'"
        self._goal_seg = value

    @builtins.property
    def distance(self):
        """Message field 'distance'."""
        return self._distance

    @distance.setter
    def distance(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._distance = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetGeoPath_Event(type):
    """Metaclass of message 'GetGeoPath_Event'."""

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
            module = import_type_support('geographic_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'geographic_msgs.srv.GetGeoPath_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_geo_path__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_geo_path__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_geo_path__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_geo_path__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_geo_path__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetGeoPath_Event(metaclass=Metaclass_GetGeoPath_Event):
    """Message class 'GetGeoPath_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<geographic_msgs/GetGeoPath_Request, 1>',
        'response': 'sequence<geographic_msgs/GetGeoPath_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['geographic_msgs', 'srv'], 'GetGeoPath_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['geographic_msgs', 'srv'], 'GetGeoPath_Response'), 1),  # noqa: E501
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
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

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
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from geographic_msgs.srv import GetGeoPath_Request
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
                 len(value) <= 1 and
                 all(isinstance(v, GetGeoPath_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'GetGeoPath_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from geographic_msgs.srv import GetGeoPath_Response
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
                 len(value) <= 1 and
                 all(isinstance(v, GetGeoPath_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'GetGeoPath_Response'"
        self._response = value


class Metaclass_GetGeoPath(type):
    """Metaclass of service 'GetGeoPath'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('geographic_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'geographic_msgs.srv.GetGeoPath')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_geo_path

            from geographic_msgs.srv import _get_geo_path
            if _get_geo_path.Metaclass_GetGeoPath_Request._TYPE_SUPPORT is None:
                _get_geo_path.Metaclass_GetGeoPath_Request.__import_type_support__()
            if _get_geo_path.Metaclass_GetGeoPath_Response._TYPE_SUPPORT is None:
                _get_geo_path.Metaclass_GetGeoPath_Response.__import_type_support__()
            if _get_geo_path.Metaclass_GetGeoPath_Event._TYPE_SUPPORT is None:
                _get_geo_path.Metaclass_GetGeoPath_Event.__import_type_support__()


class GetGeoPath(metaclass=Metaclass_GetGeoPath):
    from geographic_msgs.srv._get_geo_path import GetGeoPath_Request as Request
    from geographic_msgs.srv._get_geo_path import GetGeoPath_Response as Response
    from geographic_msgs.srv._get_geo_path import GetGeoPath_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
