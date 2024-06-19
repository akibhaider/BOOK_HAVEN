/****************************************************************************
** Meta object code from reading C++ file 'customer_login.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../Bookhaven/BOOKHAVEN/BOOK_HAVEN/BookHaven_(Library+Bookshop)/customer_login.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customer_login.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
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
struct qt_meta_stringdata_CLASScustomer_loginENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASScustomer_loginENDCLASS = QtMocHelpers::stringData(
    "customer_login",
    "on_loginButton_customer_clicked",
    "",
    "on_signUpButton_customer_clicked",
    "on_forgetPasswdBtn_customer_clicked",
    "on_button_customer_to_admin_clicked",
    "on_button_customer_to_admin_2_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASScustomer_loginENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[15];
    char stringdata1[32];
    char stringdata2[1];
    char stringdata3[33];
    char stringdata4[36];
    char stringdata5[36];
    char stringdata6[38];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASScustomer_loginENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASScustomer_loginENDCLASS_t qt_meta_stringdata_CLASScustomer_loginENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "customer_login"
        QT_MOC_LITERAL(15, 31),  // "on_loginButton_customer_clicked"
        QT_MOC_LITERAL(47, 0),  // ""
        QT_MOC_LITERAL(48, 32),  // "on_signUpButton_customer_clicked"
        QT_MOC_LITERAL(81, 35),  // "on_forgetPasswdBtn_customer_c..."
        QT_MOC_LITERAL(117, 35),  // "on_button_customer_to_admin_c..."
        QT_MOC_LITERAL(153, 37)   // "on_button_customer_to_admin_2..."
    },
    "customer_login",
    "on_loginButton_customer_clicked",
    "",
    "on_signUpButton_customer_clicked",
    "on_forgetPasswdBtn_customer_clicked",
    "on_button_customer_to_admin_clicked",
    "on_button_customer_to_admin_2_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASScustomer_loginENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    0,   48,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject customer_login::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASScustomer_loginENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASScustomer_loginENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASScustomer_loginENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<customer_login, std::true_type>,
        // method 'on_loginButton_customer_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_signUpButton_customer_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_forgetPasswdBtn_customer_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_customer_to_admin_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_customer_to_admin_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void customer_login::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<customer_login *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_loginButton_customer_clicked(); break;
        case 1: _t->on_signUpButton_customer_clicked(); break;
        case 2: _t->on_forgetPasswdBtn_customer_clicked(); break;
        case 3: _t->on_button_customer_to_admin_clicked(); break;
        case 4: _t->on_button_customer_to_admin_2_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *customer_login::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *customer_login::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASScustomer_loginENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int customer_login::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
