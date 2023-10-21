/****************************************************************************
** Meta object code from reading C++ file 'show_composeretparticiper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gestion_de_l_intervantion/show_composeretparticiper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'show_composeretparticiper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_show_composerEtparticiper_t {
    QByteArrayData data[6];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_show_composerEtparticiper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_show_composerEtparticiper_t qt_meta_stringdata_show_composerEtparticiper = {
    {
QT_MOC_LITERAL(0, 0, 25), // "show_composerEtparticiper"
QT_MOC_LITERAL(1, 26, 39), // "on_pushButton_ajouter_un_inte..."
QT_MOC_LITERAL(2, 66, 0), // ""
QT_MOC_LITERAL(3, 67, 55), // "on_pushButton_add_task_into_p..."
QT_MOC_LITERAL(4, 123, 35), // "on_pushButton_supp_composer_c..."
QT_MOC_LITERAL(5, 159, 37) // "on_pushButton_supp_participer..."

    },
    "show_composerEtparticiper\0"
    "on_pushButton_ajouter_un_interv_clicked\0"
    "\0on_pushButton_add_task_into_project_From_Dialog_clicked\0"
    "on_pushButton_supp_composer_clicked\0"
    "on_pushButton_supp_participer_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_show_composerEtparticiper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void show_composerEtparticiper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<show_composerEtparticiper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_ajouter_un_interv_clicked(); break;
        case 1: _t->on_pushButton_add_task_into_project_From_Dialog_clicked(); break;
        case 2: _t->on_pushButton_supp_composer_clicked(); break;
        case 3: _t->on_pushButton_supp_participer_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject show_composerEtparticiper::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_show_composerEtparticiper.data,
    qt_meta_data_show_composerEtparticiper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *show_composerEtparticiper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *show_composerEtparticiper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_show_composerEtparticiper.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int show_composerEtparticiper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
