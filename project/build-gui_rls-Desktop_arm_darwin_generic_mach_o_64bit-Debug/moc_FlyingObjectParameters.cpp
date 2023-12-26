/****************************************************************************
** Meta object code from reading C++ file 'FlyingObjectParameters.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gui_rls/FlyingObjectParameters.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FlyingObjectParameters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
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
struct qt_meta_stringdata_CLASSobject_parametersENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSobject_parametersENDCLASS = QtMocHelpers::stringData(
    "object_parameters",
    "obj_parameters_changed",
    "",
    "Plane*",
    "size_t",
    "index",
    "on_create_new_obj_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSobject_parametersENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[18];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[7];
    char stringdata5[6];
    char stringdata6[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSobject_parametersENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSobject_parametersENDCLASS_t qt_meta_stringdata_CLASSobject_parametersENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "object_parameters"
        QT_MOC_LITERAL(18, 22),  // "obj_parameters_changed"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 6),  // "Plane*"
        QT_MOC_LITERAL(49, 6),  // "size_t"
        QT_MOC_LITERAL(56, 5),  // "index"
        QT_MOC_LITERAL(62, 25)   // "on_create_new_obj_clicked"
    },
    "object_parameters",
    "obj_parameters_changed",
    "",
    "Plane*",
    "size_t",
    "index",
    "on_create_new_obj_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSobject_parametersENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   32,    2, 0x06,    1 /* Public */,
       1,    1,   37,    2, 0x26,    4 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   40,    2, 0x08,    6 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    5,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject object_parameters::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSobject_parametersENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSobject_parametersENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSobject_parametersENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<object_parameters, std::true_type>,
        // method 'obj_parameters_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Plane *, std::false_type>,
        QtPrivate::TypeAndForceComplete<size_t, std::false_type>,
        // method 'obj_parameters_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Plane *, std::false_type>,
        // method 'on_create_new_obj_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void object_parameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<object_parameters *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->obj_parameters_changed((*reinterpret_cast< std::add_pointer_t<Plane*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<size_t>>(_a[2]))); break;
        case 1: _t->obj_parameters_changed((*reinterpret_cast< std::add_pointer_t<Plane*>>(_a[1]))); break;
        case 2: _t->on_create_new_obj_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (object_parameters::*)(Plane * , size_t );
            if (_t _q_method = &object_parameters::obj_parameters_changed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *object_parameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *object_parameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSobject_parametersENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int object_parameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void object_parameters::obj_parameters_changed(Plane * _t1, size_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
