/****************************************************************************
** Meta object code from reading C++ file 'predictor.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/machine/predictor.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'predictor.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmachineSCOPEBranchHistoryRegisterENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmachineSCOPEBranchHistoryRegisterENDCLASS = QtMocHelpers::stringData(
    "machine::BranchHistoryRegister",
    "bhr_updated",
    "",
    "uint8_t",
    "number_of_bhr_bits",
    "uint16_t",
    "register_value"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmachineSCOPEBranchHistoryRegisterENDCLASS[] = {

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
       1,    2,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject machine::BranchHistoryRegister::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmachineSCOPEBranchHistoryRegisterENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmachineSCOPEBranchHistoryRegisterENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmachineSCOPEBranchHistoryRegisterENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BranchHistoryRegister, std::true_type>,
        // method 'bhr_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>
    >,
    nullptr
} };

void machine::BranchHistoryRegister::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BranchHistoryRegister *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->bhr_updated((*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BranchHistoryRegister::*)(uint8_t , uint16_t );
            if (_t _q_method = &BranchHistoryRegister::bhr_updated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *machine::BranchHistoryRegister::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *machine::BranchHistoryRegister::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmachineSCOPEBranchHistoryRegisterENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int machine::BranchHistoryRegister::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void machine::BranchHistoryRegister::bhr_updated(uint8_t _t1, uint16_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmachineSCOPEBranchTargetBufferENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmachineSCOPEBranchTargetBufferENDCLASS = QtMocHelpers::stringData(
    "machine::BranchTargetBuffer",
    "btb_row_updated",
    "",
    "uint16_t",
    "index",
    "BranchTargetBufferEntry",
    "btb_entry"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmachineSCOPEBranchTargetBufferENDCLASS[] = {

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
       1,    2,   20,    2, 0x106,    1 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject machine::BranchTargetBuffer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmachineSCOPEBranchTargetBufferENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmachineSCOPEBranchTargetBufferENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmachineSCOPEBranchTargetBufferENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BranchTargetBuffer, std::true_type>,
        // method 'btb_row_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<BranchTargetBufferEntry, std::false_type>
    >,
    nullptr
} };

void machine::BranchTargetBuffer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BranchTargetBuffer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->btb_row_updated((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<BranchTargetBufferEntry>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BranchTargetBuffer::*)(uint16_t , BranchTargetBufferEntry ) const;
            if (_t _q_method = &BranchTargetBuffer::btb_row_updated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *machine::BranchTargetBuffer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *machine::BranchTargetBuffer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmachineSCOPEBranchTargetBufferENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int machine::BranchTargetBuffer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void machine::BranchTargetBuffer::btb_row_updated(uint16_t _t1, BranchTargetBufferEntry _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(const_cast< machine::BranchTargetBuffer *>(this), &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmachineSCOPEPredictorENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmachineSCOPEPredictorENDCLASS = QtMocHelpers::stringData(
    "machine::Predictor",
    "stats_updated",
    "",
    "PredictionStatistics",
    "stats",
    "bht_row_updated",
    "uint16_t",
    "index",
    "BranchHistoryTableEntry",
    "entry"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmachineSCOPEPredictorENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x106,    1 /* Public | MethodIsConst  */,
       5,    2,   29,    2, 0x106,    3 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8,    7,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject machine::Predictor::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmachineSCOPEPredictorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmachineSCOPEPredictorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmachineSCOPEPredictorENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Predictor, std::true_type>,
        // method 'stats_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<PredictionStatistics, std::false_type>,
        // method 'bht_row_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<BranchHistoryTableEntry, std::false_type>
    >,
    nullptr
} };

void machine::Predictor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Predictor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->stats_updated((*reinterpret_cast< std::add_pointer_t<PredictionStatistics>>(_a[1]))); break;
        case 1: _t->bht_row_updated((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<BranchHistoryTableEntry>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Predictor::*)(PredictionStatistics ) const;
            if (_t _q_method = &Predictor::stats_updated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Predictor::*)(uint16_t , BranchHistoryTableEntry ) const;
            if (_t _q_method = &Predictor::bht_row_updated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *machine::Predictor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *machine::Predictor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmachineSCOPEPredictorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int machine::Predictor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void machine::Predictor::stats_updated(PredictionStatistics _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< machine::Predictor *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void machine::Predictor::bht_row_updated(uint16_t _t1, BranchHistoryTableEntry _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(const_cast< machine::Predictor *>(this), &staticMetaObject, 1, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSmachineSCOPEBranchPredictorENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmachineSCOPEBranchPredictorENDCLASS = QtMocHelpers::stringData(
    "machine::BranchPredictor",
    "total_stats_updated",
    "",
    "PredictionStatistics",
    "total_stats",
    "prediction_done",
    "uint16_t",
    "btb_index",
    "bht_index",
    "PredictionInput",
    "input",
    "BranchResult",
    "result",
    "BranchType",
    "branch_type",
    "update_done",
    "PredictionFeedback",
    "feedback",
    "predictor_stats_updated",
    "stats",
    "predictor_bht_row_updated",
    "index",
    "BranchHistoryTableEntry",
    "entry",
    "bhr_updated",
    "uint8_t",
    "number_of_bhr_bits",
    "register_value",
    "btb_row_updated",
    "BranchTargetBufferEntry",
    "btb_entry",
    "cleared",
    "flushed"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmachineSCOPEBranchPredictorENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    1 /* Public */,
       5,    5,   71,    2, 0x106,    3 /* Public | MethodIsConst  */,
      15,    3,   82,    2, 0x106,    9 /* Public | MethodIsConst  */,
      18,    1,   89,    2, 0x106,   13 /* Public | MethodIsConst  */,
      20,    2,   92,    2, 0x106,   15 /* Public | MethodIsConst  */,
      24,    2,   97,    2, 0x106,   18 /* Public | MethodIsConst  */,
      28,    2,  102,    2, 0x106,   21 /* Public | MethodIsConst  */,
      31,    0,  107,    2, 0x106,   24 /* Public | MethodIsConst  */,
      32,    0,  108,    2, 0x106,   25 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 9, 0x80000000 | 11, 0x80000000 | 13,    7,    8,   10,   12,   14,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 16,    7,    8,   17,
    QMetaType::Void, 0x80000000 | 3,   19,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 22,   21,   23,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 6,   26,   27,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 29,   21,   30,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject machine::BranchPredictor::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmachineSCOPEBranchPredictorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmachineSCOPEBranchPredictorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmachineSCOPEBranchPredictorENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BranchPredictor, std::true_type>,
        // method 'total_stats_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<PredictionStatistics, std::false_type>,
        // method 'prediction_done'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<PredictionInput, std::false_type>,
        QtPrivate::TypeAndForceComplete<BranchResult, std::false_type>,
        QtPrivate::TypeAndForceComplete<BranchType, std::false_type>,
        // method 'update_done'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<PredictionFeedback, std::false_type>,
        // method 'predictor_stats_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<PredictionStatistics, std::false_type>,
        // method 'predictor_bht_row_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<BranchHistoryTableEntry, std::false_type>,
        // method 'bhr_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        // method 'btb_row_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<BranchTargetBufferEntry, std::false_type>,
        // method 'cleared'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'flushed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void machine::BranchPredictor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BranchPredictor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->total_stats_updated((*reinterpret_cast< std::add_pointer_t<PredictionStatistics>>(_a[1]))); break;
        case 1: _t->prediction_done((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<PredictionInput>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<BranchResult>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<BranchType>>(_a[5]))); break;
        case 2: _t->update_done((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<PredictionFeedback>>(_a[3]))); break;
        case 3: _t->predictor_stats_updated((*reinterpret_cast< std::add_pointer_t<PredictionStatistics>>(_a[1]))); break;
        case 4: _t->predictor_bht_row_updated((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<BranchHistoryTableEntry>>(_a[2]))); break;
        case 5: _t->bhr_updated((*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[2]))); break;
        case 6: _t->btb_row_updated((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<BranchTargetBufferEntry>>(_a[2]))); break;
        case 7: _t->cleared(); break;
        case 8: _t->flushed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BranchPredictor::*)(PredictionStatistics );
            if (_t _q_method = &BranchPredictor::total_stats_updated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BranchPredictor::*)(uint16_t , uint16_t , PredictionInput , BranchResult , BranchType ) const;
            if (_t _q_method = &BranchPredictor::prediction_done; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BranchPredictor::*)(uint16_t , uint16_t , PredictionFeedback ) const;
            if (_t _q_method = &BranchPredictor::update_done; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BranchPredictor::*)(PredictionStatistics ) const;
            if (_t _q_method = &BranchPredictor::predictor_stats_updated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (BranchPredictor::*)(uint16_t , BranchHistoryTableEntry ) const;
            if (_t _q_method = &BranchPredictor::predictor_bht_row_updated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (BranchPredictor::*)(uint8_t , uint16_t ) const;
            if (_t _q_method = &BranchPredictor::bhr_updated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (BranchPredictor::*)(uint16_t , BranchTargetBufferEntry ) const;
            if (_t _q_method = &BranchPredictor::btb_row_updated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (BranchPredictor::*)() const;
            if (_t _q_method = &BranchPredictor::cleared; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (BranchPredictor::*)() const;
            if (_t _q_method = &BranchPredictor::flushed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject *machine::BranchPredictor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *machine::BranchPredictor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmachineSCOPEBranchPredictorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int machine::BranchPredictor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void machine::BranchPredictor::total_stats_updated(PredictionStatistics _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void machine::BranchPredictor::prediction_done(uint16_t _t1, uint16_t _t2, PredictionInput _t3, BranchResult _t4, BranchType _t5)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(const_cast< machine::BranchPredictor *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void machine::BranchPredictor::update_done(uint16_t _t1, uint16_t _t2, PredictionFeedback _t3)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(const_cast< machine::BranchPredictor *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void machine::BranchPredictor::predictor_stats_updated(PredictionStatistics _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< machine::BranchPredictor *>(this), &staticMetaObject, 3, _a);
}

// SIGNAL 4
void machine::BranchPredictor::predictor_bht_row_updated(uint16_t _t1, BranchHistoryTableEntry _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(const_cast< machine::BranchPredictor *>(this), &staticMetaObject, 4, _a);
}

// SIGNAL 5
void machine::BranchPredictor::bhr_updated(uint8_t _t1, uint16_t _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(const_cast< machine::BranchPredictor *>(this), &staticMetaObject, 5, _a);
}

// SIGNAL 6
void machine::BranchPredictor::btb_row_updated(uint16_t _t1, BranchTargetBufferEntry _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(const_cast< machine::BranchPredictor *>(this), &staticMetaObject, 6, _a);
}

// SIGNAL 7
void machine::BranchPredictor::cleared()const
{
    QMetaObject::activate(const_cast< machine::BranchPredictor *>(this), &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void machine::BranchPredictor::flushed()const
{
    QMetaObject::activate(const_cast< machine::BranchPredictor *>(this), &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
