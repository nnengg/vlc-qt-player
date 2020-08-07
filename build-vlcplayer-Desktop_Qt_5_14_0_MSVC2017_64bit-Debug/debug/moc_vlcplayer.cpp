/****************************************************************************
** Meta object code from reading C++ file 'vlcplayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../vlcplayer/vlcplayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vlcplayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VlcPlayer_t {
    QByteArrayData data[11];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VlcPlayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VlcPlayer_t qt_meta_stringdata_VlcPlayer = {
    {
QT_MOC_LITERAL(0, 0, 9), // "VlcPlayer"
QT_MOC_LITERAL(1, 10, 16), // "on_local_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 15), // "on_stop_clicked"
QT_MOC_LITERAL(4, 44, 22), // "on_playorpause_clicked"
QT_MOC_LITERAL(5, 67, 15), // "on_mute_clicked"
QT_MOC_LITERAL(6, 83, 21), // "on_fullscreen_clicked"
QT_MOC_LITERAL(7, 105, 6), // "update"
QT_MOC_LITERAL(8, 112, 19), // "on_listView_clicked"
QT_MOC_LITERAL(9, 132, 11), // "QModelIndex"
QT_MOC_LITERAL(10, 144, 5) // "index"

    },
    "VlcPlayer\0on_local_clicked\0\0on_stop_clicked\0"
    "on_playorpause_clicked\0on_mute_clicked\0"
    "on_fullscreen_clicked\0update\0"
    "on_listView_clicked\0QModelIndex\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VlcPlayer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void VlcPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VlcPlayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_local_clicked(); break;
        case 1: _t->on_stop_clicked(); break;
        case 2: _t->on_playorpause_clicked(); break;
        case 3: _t->on_mute_clicked(); break;
        case 4: _t->on_fullscreen_clicked(); break;
        case 5: _t->update(); break;
        case 6: _t->on_listView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VlcPlayer::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_VlcPlayer.data,
    qt_meta_data_VlcPlayer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VlcPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VlcPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VlcPlayer.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int VlcPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
