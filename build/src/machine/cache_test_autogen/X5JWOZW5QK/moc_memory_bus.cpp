/****************************************************************************
** Meta object code from reading C++ file 'memory_bus.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/machine/memory/memory_bus.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'memory_bus.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmachineSCOPEMemoryDataBusENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmachineSCOPEMemoryDataBusENDCLASS = QtMocHelpers::stringData(
    "machine::MemoryDataBus",
    "range_backend_external_change",
    "",
    "const BackendMemory*",
    "device",
    "Offset",
    "start_offset",
    "last_offset",
    "AccessEffects",
    "type"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmachineSCOPEMemoryDataBusENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    4,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 8,    4,    6,    7,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject machine::MemoryDataBus::staticMetaObject = { {
    QMetaObject::SuperData::link<FrontendMemory::staticMetaObject>(),
    qt_meta_stringdata_CLASSmachineSCOPEMemoryDataBusENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmachineSCOPEMemoryDataBusENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmachineSCOPEMemoryDataBusENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MemoryDataBus, std::true_type>,
        // method 'range_backend_external_change'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const BackendMemory *, std::false_type>,
        QtPrivate::TypeAndForceComplete<Offset, std::false_type>,
        QtPrivate::TypeAndForceComplete<Offset, std::false_type>,
        QtPrivate::TypeAndForceComplete<AccessEffects, std::false_type>
    >,
    nullptr
} };

void machine::MemoryDataBus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MemoryDataBus *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->range_backend_external_change((*reinterpret_cast< std::add_pointer_t<const BackendMemory*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Offset>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<Offset>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<AccessEffects>>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObject *machine::MemoryDataBus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *machine::MemoryDataBus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmachineSCOPEMemoryDataBusENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FrontendMemory::qt_metacast(_clname);
}

int machine::MemoryDataBus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FrontendMemory::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
