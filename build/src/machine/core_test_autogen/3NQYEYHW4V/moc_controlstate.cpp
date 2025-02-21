/****************************************************************************
** Meta object code from reading C++ file 'controlstate.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/machine/csr/controlstate.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controlstate.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmachineSCOPECSRSCOPEControlStateENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmachineSCOPECSRSCOPEControlStateENDCLASS = QtMocHelpers::stringData(
    "machine::CSR::ControlState",
    "write_signal",
    "",
    "size_t",
    "internal_reg_id",
    "RegisterValue",
    "val",
    "read_signal",
    "set_interrupt_signal",
    "irq_num",
    "active",
    "exception_initiate",
    "PrivilegeLevel",
    "act_privlev",
    "to_privlev",
    "exception_return"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmachineSCOPECSRSCOPEControlStateENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   44,    2, 0x06,    1 /* Public */,
       7,    2,   49,    2, 0x106,    4 /* Public | MethodIsConst  */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    2,   54,    2, 0x0a,    7 /* Public */,
      11,    2,   59,    2, 0x0a,   10 /* Public */,
      15,    1,   64,    2, 0x0a,   13 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,    9,   10,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12,   13,   14,
    0x80000000 | 12, 0x80000000 | 12,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject machine::CSR::ControlState::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmachineSCOPECSRSCOPEControlStateENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmachineSCOPECSRSCOPEControlStateENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmachineSCOPECSRSCOPEControlStateENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ControlState, std::true_type>,
        // method 'write_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<size_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<RegisterValue, std::false_type>,
        // method 'read_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<size_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<RegisterValue, std::false_type>,
        // method 'set_interrupt_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'exception_initiate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<PrivilegeLevel, std::false_type>,
        QtPrivate::TypeAndForceComplete<PrivilegeLevel, std::false_type>,
        // method 'exception_return'
        QtPrivate::TypeAndForceComplete<PrivilegeLevel, std::false_type>,
        QtPrivate::TypeAndForceComplete<PrivilegeLevel, std::false_type>
    >,
    nullptr
} };

void machine::CSR::ControlState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ControlState *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->write_signal((*reinterpret_cast< std::add_pointer_t<size_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<RegisterValue>>(_a[2]))); break;
        case 1: _t->read_signal((*reinterpret_cast< std::add_pointer_t<size_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<RegisterValue>>(_a[2]))); break;
        case 2: _t->set_interrupt_signal((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 3: _t->exception_initiate((*reinterpret_cast< std::add_pointer_t<PrivilegeLevel>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<PrivilegeLevel>>(_a[2]))); break;
        case 4: { PrivilegeLevel _r = _t->exception_return((*reinterpret_cast< std::add_pointer_t<PrivilegeLevel>>(_a[1])));
            if (_a[0]) *reinterpret_cast< PrivilegeLevel*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ControlState::*)(size_t , RegisterValue );
            if (_t _q_method = &ControlState::write_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ControlState::*)(size_t , RegisterValue ) const;
            if (_t _q_method = &ControlState::read_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *machine::CSR::ControlState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *machine::CSR::ControlState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmachineSCOPECSRSCOPEControlStateENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int machine::CSR::ControlState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void machine::CSR::ControlState::write_signal(size_t _t1, RegisterValue _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void machine::CSR::ControlState::read_signal(size_t _t1, RegisterValue _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(const_cast< machine::CSR::ControlState *>(this), &staticMetaObject, 1, _a);
}
QT_WARNING_POP
