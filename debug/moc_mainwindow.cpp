/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Thu Dec 10 14:29:25 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      46,   38,   11,   11, 0x08,
      75,   69,   11,   11, 0x08,
     112,   11,   11,   11, 0x08,
     138,   11,   11,   11, 0x08,
     161,   11,   11,   11, 0x08,
     207,   38,   11,   11, 0x08,
     240,   38,   11,   11, 0x08,
     271,   38,   11,   11, 0x08,
     302,   38,   11,   11, 0x08,
     329,   11,   11,   11, 0x08,
     359,   11,   11,   11, 0x08,
     386,   11,   11,   11, 0x08,
     410,   11,   11,   11, 0x08,
     431,   11,   11,   11, 0x08,
     457,   11,   11,   11, 0x08,
     481,   11,   11,   11, 0x08,
     507,   11,   11,   11, 0x08,
     533,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_actionHelp_triggered()\0"
    "checked\0on_btnAD_clicked(bool)\0index\0"
    "on_combo240_currentIndexChanged(int)\0"
    "on_toolTHRemove_clicked()\0"
    "on_toolTHAdd_clicked()\0"
    "on_lineConvertToFileName_textChanged(QString)\0"
    "on_checkTraceScope_clicked(bool)\0"
    "on_checkResample_clicked(bool)\0"
    "on_checkStandard_clicked(bool)\0"
    "on_checkSkip_clicked(bool)\0"
    "on_radioNonStandard_clicked()\0"
    "on_radioStandard_clicked()\0"
    "on_toolRemove_clicked()\0on_toolAdd_clicked()\0"
    "on_btnConvertTo_clicked()\0"
    "on_btnConvert_clicked()\0"
    "on_actionExit_triggered()\0"
    "on_actionOpen_triggered()\0depend()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

const QMetaObject *MainWindow::metaObject() const
{
    return &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_actionHelp_triggered(); break;
        case 1: on_btnAD_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: on_combo240_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: on_toolTHRemove_clicked(); break;
        case 4: on_toolTHAdd_clicked(); break;
        case 5: on_lineConvertToFileName_textChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: on_checkTraceScope_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: on_checkResample_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: on_checkStandard_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: on_checkSkip_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: on_radioNonStandard_clicked(); break;
        case 11: on_radioStandard_clicked(); break;
        case 12: on_toolRemove_clicked(); break;
        case 13: on_toolAdd_clicked(); break;
        case 14: on_btnConvertTo_clicked(); break;
        case 15: on_btnConvert_clicked(); break;
        case 16: on_actionExit_triggered(); break;
        case 17: on_actionOpen_triggered(); break;
        case 18: depend(); break;
        default: ;
        }
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
