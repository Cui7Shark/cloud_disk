/****************************************************************************
** Meta object code from reading C++ file 'buttongroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cloudDisk/buttongroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buttongroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ButtonGroup_t {
    QByteArrayData data[17];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ButtonGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ButtonGroup_t qt_meta_stringdata_ButtonGroup = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ButtonGroup"
QT_MOC_LITERAL(1, 12, 9), // "sigMyFile"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 12), // "sigShareList"
QT_MOC_LITERAL(4, 36, 11), // "sigDownload"
QT_MOC_LITERAL(5, 48, 12), // "sigTransform"
QT_MOC_LITERAL(6, 61, 13), // "sigSwitchUser"
QT_MOC_LITERAL(7, 75, 11), // "closeWindow"
QT_MOC_LITERAL(8, 87, 9), // "minWindow"
QT_MOC_LITERAL(9, 97, 9), // "maxWindow"
QT_MOC_LITERAL(10, 107, 15), // "slotButtonClick"
QT_MOC_LITERAL(11, 123, 4), // "Page"
QT_MOC_LITERAL(12, 128, 3), // "cur"
QT_MOC_LITERAL(13, 132, 4), // "text"
QT_MOC_LITERAL(14, 137, 9), // "setParent"
QT_MOC_LITERAL(15, 147, 8), // "QWidget*"
QT_MOC_LITERAL(16, 156, 6) // "parent"

    },
    "ButtonGroup\0sigMyFile\0\0sigShareList\0"
    "sigDownload\0sigTransform\0sigSwitchUser\0"
    "closeWindow\0minWindow\0maxWindow\0"
    "slotButtonClick\0Page\0cur\0text\0setParent\0"
    "QWidget*\0parent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ButtonGroup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,
       6,    0,   73,    2, 0x06 /* Public */,
       7,    0,   74,    2, 0x06 /* Public */,
       8,    0,   75,    2, 0x06 /* Public */,
       9,    0,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   77,    2, 0x0a /* Public */,
      10,    1,   80,    2, 0x0a /* Public */,
      14,    1,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void ButtonGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ButtonGroup *_t = static_cast<ButtonGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigMyFile(); break;
        case 1: _t->sigShareList(); break;
        case 2: _t->sigDownload(); break;
        case 3: _t->sigTransform(); break;
        case 4: _t->sigSwitchUser(); break;
        case 5: _t->closeWindow(); break;
        case 6: _t->minWindow(); break;
        case 7: _t->maxWindow(); break;
        case 8: _t->slotButtonClick((*reinterpret_cast< Page(*)>(_a[1]))); break;
        case 9: _t->slotButtonClick((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->setParent((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ButtonGroup::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ButtonGroup::sigMyFile)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ButtonGroup::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ButtonGroup::sigShareList)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ButtonGroup::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ButtonGroup::sigDownload)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ButtonGroup::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ButtonGroup::sigTransform)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ButtonGroup::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ButtonGroup::sigSwitchUser)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (ButtonGroup::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ButtonGroup::closeWindow)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (ButtonGroup::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ButtonGroup::minWindow)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (ButtonGroup::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ButtonGroup::maxWindow)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject ButtonGroup::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ButtonGroup.data,
      qt_meta_data_ButtonGroup,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ButtonGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ButtonGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ButtonGroup.stringdata0))
        return static_cast<void*>(const_cast< ButtonGroup*>(this));
    return QWidget::qt_metacast(_clname);
}

int ButtonGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void ButtonGroup::sigMyFile()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void ButtonGroup::sigShareList()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void ButtonGroup::sigDownload()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void ButtonGroup::sigTransform()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void ButtonGroup::sigSwitchUser()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void ButtonGroup::closeWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void ButtonGroup::minWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void ButtonGroup::maxWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
