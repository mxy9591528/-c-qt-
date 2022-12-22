/****************************************************************************
** Meta object code from reading C++ file 'manager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SupermarketManagement/manager.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'manager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_manager_t {
    uint offsetsAndSizes[22];
    char stringdata0[8];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[19];
    char stringdata5[19];
    char stringdata6[17];
    char stringdata7[17];
    char stringdata8[19];
    char stringdata9[19];
    char stringdata10[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_manager_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_manager_t qt_meta_stringdata_manager = {
    {
        QT_MOC_LITERAL(0, 7),  // "manager"
        QT_MOC_LITERAL(8, 7),  // "empExit"
        QT_MOC_LITERAL(16, 0),  // ""
        QT_MOC_LITERAL(17, 19),  // "on_exit_btn_clicked"
        QT_MOC_LITERAL(37, 18),  // "on_add_btn_clicked"
        QT_MOC_LITERAL(56, 18),  // "on_mfy_btn_clicked"
        QT_MOC_LITERAL(75, 16),  // "add_data_changed"
        QT_MOC_LITERAL(92, 16),  // "mfy_data_changed"
        QT_MOC_LITERAL(109, 18),  // "on_del_btn_clicked"
        QT_MOC_LITERAL(128, 18),  // "on_num_btn_clicked"
        QT_MOC_LITERAL(147, 21)   // "on_search_btn_clicked"
    },
    "manager",
    "empExit",
    "",
    "on_exit_btn_clicked",
    "on_add_btn_clicked",
    "on_mfy_btn_clicked",
    "add_data_changed",
    "mfy_data_changed",
    "on_del_btn_clicked",
    "on_num_btn_clicked",
    "on_search_btn_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_manager[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    0,   70,    2, 0x08,    3 /* Private */,
       5,    0,   71,    2, 0x08,    4 /* Private */,
       6,    0,   72,    2, 0x08,    5 /* Private */,
       7,    0,   73,    2, 0x08,    6 /* Private */,
       8,    0,   74,    2, 0x08,    7 /* Private */,
       9,    0,   75,    2, 0x08,    8 /* Private */,
      10,    0,   76,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void,

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

Q_CONSTINIT const QMetaObject manager::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_manager.offsetsAndSizes,
    qt_meta_data_manager,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_manager_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<manager, std::true_type>,
        // method 'empExit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_exit_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_add_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_mfy_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'add_data_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mfy_data_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_del_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_num_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_search_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void manager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<manager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->empExit(); break;
        case 1: _t->on_exit_btn_clicked(); break;
        case 2: _t->on_add_btn_clicked(); break;
        case 3: _t->on_mfy_btn_clicked(); break;
        case 4: _t->add_data_changed(); break;
        case 5: _t->mfy_data_changed(); break;
        case 6: _t->on_del_btn_clicked(); break;
        case 7: _t->on_num_btn_clicked(); break;
        case 8: _t->on_search_btn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (manager::*)();
            if (_t _q_method = &manager::empExit; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *manager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *manager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_manager.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int manager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void manager::empExit()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
