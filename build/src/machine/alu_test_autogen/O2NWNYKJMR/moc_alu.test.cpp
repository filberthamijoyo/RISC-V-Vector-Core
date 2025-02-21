/****************************************************************************
** Meta object code from reading C++ file 'alu.test.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/machine/execute/alu.test.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'alu.test.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTestAluENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTestAluENDCLASS = QtMocHelpers::stringData(
    "TestAlu",
    "test_alu64_operate_data",
    "",
    "test_alu64_operate",
    "test_alu32_operate_data",
    "test_alu32_operate",
    "test_mul64_operate_data",
    "test_mul64_operate",
    "test_mul32_operate_data",
    "test_mul32_operate"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTestAluENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    0,   68,    2, 0x08,    7 /* Private */,
       9,    0,   69,    2, 0x08,    8 /* Private */,

 // slots: parameters
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

Q_CONSTINIT const QMetaObject TestAlu::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTestAluENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTestAluENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTestAluENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TestAlu, std::true_type>,
        // method 'test_alu64_operate_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_alu64_operate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_alu32_operate_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_alu32_operate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_mul64_operate_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_mul64_operate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_mul32_operate_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_mul32_operate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TestAlu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestAlu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->test_alu64_operate_data(); break;
        case 1: _t->test_alu64_operate(); break;
        case 2: _t->test_alu32_operate_data(); break;
        case 3: _t->test_alu32_operate(); break;
        case 4: _t->test_mul64_operate_data(); break;
        case 5: _t->test_mul64_operate(); break;
        case 6: _t->test_mul32_operate_data(); break;
        case 7: _t->test_mul32_operate(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *TestAlu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestAlu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTestAluENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestAlu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
