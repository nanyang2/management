QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    jingli.cpp \
    jingli1.cpp \
    jingli2.cpp \
    jingli3.cpp \
    kehu.cpp \
    kehu1.cpp \
    kehu2.cpp \
    main.cpp \
    mainwindow.cpp \
    x1.cpp \
    x2.cpp \
    x3.cpp \
    xx0.cpp \
    jingli4.cpp \
    xiaoshou1.cpp \
    xiaoshou2.cpp \
    xiaoshou3.cpp

HEADERS += \
    jingli.h \
    jingli1.h \
    jingli2.h \
    jingli3.h \
    kehu.h \
    kehu1.h \
    kehu2.h \
    mainwindow.h \
    x1.h \
    x2.h \
    x3.h \
    xx0.h \
    jingli4.h \
    xiaoshou1.h \
    xiaoshou2.h \
    xiaoshou3.h

FORMS += \
    jingli.ui \
    jingli1.ui \
    jingli2.ui \
    jingli3.ui \
    kehu.ui \
    kehu1.ui \
    kehu2.ui \
    mainwindow.ui \
    x1.ui \
    x2.ui \
    x3.ui \
    xx0.ui \
    jingli4.ui \
    xiaoshou1.ui \
    xiaoshou2.ui \
    xiaoshou3.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
