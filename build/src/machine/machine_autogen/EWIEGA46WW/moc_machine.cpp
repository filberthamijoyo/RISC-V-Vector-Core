/****************************************************************************
** Meta object code from reading C++ file 'machine.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/machine/machine.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'machine.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmachineSCOPEMachineENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmachineSCOPEMachineENDCLASS = QtMocHelpers::stringData(
    "machine::Machine",
    "program_exit",
    "",
    "program_trap",
    "machine::SimulatorException&",
    "e",
    "status_change",
    "machine::Machine::Status",
    "st",
    "tick",
    "post_tick",
    "set_interrupt_signal",
    "irq_num",
    "active",
    "play",
    "pause",
    "step",
    "restart",
    "step_timer"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmachineSCOPEMachineENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    1 /* Public */,
       3,    1,   81,    2, 0x06,    2 /* Public */,
       6,    1,   84,    2, 0x06,    4 /* Public */,
       9,    0,   87,    2, 0x06,    6 /* Public */,
      10,    0,   88,    2, 0x06,    7 /* Public */,
      11,    2,   89,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      14,    0,   94,    2, 0x0a,   11 /* Public */,
      15,    0,   95,    2, 0x0a,   12 /* Public */,
      16,    0,   96,    2, 0x0a,   13 /* Public */,
      17,    0,   97,    2, 0x0a,   14 /* Public */,
      18,    0,   98,    2, 0x08,   15 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   12,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject machine::Machine::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmachineSCOPEMachineENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmachineSCOPEMachineENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmachineSCOPEMachineENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Machine, std::true_type>,
        // method 'program_exit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'program_trap'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<machine::SimulatorException &, std::false_type>,
        // method 'status_change'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<machine::Machine::Status, std::false_type>,
        // method 'tick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'post_tick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'set_interrupt_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'play'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pause'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'step'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'restart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'step_timer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void machine::Machine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Machine *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->program_exit(); break;
        case 1: _t->program_trap((*reinterpret_cast< std::add_pointer_t<machine::SimulatorException&>>(_a[1]))); break;
        case 2: _t->status_change((*reinterpret_cast< std::add_pointer_t<machine::Machine::Status>>(_a[1]))); break;
        case 3: _t->tick(); break;
        case 4: _t->post_tick(); break;
        case 5: _t->set_interrupt_signal((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 6: _t->play(); break;
        case 7: _t->pause(); break;
        case 8: _t->step(); break;
        case 9: _t->restart(); break;
        case 10: _t->step_timer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Machine::*)();
            if (_t _q_method = &Machine::program_exit; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Machine::*)(machine::SimulatorException & );
            if (_t _q_method = &Machine::program_trap; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Machine::*)(machine::Machine::Status );
            if (_t _q_method = &Machine::status_change; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Machine::*)();
            if (_t _q_method = &Machine::tick; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Machine::*)();
            if (_t _q_method = &Machine::post_tick; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Machine::*)(uint , bool );
            if (_t _q_method = &Machine::set_interrupt_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject *machine::Machine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *machine::Machine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmachineSCOPEMachineENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int machine::Machine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void machine::Machine::program_exit()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void machine::Machine::program_trap(machine::SimulatorException & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void machine::Machine::status_change(machine::Machine::Status _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void machine::Machine::tick()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void machine::Machine::post_tick()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void machine::Machine::set_interrupt_signal(uint _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
