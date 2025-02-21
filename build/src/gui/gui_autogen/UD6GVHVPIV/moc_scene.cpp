/****************************************************************************
** Meta object code from reading C++ file 'scene.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/windows/coreview/scene.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scene.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSCoreViewSceneENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSCoreViewSceneENDCLASS = QtMocHelpers::stringData(
    "CoreViewScene",
    "request_registers",
    "",
    "request_data_memory",
    "request_program_memory",
    "request_jump_to_program_counter",
    "machine::Address",
    "addr",
    "request_cache_program",
    "request_cache_data",
    "request_peripherals",
    "request_terminal",
    "update_values"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCoreViewSceneENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    1 /* Public */,
       3,    0,   69,    2, 0x06,    2 /* Public */,
       4,    0,   70,    2, 0x06,    3 /* Public */,
       5,    1,   71,    2, 0x06,    4 /* Public */,
       8,    0,   74,    2, 0x06,    6 /* Public */,
       9,    0,   75,    2, 0x06,    7 /* Public */,
      10,    0,   76,    2, 0x06,    8 /* Public */,
      11,    0,   77,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    0,   78,    2, 0x0a,   10 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject CoreViewScene::staticMetaObject = { {
    QMetaObject::SuperData::link<svgscene::SvgGraphicsScene::staticMetaObject>(),
    qt_meta_stringdata_CLASSCoreViewSceneENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCoreViewSceneENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCoreViewSceneENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CoreViewScene, std::true_type>,
        // method 'request_registers'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'request_data_memory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'request_program_memory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'request_jump_to_program_counter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<machine::Address, std::false_type>,
        // method 'request_cache_program'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'request_cache_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'request_peripherals'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'request_terminal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update_values'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void CoreViewScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CoreViewScene *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->request_registers(); break;
        case 1: _t->request_data_memory(); break;
        case 2: _t->request_program_memory(); break;
        case 3: _t->request_jump_to_program_counter((*reinterpret_cast< std::add_pointer_t<machine::Address>>(_a[1]))); break;
        case 4: _t->request_cache_program(); break;
        case 5: _t->request_cache_data(); break;
        case 6: _t->request_peripherals(); break;
        case 7: _t->request_terminal(); break;
        case 8: _t->update_values(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< machine::Address >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CoreViewScene::*)();
            if (_t _q_method = &CoreViewScene::request_registers; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CoreViewScene::*)();
            if (_t _q_method = &CoreViewScene::request_data_memory; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CoreViewScene::*)();
            if (_t _q_method = &CoreViewScene::request_program_memory; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CoreViewScene::*)(machine::Address );
            if (_t _q_method = &CoreViewScene::request_jump_to_program_counter; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CoreViewScene::*)();
            if (_t _q_method = &CoreViewScene::request_cache_program; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CoreViewScene::*)();
            if (_t _q_method = &CoreViewScene::request_cache_data; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (CoreViewScene::*)();
            if (_t _q_method = &CoreViewScene::request_peripherals; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (CoreViewScene::*)();
            if (_t _q_method = &CoreViewScene::request_terminal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject *CoreViewScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CoreViewScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCoreViewSceneENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return svgscene::SvgGraphicsScene::qt_metacast(_clname);
}

int CoreViewScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = svgscene::SvgGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void CoreViewScene::request_registers()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CoreViewScene::request_data_memory()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CoreViewScene::request_program_memory()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void CoreViewScene::request_jump_to_program_counter(machine::Address _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CoreViewScene::request_cache_program()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void CoreViewScene::request_cache_data()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void CoreViewScene::request_peripherals()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void CoreViewScene::request_terminal()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
