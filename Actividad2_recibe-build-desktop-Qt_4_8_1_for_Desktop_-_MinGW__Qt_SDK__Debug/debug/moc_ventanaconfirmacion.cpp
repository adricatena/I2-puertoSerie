/****************************************************************************
** Meta object code from reading C++ file 'ventanaconfirmacion.h'
**
** Created: Wed 5. Dec 11:11:54 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Actividad2_recibe/ventanaconfirmacion.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ventanaconfirmacion.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VentanaConfirmacion[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,
      45,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VentanaConfirmacion[] = {
    "VentanaConfirmacion\0\0on_btnAceptar_clicked()\0"
    "on_btnCancelar_clicked()\0"
};

void VentanaConfirmacion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VentanaConfirmacion *_t = static_cast<VentanaConfirmacion *>(_o);
        switch (_id) {
        case 0: _t->on_btnAceptar_clicked(); break;
        case 1: _t->on_btnCancelar_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData VentanaConfirmacion::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VentanaConfirmacion::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_VentanaConfirmacion,
      qt_meta_data_VentanaConfirmacion, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VentanaConfirmacion::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VentanaConfirmacion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VentanaConfirmacion::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VentanaConfirmacion))
        return static_cast<void*>(const_cast< VentanaConfirmacion*>(this));
    return QDialog::qt_metacast(_clname);
}

int VentanaConfirmacion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
