// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from gps_msgs:msg/GPSFix.idl
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
#include "gps_msgs/msg/detail/gps_fix__struct.h"
#include "gps_msgs/msg/detail/gps_fix__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool gps_msgs__msg__gps_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * gps_msgs__msg__gps_status__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool gps_msgs__msg__gps_fix__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[29];
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
    assert(strncmp("gps_msgs.msg._gps_fix.GPSFix", full_classname_dest, 28) == 0);
  }
  gps_msgs__msg__GPSFix * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    if (!gps_msgs__msg__gps_status__convert_from_py(field, &ros_message->status)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // latitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "latitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // altitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "altitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->altitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // track
    PyObject * field = PyObject_GetAttrString(_pymsg, "track");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->track = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // climb
    PyObject * field = PyObject_GetAttrString(_pymsg, "climb");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->climb = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dip
    PyObject * field = PyObject_GetAttrString(_pymsg, "dip");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dip = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // time
    PyObject * field = PyObject_GetAttrString(_pymsg, "time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gdop
    PyObject * field = PyObject_GetAttrString(_pymsg, "gdop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gdop = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pdop
    PyObject * field = PyObject_GetAttrString(_pymsg, "pdop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pdop = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hdop
    PyObject * field = PyObject_GetAttrString(_pymsg, "hdop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hdop = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vdop
    PyObject * field = PyObject_GetAttrString(_pymsg, "vdop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vdop = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tdop
    PyObject * field = PyObject_GetAttrString(_pymsg, "tdop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tdop = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // err
    PyObject * field = PyObject_GetAttrString(_pymsg, "err");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->err = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // err_horz
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_horz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->err_horz = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // err_vert
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_vert");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->err_vert = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // err_track
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_track");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->err_track = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // err_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->err_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // err_climb
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_climb");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->err_climb = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // err_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->err_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // err_pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->err_pitch = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // err_roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->err_roll = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // err_dip
    PyObject * field = PyObject_GetAttrString(_pymsg, "err_dip");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->err_dip = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position_covariance
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_covariance");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 9;
      double * dest = ros_message->position_covariance;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // position_covariance_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_covariance_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->position_covariance_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * gps_msgs__msg__gps_fix__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GPSFix */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("gps_msgs.msg._gps_fix");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GPSFix");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  gps_msgs__msg__GPSFix * ros_message = (gps_msgs__msg__GPSFix *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = gps_msgs__msg__gps_status__convert_to_py(&ros_message->status);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // altitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->altitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "altitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // track
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->track);
    {
      int rc = PyObject_SetAttrString(_pymessage, "track", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // climb
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->climb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "climb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dip
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dip);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dip", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gdop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gdop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gdop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pdop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pdop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pdop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hdop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hdop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hdop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vdop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vdop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vdop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tdop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tdop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tdop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->err);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_horz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->err_horz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_horz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_vert
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->err_vert);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_vert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_track
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->err_track);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_track", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->err_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_climb
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->err_climb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_climb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->err_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->err_pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->err_roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // err_dip
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->err_dip);
    {
      int rc = PyObject_SetAttrString(_pymessage, "err_dip", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_covariance
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "position_covariance");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->position_covariance[0]);
    memcpy(dst, src, 9 * sizeof(double));
    Py_DECREF(field);
  }
  {  // position_covariance_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->position_covariance_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_covariance_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
