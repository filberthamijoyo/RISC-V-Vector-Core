/****************************************************************************
** Meta object code from reading C++ file 'editordock.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/windows/editor/editordock.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editordock.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSEditorDockENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSEditorDockENDCLASS = QtMocHelpers::stringData(
    "EditorDock",
    "editor_available_changed",
    "",
    "available",
    "set_show_line_numbers",
    "visible",
    "open_file_dialog",
    "save_tab",
    "index",
    "save_current_tab",
    "save_tab_as",
    "save_current_tab_as",
    "save_tab_to",
    "filename",
    "save_current_tab_to",
    "close_tab",
    "close_current_tab",
    "close_tab_by_name",
    "QString&",
    "ask"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSEditorDockENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   92,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   95,    2, 0x0a,    3 /* Public */,
       6,    0,   98,    2, 0x0a,    5 /* Public */,
       7,    1,   99,    2, 0x0a,    6 /* Public */,
       9,    0,  102,    2, 0x0a,    8 /* Public */,
      10,    1,  103,    2, 0x0a,    9 /* Public */,
      11,    0,  106,    2, 0x0a,   11 /* Public */,
      12,    2,  107,    2, 0x0a,   12 /* Public */,
      14,    1,  112,    2, 0x0a,   15 /* Public */,
      15,    1,  115,    2, 0x0a,   17 /* Public */,
      16,    0,  118,    2, 0x0a,   19 /* Public */,
      17,    2,  119,    2, 0x0a,   20 /* Public */,
      17,    1,  124,    2, 0x2a,   23 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    8,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18, QMetaType::Bool,   13,   19,
    QMetaType::Void, 0x80000000 | 18,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject EditorDock::staticMetaObject = { {
    QMetaObject::SuperData::link<HidingTabWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSEditorDockENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSEditorDockENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSEditorDockENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EditorDock, std::true_type>,
        // method 'editor_available_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'set_show_line_numbers'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'open_file_dialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'save_tab'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'save_current_tab'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'save_tab_as'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'save_current_tab_as'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'save_tab_to'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'save_current_tab_to'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'close_tab'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'close_current_tab'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'close_tab_by_name'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'close_tab_by_name'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>
    >,
    nullptr
} };

void EditorDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditorDock *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->editor_available_changed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->set_show_line_numbers((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->open_file_dialog(); break;
        case 3: _t->save_tab((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->save_current_tab(); break;
        case 5: _t->save_tab_as((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->save_current_tab_as(); break;
        case 7: _t->save_tab_to((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 8: _t->save_current_tab_to((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->close_tab((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->close_current_tab(); break;
        case 11: _t->close_tab_by_name((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 12: _t->close_tab_by_name((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EditorDock::*)(bool );
            if (_t _q_method = &EditorDock::editor_available_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *EditorDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditorDock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSEditorDockENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return HidingTabWidget::qt_metacast(_clname);
}

int EditorDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HidingTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void EditorDock::editor_available_changed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
