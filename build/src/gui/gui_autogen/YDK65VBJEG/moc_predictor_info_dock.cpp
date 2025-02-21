/****************************************************************************
** Meta object code from reading C++ file 'predictor_info_dock.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/windows/predictor/predictor_info_dock.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'predictor_info_dock.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDockPredictorInfoENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSDockPredictorInfoENDCLASS = QtMocHelpers::stringData(
    "DockPredictorInfo",
    "update_bhr",
    "",
    "uint8_t",
    "number_of_bhr_bits",
    "uint16_t",
    "register_value",
    "show_new_prediction",
    "btb_index",
    "bht_index",
    "machine::PredictionInput",
    "input",
    "machine::BranchResult",
    "result",
    "machine::BranchType",
    "branch_type",
    "show_new_update",
    "machine::PredictionFeedback",
    "feedback",
    "update_stats",
    "machine::PredictionStatistics",
    "stats",
    "reset_colors",
    "clear_stats",
    "clear_bhr",
    "clear_predict_widget",
    "clear_update_widget",
    "clear"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDockPredictorInfoENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   74,    2, 0x0a,    1 /* Public */,
       7,    5,   79,    2, 0x0a,    4 /* Public */,
      16,    3,   90,    2, 0x0a,   10 /* Public */,
      19,    1,   97,    2, 0x0a,   14 /* Public */,
      22,    0,  100,    2, 0x0a,   16 /* Public */,
      23,    0,  101,    2, 0x0a,   17 /* Public */,
      24,    0,  102,    2, 0x0a,   18 /* Public */,
      25,    0,  103,    2, 0x0a,   19 /* Public */,
      26,    0,  104,    2, 0x0a,   20 /* Public */,
      27,    0,  105,    2, 0x0a,   21 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 10, 0x80000000 | 12, 0x80000000 | 14,    8,    9,   11,   13,   15,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 17,    8,    9,   18,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject DockPredictorInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSDockPredictorInfoENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDockPredictorInfoENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDockPredictorInfoENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DockPredictorInfo, std::true_type>,
        // method 'update_bhr'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        // method 'show_new_prediction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<machine::PredictionInput, std::false_type>,
        QtPrivate::TypeAndForceComplete<machine::BranchResult, std::false_type>,
        QtPrivate::TypeAndForceComplete<machine::BranchType, std::false_type>,
        // method 'show_new_update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<machine::PredictionFeedback, std::false_type>,
        // method 'update_stats'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<machine::PredictionStatistics, std::false_type>,
        // method 'reset_colors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clear_stats'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clear_bhr'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clear_predict_widget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clear_update_widget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void DockPredictorInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DockPredictorInfo *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->update_bhr((*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[2]))); break;
        case 1: _t->show_new_prediction((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<machine::PredictionInput>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<machine::BranchResult>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<machine::BranchType>>(_a[5]))); break;
        case 2: _t->show_new_update((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<machine::PredictionFeedback>>(_a[3]))); break;
        case 3: _t->update_stats((*reinterpret_cast< std::add_pointer_t<machine::PredictionStatistics>>(_a[1]))); break;
        case 4: _t->reset_colors(); break;
        case 5: _t->clear_stats(); break;
        case 6: _t->clear_bhr(); break;
        case 7: _t->clear_predict_widget(); break;
        case 8: _t->clear_update_widget(); break;
        case 9: _t->clear(); break;
        default: ;
        }
    }
}

const QMetaObject *DockPredictorInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DockPredictorInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDockPredictorInfoENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int DockPredictorInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
