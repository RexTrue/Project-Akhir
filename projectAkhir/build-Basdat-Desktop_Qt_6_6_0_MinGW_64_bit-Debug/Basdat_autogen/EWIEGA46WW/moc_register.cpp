/****************************************************************************
** Meta object code from reading C++ file 'register.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Basdat/register.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'register.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
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
struct qt_meta_stringdata_CLASSRegisterENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSRegisterENDCLASS = QtMocHelpers::stringData(
    "Register",
    "BackToLogin",
    "",
    "on_pushButton_clicked",
    "NamaCheck",
    "QString&",
    "inp",
    "NIKCheck",
    "UsernameCheck",
    "AlamatCheck",
    "NmrHPCheck",
    "tglLahirCheck",
    "QDate&"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRegisterENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[9];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[10];
    char stringdata5[9];
    char stringdata6[4];
    char stringdata7[9];
    char stringdata8[14];
    char stringdata9[12];
    char stringdata10[11];
    char stringdata11[14];
    char stringdata12[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRegisterENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRegisterENDCLASS_t qt_meta_stringdata_CLASSRegisterENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "Register"
        QT_MOC_LITERAL(9, 11),  // "BackToLogin"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(44, 9),  // "NamaCheck"
        QT_MOC_LITERAL(54, 8),  // "QString&"
        QT_MOC_LITERAL(63, 3),  // "inp"
        QT_MOC_LITERAL(67, 8),  // "NIKCheck"
        QT_MOC_LITERAL(76, 13),  // "UsernameCheck"
        QT_MOC_LITERAL(90, 11),  // "AlamatCheck"
        QT_MOC_LITERAL(102, 10),  // "NmrHPCheck"
        QT_MOC_LITERAL(113, 13),  // "tglLahirCheck"
        QT_MOC_LITERAL(127, 6)   // "QDate&"
    },
    "Register",
    "BackToLogin",
    "",
    "on_pushButton_clicked",
    "NamaCheck",
    "QString&",
    "inp",
    "NIKCheck",
    "UsernameCheck",
    "AlamatCheck",
    "NmrHPCheck",
    "tglLahirCheck",
    "QDate&"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRegisterENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    1,   64,    2, 0x08,    3 /* Private */,
       7,    1,   67,    2, 0x08,    5 /* Private */,
       8,    1,   70,    2, 0x08,    7 /* Private */,
       9,    1,   73,    2, 0x08,    9 /* Private */,
      10,    1,   76,    2, 0x08,   11 /* Private */,
      11,    1,   79,    2, 0x08,   13 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Int, 0x80000000 | 5,    6,
    QMetaType::Int, 0x80000000 | 5,    6,
    QMetaType::Int, 0x80000000 | 5,    6,
    QMetaType::Int, 0x80000000 | 5,    6,
    QMetaType::Int, 0x80000000 | 5,    6,
    QMetaType::Int, 0x80000000 | 12,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject Register::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSRegisterENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRegisterENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRegisterENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Register, std::true_type>,
        // method 'BackToLogin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'NamaCheck'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        // method 'NIKCheck'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        // method 'UsernameCheck'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        // method 'AlamatCheck'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        // method 'NmrHPCheck'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        // method 'tglLahirCheck'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDate &, std::false_type>
    >,
    nullptr
} };

void Register::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Register *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->BackToLogin(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: { int _r = _t->NamaCheck((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: { int _r = _t->NIKCheck((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: { int _r = _t->UsernameCheck((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: { int _r = _t->AlamatCheck((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: { int _r = _t->NmrHPCheck((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: { int _r = _t->tglLahirCheck((*reinterpret_cast< std::add_pointer_t<QDate&>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Register::*)();
            if (_t _q_method = &Register::BackToLogin; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *Register::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Register::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRegisterENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Register::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Register::BackToLogin()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
