/****************************************************************************
** Meta object code from reading C++ file 'change.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../mycarclass/change.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'change.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_change_t {
    const uint offsetsAndSize[10];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_change_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_change_t qt_meta_stringdata_change = {
    {
QT_MOC_LITERAL(0, 6), // "change"
QT_MOC_LITERAL(7, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(54, 23) // "on_pushButton_2_clicked"

    },
    "change\0on_pushButton_3_clicked\0\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_change[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x08,    1 /* Private */,
       3,    0,   33,    2, 0x08,    2 /* Private */,
       4,    0,   34,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void change::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<change *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_3_clicked(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject change::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_change.offsetsAndSize,
    qt_meta_data_change,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_change_t
, QtPrivate::TypeAndForceComplete<change, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *change::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *change::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_change.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int change::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
