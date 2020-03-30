/****************************************************************************
** Meta object code from reading C++ file 'XBFirm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../XBFirmSettings/XBFirm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'XBFirm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_XBFirm_t {
    QByteArrayData data[12];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XBFirm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XBFirm_t qt_meta_stringdata_XBFirm = {
    {
QT_MOC_LITERAL(0, 0, 6), // "XBFirm"
QT_MOC_LITERAL(1, 7, 18), // "isInstalledChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 13), // "statusChanged"
QT_MOC_LITERAL(4, 41, 8), // "download"
QT_MOC_LITERAL(5, 50, 3), // "url"
QT_MOC_LITERAL(6, 54, 9), // "onActived"
QT_MOC_LITERAL(7, 64, 14), // "handleDownload"
QT_MOC_LITERAL(8, 79, 16), // "hanldeDownloaded"
QT_MOC_LITERAL(9, 96, 4), // "data"
QT_MOC_LITERAL(10, 101, 12), // "handleRemove"
QT_MOC_LITERAL(11, 114, 31) // "handleDownloadedSpecificVersion"

    },
    "XBFirm\0isInstalledChanged\0\0statusChanged\0"
    "download\0url\0onActived\0handleDownload\0"
    "hanldeDownloaded\0data\0handleRemove\0"
    "handleDownloadedSpecificVersion"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XBFirm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    1,   56,    2, 0x06 /* Public */,
       6,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   60,    2, 0x08 /* Private */,
       8,    1,   63,    2, 0x08 /* Private */,
      10,    0,   66,    2, 0x08 /* Private */,
      11,    1,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QByteArray,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    9,

       0        // eod
};

void XBFirm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        XBFirm *_t = static_cast<XBFirm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->isInstalledChanged(); break;
        case 1: _t->statusChanged(); break;
        case 2: _t->download((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->onActived(); break;
        case 4: _t->handleDownload((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->hanldeDownloaded((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 6: _t->handleRemove(); break;
        case 7: _t->handleDownloadedSpecificVersion((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (XBFirm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XBFirm::isInstalledChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (XBFirm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XBFirm::statusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (XBFirm::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XBFirm::download)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (XBFirm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XBFirm::onActived)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject XBFirm::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_XBFirm.data,
      qt_meta_data_XBFirm,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *XBFirm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XBFirm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_XBFirm.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int XBFirm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void XBFirm::isInstalledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void XBFirm::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void XBFirm::download(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void XBFirm::onActived()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
