/****************************************************************************
** Meta object code from reading C++ file 'memory.test.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/machine/memory/backend/memory.test.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'memory.test.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTestMemoryENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTestMemoryENDCLASS = QtMocHelpers::stringData(
    "TestMemory",
    "memory",
    "",
    "memory_data",
    "memory_section",
    "memory_section_data",
    "memory_compare",
    "memory_compare_data",
    "memory_write_ctl_data",
    "memory_write_ctl",
    "memory_read_ctl_data",
    "memory_read_ctl",
    "memory_memtest_data",
    "memory_memtest"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTestMemoryENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x08,    1 /* Private */,
       3,    0,   87,    2, 0x08,    2 /* Private */,
       4,    0,   88,    2, 0x08,    3 /* Private */,
       5,    0,   89,    2, 0x08,    4 /* Private */,
       6,    0,   90,    2, 0x08,    5 /* Private */,
       7,    0,   91,    2, 0x08,    6 /* Private */,
       8,    0,   92,    2, 0x08,    7 /* Private */,
       9,    0,   93,    2, 0x08,    8 /* Private */,
      10,    0,   94,    2, 0x08,    9 /* Private */,
      11,    0,   95,    2, 0x08,   10 /* Private */,
      12,    0,   96,    2, 0x08,   11 /* Private */,
      13,    0,   97,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TestMemory::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTestMemoryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTestMemoryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTestMemoryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TestMemory, std::true_type>,
        // method 'memory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'memory_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'memory_section'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'memory_section_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'memory_compare'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'memory_compare_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'memory_write_ctl_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'memory_write_ctl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'memory_read_ctl_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'memory_read_ctl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'memory_memtest_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'memory_memtest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TestMemory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestMemory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->memory(); break;
        case 1: _t->memory_data(); break;
        case 2: _t->memory_section(); break;
        case 3: _t->memory_section_data(); break;
        case 4: _t->memory_compare(); break;
        case 5: _t->memory_compare_data(); break;
        case 6: _t->memory_write_ctl_data(); break;
        case 7: _t->memory_write_ctl(); break;
        case 8: _t->memory_read_ctl_data(); break;
        case 9: _t->memory_read_ctl(); break;
        case 10: _t->memory_memtest_data(); break;
        case 11: _t->memory_memtest(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *TestMemory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestMemory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTestMemoryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestMemory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
