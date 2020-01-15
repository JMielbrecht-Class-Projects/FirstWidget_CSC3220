/****************************************************************************
** Meta object code from reading C++ file 'textstylelab.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../textstylelab.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textstylelab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TextStyleLab_t {
    QByteArrayData data[11];
    char stringdata0[241];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TextStyleLab_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TextStyleLab_t qt_meta_stringdata_TextStyleLab = {
    {
QT_MOC_LITERAL(0, 0, 12), // "TextStyleLab"
QT_MOC_LITERAL(1, 13, 23), // "on_updateButton_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 23), // "on_FgdRedButton_clicked"
QT_MOC_LITERAL(4, 62, 24), // "on_FgdBlueButton_clicked"
QT_MOC_LITERAL(5, 87, 23), // "on_bkgRedButton_clicked"
QT_MOC_LITERAL(6, 111, 24), // "on_bkgBlueButton_clicked"
QT_MOC_LITERAL(7, 136, 26), // "on_alignLeftButton_clicked"
QT_MOC_LITERAL(8, 163, 28), // "on_alignCenterButton_clicked"
QT_MOC_LITERAL(9, 192, 27), // "on_alignRightButton_clicked"
QT_MOC_LITERAL(10, 220, 20) // "on_endButton_clicked"

    },
    "TextStyleLab\0on_updateButton_clicked\0"
    "\0on_FgdRedButton_clicked\0"
    "on_FgdBlueButton_clicked\0"
    "on_bkgRedButton_clicked\0"
    "on_bkgBlueButton_clicked\0"
    "on_alignLeftButton_clicked\0"
    "on_alignCenterButton_clicked\0"
    "on_alignRightButton_clicked\0"
    "on_endButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TextStyleLab[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
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

void TextStyleLab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TextStyleLab *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_updateButton_clicked(); break;
        case 1: _t->on_FgdRedButton_clicked(); break;
        case 2: _t->on_FgdBlueButton_clicked(); break;
        case 3: _t->on_bkgRedButton_clicked(); break;
        case 4: _t->on_bkgBlueButton_clicked(); break;
        case 5: _t->on_alignLeftButton_clicked(); break;
        case 6: _t->on_alignCenterButton_clicked(); break;
        case 7: _t->on_alignRightButton_clicked(); break;
        case 8: _t->on_endButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TextStyleLab::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_TextStyleLab.data,
    qt_meta_data_TextStyleLab,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TextStyleLab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextStyleLab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TextStyleLab.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TextStyleLab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
