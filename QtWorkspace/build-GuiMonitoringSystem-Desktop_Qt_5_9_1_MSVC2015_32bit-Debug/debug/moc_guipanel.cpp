/****************************************************************************
** Meta object code from reading C++ file 'guipanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../GuiMonitoringSystem/guipanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'guipanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GUIPanel_t {
    QByteArrayData data[24];
    char stringdata0[423];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GUIPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GUIPanel_t qt_meta_stringdata_GUIPanel = {
    {
QT_MOC_LITERAL(0, 0, 8), // "GUIPanel"
QT_MOC_LITERAL(1, 9, 15), // "onMQTT_Received"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 14), // "QMQTT::Message"
QT_MOC_LITERAL(4, 41, 7), // "message"
QT_MOC_LITERAL(5, 49, 16), // "onMQTT_Connected"
QT_MOC_LITERAL(6, 66, 16), // "onMQTT_Connacked"
QT_MOC_LITERAL(7, 83, 3), // "ack"
QT_MOC_LITERAL(8, 87, 17), // "onMQTT_subscribed"
QT_MOC_LITERAL(9, 105, 5), // "topic"
QT_MOC_LITERAL(10, 111, 15), // "onMQTT_subacked"
QT_MOC_LITERAL(11, 127, 5), // "msgid"
QT_MOC_LITERAL(12, 133, 3), // "qos"
QT_MOC_LITERAL(13, 137, 24), // "on_connectButton_clicked"
QT_MOC_LITERAL(14, 162, 22), // "on_stateButton_clicked"
QT_MOC_LITERAL(15, 185, 21), // "on_pingButton_clicked"
QT_MOC_LITERAL(16, 207, 32), // "on_measurmentSwitch_valueChanged"
QT_MOC_LITERAL(17, 240, 5), // "value"
QT_MOC_LITERAL(18, 246, 31), // "on_waterTimeSlider_valueChanged"
QT_MOC_LITERAL(19, 278, 22), // "on_waterButton_clicked"
QT_MOC_LITERAL(20, 301, 35), // "on_waterMoistureSlider_valueC..."
QT_MOC_LITERAL(21, 337, 38), // "on_waterTemperatureSlider_val..."
QT_MOC_LITERAL(22, 376, 25), // "on_waterParamsSet_clicked"
QT_MOC_LITERAL(23, 402, 20) // "on_freq_valueChanged"

    },
    "GUIPanel\0onMQTT_Received\0\0QMQTT::Message\0"
    "message\0onMQTT_Connected\0onMQTT_Connacked\0"
    "ack\0onMQTT_subscribed\0topic\0onMQTT_subacked\0"
    "msgid\0qos\0on_connectButton_clicked\0"
    "on_stateButton_clicked\0on_pingButton_clicked\0"
    "on_measurmentSwitch_valueChanged\0value\0"
    "on_waterTimeSlider_valueChanged\0"
    "on_waterButton_clicked\0"
    "on_waterMoistureSlider_valueChanged\0"
    "on_waterTemperatureSlider_valueChanged\0"
    "on_waterParamsSet_clicked\0"
    "on_freq_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GUIPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    1,   93,    2, 0x08 /* Private */,
       8,    1,   96,    2, 0x08 /* Private */,
      10,    2,   99,    2, 0x08 /* Private */,
      13,    0,  104,    2, 0x08 /* Private */,
      14,    0,  105,    2, 0x08 /* Private */,
      15,    0,  106,    2, 0x08 /* Private */,
      16,    1,  107,    2, 0x08 /* Private */,
      18,    1,  110,    2, 0x08 /* Private */,
      19,    0,  113,    2, 0x08 /* Private */,
      20,    1,  114,    2, 0x08 /* Private */,
      21,    1,  117,    2, 0x08 /* Private */,
      22,    0,  120,    2, 0x08 /* Private */,
      23,    1,  121,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   17,

       0        // eod
};

void GUIPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GUIPanel *_t = static_cast<GUIPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onMQTT_Received((*reinterpret_cast< const QMQTT::Message(*)>(_a[1]))); break;
        case 1: _t->onMQTT_Connected(); break;
        case 2: _t->onMQTT_Connacked((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 3: _t->onMQTT_subscribed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->onMQTT_subacked((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 5: _t->on_connectButton_clicked(); break;
        case 6: _t->on_stateButton_clicked(); break;
        case 7: _t->on_pingButton_clicked(); break;
        case 8: _t->on_measurmentSwitch_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_waterTimeSlider_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->on_waterButton_clicked(); break;
        case 11: _t->on_waterMoistureSlider_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->on_waterTemperatureSlider_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->on_waterParamsSet_clicked(); break;
        case 14: _t->on_freq_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject GUIPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GUIPanel.data,
      qt_meta_data_GUIPanel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GUIPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GUIPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GUIPanel.stringdata0))
        return static_cast<void*>(const_cast< GUIPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int GUIPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
