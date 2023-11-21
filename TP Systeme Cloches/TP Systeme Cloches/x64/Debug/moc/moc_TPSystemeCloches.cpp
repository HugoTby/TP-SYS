/****************************************************************************
** Meta object code from reading C++ file 'TPSystemeCloches.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../TPSystemeCloches.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TPSystemeCloches.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TPSystemeCloches_t {
    QByteArrayData data[7];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TPSystemeCloches_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TPSystemeCloches_t qt_meta_stringdata_TPSystemeCloches = {
    {
QT_MOC_LITERAL(0, 0, 16), // "TPSystemeCloches"
QT_MOC_LITERAL(1, 17, 18), // "onClickButtonBell1"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 18), // "onClickButtonBell2"
QT_MOC_LITERAL(4, 56, 18), // "onClickButtonBell3"
QT_MOC_LITERAL(5, 75, 18), // "onClickButtonBell4"
QT_MOC_LITERAL(6, 94, 18) // "onClickButtonMusic"

    },
    "TPSystemeCloches\0onClickButtonBell1\0"
    "\0onClickButtonBell2\0onClickButtonBell3\0"
    "onClickButtonBell4\0onClickButtonMusic"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TPSystemeCloches[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TPSystemeCloches::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TPSystemeCloches *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onClickButtonBell1(); break;
        case 1: _t->onClickButtonBell2(); break;
        case 2: _t->onClickButtonBell3(); break;
        case 3: _t->onClickButtonBell4(); break;
        case 4: _t->onClickButtonMusic(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TPSystemeCloches::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_TPSystemeCloches.data,
    qt_meta_data_TPSystemeCloches,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TPSystemeCloches::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TPSystemeCloches::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TPSystemeCloches.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TPSystemeCloches::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
