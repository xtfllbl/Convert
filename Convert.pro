# do not use release version, there have some problem
TEMPLATE = app
TARGET = 
DEPENDPATH += . debug
INCLUDEPATH += .
CONFIG += debug
# Input
HEADERS += help.h \
           mainwindow.h \
           qjddatastream.h \
           qjdsegybh.h \
           qjdsegyth.h \
           qjdtraceheader.h
FORMS += help.ui mainwindow.ui
SOURCES += help.cpp \
           main.cpp \
           mainwindow.cpp \
           qjddatastream.cpp \
           qjdsegybh.cpp \
           qjdsegyth.cpp \
           qjdtraceheader.cpp
RESOURCES += image.qrc
TRANSLATIONS += convert_en.ts convert_zh.ts
