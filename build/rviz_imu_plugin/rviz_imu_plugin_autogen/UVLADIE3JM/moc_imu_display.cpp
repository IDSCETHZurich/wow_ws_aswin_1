/****************************************************************************
** Meta object code from reading C++ file 'imu_display.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/imu_tools/rviz_imu_plugin/src/imu_display.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imu_display.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rviz_imu_plugin__ImuDisplay_t {
    QByteArrayData data[6];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_imu_plugin__ImuDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_imu_plugin__ImuDisplay_t qt_meta_stringdata_rviz_imu_plugin__ImuDisplay = {
    {
QT_MOC_LITERAL(0, 0, 27), // "rviz_imu_plugin::ImuDisplay"
QT_MOC_LITERAL(1, 28, 9), // "updateTop"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 9), // "updateBox"
QT_MOC_LITERAL(4, 49, 10), // "updateAxes"
QT_MOC_LITERAL(5, 60, 9) // "updateAcc"

    },
    "rviz_imu_plugin::ImuDisplay\0updateTop\0"
    "\0updateBox\0updateAxes\0updateAcc"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_imu_plugin__ImuDisplay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x09 /* Protected */,
       3,    0,   35,    2, 0x09 /* Protected */,
       4,    0,   36,    2, 0x09 /* Protected */,
       5,    0,   37,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void rviz_imu_plugin::ImuDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ImuDisplay *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateTop(); break;
        case 1: _t->updateBox(); break;
        case 2: _t->updateAxes(); break;
        case 3: _t->updateAcc(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject rviz_imu_plugin::ImuDisplay::staticMetaObject = { {
    QMetaObject::SuperData::link<rviz_common::MessageFilterDisplay<sensor_msgs::msg::Imu>::staticMetaObject>(),
    qt_meta_stringdata_rviz_imu_plugin__ImuDisplay.data,
    qt_meta_data_rviz_imu_plugin__ImuDisplay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz_imu_plugin::ImuDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_imu_plugin::ImuDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_imu_plugin__ImuDisplay.stringdata0))
        return static_cast<void*>(this);
    return rviz_common::MessageFilterDisplay<sensor_msgs::msg::Imu>::qt_metacast(_clname);
}

int rviz_imu_plugin::ImuDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz_common::MessageFilterDisplay<sensor_msgs::msg::Imu>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
