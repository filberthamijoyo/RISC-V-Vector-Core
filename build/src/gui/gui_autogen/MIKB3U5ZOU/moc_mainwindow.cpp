/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/mainwindow/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "report_message",
    "",
    "messagetype::Type",
    "type",
    "file",
    "line",
    "column",
    "text",
    "hint",
    "clear_messages",
    "new_machine",
    "machine_reload",
    "force_memory_reset",
    "force_elf_load",
    "print_action",
    "close_source_by_name",
    "QString&",
    "filename",
    "ask",
    "example_source",
    "source_file",
    "compile_source",
    "build_execute",
    "build_execute_no_check",
    "build_execute_with_save",
    "cancel",
    "tosavelist",
    "reset_state_registers",
    "reset_state_program",
    "reset_state_memory",
    "reset_state_cache_program",
    "reset_state_cache_data",
    "reset_state_cache_level2",
    "reset_state_peripherals",
    "reset_state_terminal",
    "reset_state_lcd_display",
    "reset_state_csrdock",
    "reset_state_messages",
    "show_registers",
    "show_program",
    "show_memory",
    "show_cache_data",
    "show_cache_program",
    "show_cache_level2",
    "show_peripherals",
    "show_terminal",
    "show_lcd_display",
    "show_csrdock",
    "show_hide_coreview",
    "show",
    "show_messages",
    "reset_windows",
    "show_symbol_dialog",
    "show_bp_btb",
    "show_bp_bht",
    "show_bp_info",
    "reset_state_bp_btb",
    "reset_state_bp_bht",
    "reset_state_bp_info",
    "about_program",
    "about_qt",
    "set_speed",
    "machine_status",
    "machine::Machine::Status",
    "st",
    "machine_exit",
    "machine_trap",
    "machine::SimulatorException&",
    "e",
    "view_mnemonics_registers",
    "enable",
    "message_selected"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      53,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    6,  332,    2, 0x06,    1 /* Public */,
      10,    0,  345,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    0,  346,    2, 0x0a,    9 /* Public */,
      12,    2,  347,    2, 0x0a,   10 /* Public */,
      12,    1,  352,    2, 0x2a,   13 /* Public | MethodCloned */,
      12,    0,  355,    2, 0x2a,   15 /* Public | MethodCloned */,
      15,    0,  356,    2, 0x0a,   16 /* Public */,
      16,    2,  357,    2, 0x0a,   17 /* Public */,
      16,    1,  362,    2, 0x2a,   20 /* Public | MethodCloned */,
      20,    1,  365,    2, 0x0a,   22 /* Public */,
      22,    0,  368,    2, 0x0a,   24 /* Public */,
      23,    0,  369,    2, 0x0a,   25 /* Public */,
      24,    0,  370,    2, 0x0a,   26 /* Public */,
      25,    2,  371,    2, 0x0a,   27 /* Public */,
      28,    0,  376,    2, 0x0a,   30 /* Public */,
      29,    0,  377,    2, 0x0a,   31 /* Public */,
      30,    0,  378,    2, 0x0a,   32 /* Public */,
      31,    0,  379,    2, 0x0a,   33 /* Public */,
      32,    0,  380,    2, 0x0a,   34 /* Public */,
      33,    0,  381,    2, 0x0a,   35 /* Public */,
      34,    0,  382,    2, 0x0a,   36 /* Public */,
      35,    0,  383,    2, 0x0a,   37 /* Public */,
      36,    0,  384,    2, 0x0a,   38 /* Public */,
      37,    0,  385,    2, 0x0a,   39 /* Public */,
      38,    0,  386,    2, 0x0a,   40 /* Public */,
      39,    0,  387,    2, 0x0a,   41 /* Public */,
      40,    0,  388,    2, 0x0a,   42 /* Public */,
      41,    0,  389,    2, 0x0a,   43 /* Public */,
      42,    0,  390,    2, 0x0a,   44 /* Public */,
      43,    0,  391,    2, 0x0a,   45 /* Public */,
      44,    0,  392,    2, 0x0a,   46 /* Public */,
      45,    0,  393,    2, 0x0a,   47 /* Public */,
      46,    0,  394,    2, 0x0a,   48 /* Public */,
      47,    0,  395,    2, 0x0a,   49 /* Public */,
      48,    0,  396,    2, 0x0a,   50 /* Public */,
      49,    1,  397,    2, 0x0a,   51 /* Public */,
      51,    0,  400,    2, 0x0a,   53 /* Public */,
      52,    0,  401,    2, 0x0a,   54 /* Public */,
      53,    0,  402,    2, 0x0a,   55 /* Public */,
      54,    0,  403,    2, 0x0a,   56 /* Public */,
      55,    0,  404,    2, 0x0a,   57 /* Public */,
      56,    0,  405,    2, 0x0a,   58 /* Public */,
      57,    0,  406,    2, 0x0a,   59 /* Public */,
      58,    0,  407,    2, 0x0a,   60 /* Public */,
      59,    0,  408,    2, 0x0a,   61 /* Public */,
      60,    0,  409,    2, 0x0a,   62 /* Public */,
      61,    0,  410,    2, 0x0a,   63 /* Public */,
      62,    0,  411,    2, 0x0a,   64 /* Public */,
      63,    1,  412,    2, 0x0a,   65 /* Public */,
      66,    0,  415,    2, 0x0a,   67 /* Public */,
      67,    1,  416,    2, 0x0a,   68 /* Public */,
      70,    1,  419,    2, 0x0a,   70 /* Public */,
      72,    6,  422,    2, 0x0a,   72 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString,    4,    5,    6,    7,    8,    9,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   13,   14,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17, QMetaType::Bool,   18,   19,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QStringList,   26,   27,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   50,
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
    QMetaType::Void, 0x80000000 | 64,   65,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 68,   69,
    QMetaType::Void, QMetaType::Bool,   71,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString,    4,    5,    6,    7,    8,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'report_message'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<messagetype::Type, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'clear_messages'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'new_machine'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'machine_reload'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'machine_reload'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'machine_reload'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'print_action'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'close_source_by_name'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'close_source_by_name'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        // method 'example_source'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'compile_source'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'build_execute'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'build_execute_no_check'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'build_execute_with_save'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        // method 'reset_state_registers'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reset_state_program'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reset_state_memory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reset_state_cache_program'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reset_state_cache_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reset_state_cache_level2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reset_state_peripherals'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reset_state_terminal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reset_state_lcd_display'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reset_state_csrdock'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reset_state_messages'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_registers'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_program'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_memory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_cache_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_cache_program'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_cache_level2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_peripherals'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_terminal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_lcd_display'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_csrdock'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_hide_coreview'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'show_messages'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reset_windows'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_symbol_dialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_bp_btb'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_bp_bht'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'show_bp_info'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reset_state_bp_btb'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reset_state_bp_bht'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reset_state_bp_info'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'about_program'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'about_qt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'set_speed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'machine_status'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<machine::Machine::Status, std::false_type>,
        // method 'machine_exit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'machine_trap'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<machine::SimulatorException &, std::false_type>,
        // method 'view_mnemonics_registers'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'message_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<messagetype::Type, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->report_message((*reinterpret_cast< std::add_pointer_t<messagetype::Type>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6]))); break;
        case 1: _t->clear_messages(); break;
        case 2: _t->new_machine(); break;
        case 3: _t->machine_reload((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 4: _t->machine_reload((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->machine_reload(); break;
        case 6: _t->print_action(); break;
        case 7: _t->close_source_by_name((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 8: _t->close_source_by_name((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1]))); break;
        case 9: _t->example_source((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->compile_source(); break;
        case 11: _t->build_execute(); break;
        case 12: _t->build_execute_no_check(); break;
        case 13: _t->build_execute_with_save((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 14: _t->reset_state_registers(); break;
        case 15: _t->reset_state_program(); break;
        case 16: _t->reset_state_memory(); break;
        case 17: _t->reset_state_cache_program(); break;
        case 18: _t->reset_state_cache_data(); break;
        case 19: _t->reset_state_cache_level2(); break;
        case 20: _t->reset_state_peripherals(); break;
        case 21: _t->reset_state_terminal(); break;
        case 22: _t->reset_state_lcd_display(); break;
        case 23: _t->reset_state_csrdock(); break;
        case 24: _t->reset_state_messages(); break;
        case 25: _t->show_registers(); break;
        case 26: _t->show_program(); break;
        case 27: _t->show_memory(); break;
        case 28: _t->show_cache_data(); break;
        case 29: _t->show_cache_program(); break;
        case 30: _t->show_cache_level2(); break;
        case 31: _t->show_peripherals(); break;
        case 32: _t->show_terminal(); break;
        case 33: _t->show_lcd_display(); break;
        case 34: _t->show_csrdock(); break;
        case 35: _t->show_hide_coreview((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 36: _t->show_messages(); break;
        case 37: _t->reset_windows(); break;
        case 38: _t->show_symbol_dialog(); break;
        case 39: _t->show_bp_btb(); break;
        case 40: _t->show_bp_bht(); break;
        case 41: _t->show_bp_info(); break;
        case 42: _t->reset_state_bp_btb(); break;
        case 43: _t->reset_state_bp_bht(); break;
        case 44: _t->reset_state_bp_info(); break;
        case 45: _t->about_program(); break;
        case 46: _t->about_qt(); break;
        case 47: _t->set_speed(); break;
        case 48: _t->machine_status((*reinterpret_cast< std::add_pointer_t<machine::Machine::Status>>(_a[1]))); break;
        case 49: _t->machine_exit(); break;
        case 50: _t->machine_trap((*reinterpret_cast< std::add_pointer_t<machine::SimulatorException&>>(_a[1]))); break;
        case 51: _t->view_mnemonics_registers((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 52: _t->message_selected((*reinterpret_cast< std::add_pointer_t<messagetype::Type>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(messagetype::Type , QString , int , int , QString , QString );
            if (_t _q_method = &MainWindow::report_message; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::clear_messages; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 53)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 53;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 53)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 53;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::report_message(messagetype::Type _t1, QString _t2, int _t3, int _t4, QString _t5, QString _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::clear_messages()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSSimpleAsmWithEditorCheckENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSimpleAsmWithEditorCheckENDCLASS = QtMocHelpers::stringData(
    "SimpleAsmWithEditorCheck"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSimpleAsmWithEditorCheckENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject SimpleAsmWithEditorCheck::staticMetaObject = { {
    QMetaObject::SuperData::link<SimpleAsm::staticMetaObject>(),
    qt_meta_stringdata_CLASSSimpleAsmWithEditorCheckENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSimpleAsmWithEditorCheckENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSimpleAsmWithEditorCheckENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SimpleAsmWithEditorCheck, std::true_type>
    >,
    nullptr
} };

void SimpleAsmWithEditorCheck::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *SimpleAsmWithEditorCheck::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimpleAsmWithEditorCheck::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSimpleAsmWithEditorCheckENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return SimpleAsm::qt_metacast(_clname);
}

int SimpleAsmWithEditorCheck::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SimpleAsm::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
