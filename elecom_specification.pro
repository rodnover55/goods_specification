#-------------------------------------------------
#
# Project created by QtCreator 2012-09-19T15:26:01
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = elecom_specification
TEMPLATE = app


SOURCES += main.cpp\
    model/applicationconfig.cpp \
    model/qregistry.cpp \
    model/configreader.cpp \
    view/mainwindow.cpp \
    view/settingsdialog.cpp \
    controller/settingsdialoghandler.cpp

HEADERS  += \
    baseconfigreader.h \
    model/applicationconfig.h \
    model/qregistry.h \
    model/configreader.h \
    view/mainwindow.h \
    defines.h \
    view/settingsdialog.h \
    controller/settingsdialoghandler.h

FORMS    += \
    view/mainwindow.ui \
    view/settingsdialog.ui

QMAKE_CXXFLAGS += -std=c++0x
