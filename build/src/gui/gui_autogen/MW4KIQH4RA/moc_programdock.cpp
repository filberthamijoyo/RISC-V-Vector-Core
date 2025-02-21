/****************************************************************************
** Meta object code from reading C++ file 'programdock.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/windows/program/programdock.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'programdock.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSProgramDockENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSProgramDockENDCLASS = QtMocHelpers::stringData(
    "ProgramDock",
    "machine_setup",
    "",
    "machine::Machine*",
    "machine",
    "jump_to_pc",
    "machine::Address",
    "focus_addr",
    "focus_addr_with_save",
    "stage_addr_changed",
    "stage",
    "addr",
    "request_update_all",
    "set_follow_inst",
    "fetch_inst_addr",
    "decode_inst_addr",
    "execute_inst_addr",
    "memory_inst_addr",
    "writeback_inst_addr",
    "report_error",
    "error",
    "update_pipeline_addrs",
    "machine::CoreState",
    "p"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSProgramDockENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   98,    2, 0x06,    1 /* Public */,
       5,    1,  101,    2, 0x06,    3 /* Public */,
       7,    1,  104,    2, 0x06,    5 /* Public */,
       8,    1,  107,    2, 0x06,    7 /* Public */,
       9,    2,  110,    2, 0x06,    9 /* Public */,
      12,    0,  115,    2, 0x06,   12 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      13,    1,  116,    2, 0x0a,   13 /* Public */,
      14,    1,  119,    2, 0x0a,   15 /* Public */,
      15,    1,  122,    2, 0x0a,   17 /* Public */,
      16,    1,  125,    2, 0x0a,   19 /* Public */,
      17,    1,  128,    2, 0x0a,   21 /* Public */,
      18,    1,  131,    2, 0x0a,   23 /* Public */,
      19,    1,  134,    2, 0x0a,   25 /* Public */,
      21,    1,  137,    2, 0x0a,   27 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 6,   10,   11,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 6,   11,
    QMetaType::Void, 0x80000000 | 6,   11,
    QMetaType::Void, 0x80000000 | 6,   11,
    QMetaType::Void, 0x80000000 | 6,   11,
    QMetaType::Void, 0x80000000 | 6,   11,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, 0x80000000 | 22,   23,

       0        // eod
};

Q_CONSTINIT const QMetaObject ProgramDock::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSProgramDockENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSProgramDockENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSProgramDockENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ProgramDock, std::true_type>,
        // method 'machine_setup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<machine::Machine *, std::false_type>,
        // method 'jump_to_pc'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<machine::Address, std::false_type>,
        // method 'focus_addr'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<machine::Address, std::false_type>,
        // method 'focus_addr_with_save'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<machine::Address, std::false_type>,
        // method 'stage_addr_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint, std::false_type>,
        QtPrivate::TypeAndForceComplete<machine::Address, std::false_type>,
        // method 'request_update_all'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'set_follow_inst'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'fetch_inst_addr'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<machine::Address, std::false_type>,
        // method 'decode_inst_addr'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<machine::Address, std::false_type>,
        // method 'execute_inst_addr'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<machine::Address, std::false_type>,
        // method 'memory_inst_addr'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<machine::Address, std::false_type>,
        // method 'writeback_inst_addr'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<machine::Address, std::false_type>,
        // method 'report_error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'update_pipeline_addrs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const machine::CoreState &, std::false_type>
    >,
    nullptr
} };

void ProgramDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProgramDock *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->machine_setup((*reinterpret_cast< std::add_pointer_t<machine::Machine*>>(_a[1]))); break;
        case 1: _t->jump_to_pc((*reinterpret_cast< std::add_pointer_t<machine::Address>>(_a[1]))); break;
        case 2: _t->focus_addr((*reinterpret_cast< std::add_pointer_t<machine::Address>>(_a[1]))); break;
        case 3: _t->focus_addr_with_save((*reinterpret_cast< std::add_pointer_t<machine::Address>>(_a[1]))); break;
        case 4: _t->stage_addr_changed((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<machine::Address>>(_a[2]))); break;
        case 5: _t->request_update_all(); break;
        case 6: _t->set_follow_inst((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->fetch_inst_addr((*reinterpret_cast< std::add_pointer_t<machine::Address>>(_a[1]))); break;
        case 8: _t->decode_inst_addr((*reinterpret_cast< std::add_pointer_t<machine::Address>>(_a[1]))); break;
        case 9: _t->execute_inst_addr((*reinterpret_cast< std::add_pointer_t<machine::Address>>(_a[1]))); break;
        case 10: _t->memory_inst_addr((*reinterpret_cast< std::add_pointer_t<machine::Address>>(_a[1]))); break;
        case 11: _t->writeback_inst_addr((*reinterpret_cast< std::add_pointer_t<machine::Address>>(_a[1]))); break;
        case 12: _t->report_error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->update_pipeline_addrs((*reinterpret_cast< std::add_pointer_t<machine::CoreState>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< machine::Machine* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< machine::Address >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< machine::Address >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< machine::Address >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< machine::Address >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< machine::Address >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< machine::Address >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< machine::Address >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< machine::Address >(); break;
            }
            break;
        case 11:
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
            using _t = void (ProgramDock::*)(machine::Machine * );
            if (_t _q_method = &ProgramDock::machine_setup; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ProgramDock::*)(machine::Address );
            if (_t _q_method = &ProgramDock::jump_to_pc; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ProgramDock::*)(machine::Address );
            if (_t _q_method = &ProgramDock::focus_addr; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ProgramDock::*)(machine::Address );
            if (_t _q_method = &ProgramDock::focus_addr_with_save; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ProgramDock::*)(uint , machine::Address );
            if (_t _q_method = &ProgramDock::stage_addr_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ProgramDock::*)();
            if (_t _q_method = &ProgramDock::request_update_all; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject *ProgramDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProgramDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSProgramDockENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int ProgramDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void ProgramDock::machine_setup(machine::Machine * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ProgramDock::jump_to_pc(machine::Address _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ProgramDock::focus_addr(machine::Address _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ProgramDock::focus_addr_with_save(machine::Address _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ProgramDock::stage_addr_changed(uint _t1, machine::Address _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ProgramDock::request_update_all()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
