/****************************************************************************
** Meta object code from reading C++ file 'peripspiled.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/machine/memory/backend/peripspiled.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'peripspiled.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmachineSCOPEPeripSpiLedENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmachineSCOPEPeripSpiLedENDCLASS = QtMocHelpers::stringData(
    "machine::PeripSpiLed",
    "write_notification",
    "",
    "Offset",
    "address",
    "uint32_t",
    "value",
    "read_notification",
    "led_line_changed",
    "val",
    "led_rgb1_changed",
    "led_rgb2_changed",
    "red_knob_update",
    "green_knob_update",
    "blue_knob_update",
    "red_knob_push",
    "state",
    "green_knob_push",
    "blue_knob_push"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmachineSCOPEPeripSpiLedENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   80,    2, 0x106,    1 /* Public | MethodIsConst  */,
       7,    2,   85,    2, 0x106,    4 /* Public | MethodIsConst  */,
       8,    1,   90,    2, 0x106,    7 /* Public | MethodIsConst  */,
      10,    1,   93,    2, 0x106,    9 /* Public | MethodIsConst  */,
      11,    1,   96,    2, 0x106,   11 /* Public | MethodIsConst  */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    1,   99,    2, 0x0a,   13 /* Public */,
      13,    1,  102,    2, 0x0a,   15 /* Public */,
      14,    1,  105,    2, 0x0a,   17 /* Public */,
      15,    1,  108,    2, 0x0a,   19 /* Public */,
      17,    1,  111,    2, 0x0a,   21 /* Public */,
      18,    1,  114,    2, 0x0a,   23 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::UInt,    9,
    QMetaType::Void, QMetaType::UInt,    9,
    QMetaType::Void, QMetaType::UInt,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,

       0        // eod
};

Q_CONSTINIT const QMetaObject machine::PeripSpiLed::staticMetaObject = { {
    QMetaObject::SuperData::link<BackendMemory::staticMetaObject>(),
    qt_meta_stringdata_CLASSmachineSCOPEPeripSpiLedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmachineSCOPEPeripSpiLedENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmachineSCOPEPeripSpiLedENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PeripSpiLed, std::true_type>,
        // method 'write_notification'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Offset, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>,
        // method 'read_notification'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Offset, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>,
        // method 'led_line_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint, std::false_type>,
        // method 'led_rgb1_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint, std::false_type>,
        // method 'led_rgb2_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint, std::false_type>,
        // method 'red_knob_update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'green_knob_update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'blue_knob_update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'red_knob_push'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'green_knob_push'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'blue_knob_push'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void machine::PeripSpiLed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PeripSpiLed *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->write_notification((*reinterpret_cast< std::add_pointer_t<Offset>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[2]))); break;
        case 1: _t->read_notification((*reinterpret_cast< std::add_pointer_t<Offset>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[2]))); break;
        case 2: _t->led_line_changed((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 3: _t->led_rgb1_changed((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 4: _t->led_rgb2_changed((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 5: _t->red_knob_update((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->green_knob_update((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->blue_knob_update((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->red_knob_push((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->green_knob_push((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->blue_knob_push((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PeripSpiLed::*)(Offset , uint32_t ) const;
            if (_t _q_method = &PeripSpiLed::write_notification; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PeripSpiLed::*)(Offset , uint32_t ) const;
            if (_t _q_method = &PeripSpiLed::read_notification; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PeripSpiLed::*)(uint ) const;
            if (_t _q_method = &PeripSpiLed::led_line_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PeripSpiLed::*)(uint ) const;
            if (_t _q_method = &PeripSpiLed::led_rgb1_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PeripSpiLed::*)(uint ) const;
            if (_t _q_method = &PeripSpiLed::led_rgb2_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *machine::PeripSpiLed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *machine::PeripSpiLed::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmachineSCOPEPeripSpiLedENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return BackendMemory::qt_metacast(_clname);
}

int machine::PeripSpiLed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BackendMemory::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void machine::PeripSpiLed::write_notification(Offset _t1, uint32_t _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(const_cast< machine::PeripSpiLed *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void machine::PeripSpiLed::read_notification(Offset _t1, uint32_t _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(const_cast< machine::PeripSpiLed *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void machine::PeripSpiLed::led_line_changed(uint _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< machine::PeripSpiLed *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void machine::PeripSpiLed::led_rgb1_changed(uint _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< machine::PeripSpiLed *>(this), &staticMetaObject, 3, _a);
}

// SIGNAL 4
void machine::PeripSpiLed::led_rgb2_changed(uint _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< machine::PeripSpiLed *>(this), &staticMetaObject, 4, _a);
}
QT_WARNING_POP
