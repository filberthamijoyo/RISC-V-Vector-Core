/****************************************************************************
** Meta object code from reading C++ file 'frontend_memory.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/machine/memory/frontend_memory.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frontend_memory.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmachineSCOPEFrontendMemoryENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmachineSCOPEFrontendMemoryENDCLASS = QtMocHelpers::stringData(
    "machine::FrontendMemory",
    "external_change_notify",
    "",
    "const FrontendMemory*",
    "issuing_memory",
    "Address",
    "start_addr",
    "last_addr",
    "AccessEffects",
    "type"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmachineSCOPEFrontendMemoryENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    4,   20,    2, 0x106,    1 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 8,    4,    6,    7,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject machine::FrontendMemory::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmachineSCOPEFrontendMemoryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmachineSCOPEFrontendMemoryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmachineSCOPEFrontendMemoryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FrontendMemory, std::true_type>,
        // method 'external_change_notify'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const FrontendMemory *, std::false_type>,
        QtPrivate::TypeAndForceComplete<Address, std::false_type>,
        QtPrivate::TypeAndForceComplete<Address, std::false_type>,
        QtPrivate::TypeAndForceComplete<AccessEffects, std::false_type>
    >,
    nullptr
} };

void machine::FrontendMemory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FrontendMemory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->external_change_notify((*reinterpret_cast< std::add_pointer_t<const FrontendMemory*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Address>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<Address>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<AccessEffects>>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FrontendMemory::*)(const FrontendMemory * , Address , Address , AccessEffects ) const;
            if (_t _q_method = &FrontendMemory::external_change_notify; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *machine::FrontendMemory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *machine::FrontendMemory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmachineSCOPEFrontendMemoryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int machine::FrontendMemory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void machine::FrontendMemory::external_change_notify(const FrontendMemory * _t1, Address _t2, Address _t3, AccessEffects _t4)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(const_cast< machine::FrontendMemory *>(this), &staticMetaObject, 0, _a);
}
QT_WARNING_POP
