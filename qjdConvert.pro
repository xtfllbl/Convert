# do not use release version, there have some problem
TEMPLATE = app
TARGET = Convert
DEPENDPATH += . debug
INCLUDEPATH += .
CONFIG += debug
QMAKE_LFAGS+= -static

# Input
HEADERS += qjd_convert_help.h \
           qjd_convert_mainwindow.h \
           qjddatastream.h \
           qjdsegybh.h \
           qjdsegyth.h \
           qjdtraceheader.h \
    qjd.h
FORMS += qjd_convert_help.ui qjd_convert_mainwindow.ui
SOURCES += qjd_convert_help.cpp \
           main.cpp \
           qjd_convert_mainwindow.cpp \
           qjddatastream.cpp \
           qjdsegybh.cpp \
           qjdsegyth.cpp \
           qjdtraceheader.cpp \
    qjd.cpp
RESOURCES += image.qrc
TRANSLATIONS += convert_en.ts convert_zh.ts
