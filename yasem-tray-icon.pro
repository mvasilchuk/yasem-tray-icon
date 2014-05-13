#-------------------------------------------------
#
# Project created by QtCreator 2014-03-11T12:58:06
#
#-------------------------------------------------

VERSION = 1.0.0

QT       += core gui widgets

TARGET = yasem-tray-icon
TEMPLATE = lib

CONFIG += C++11

DEFINES += TRAYICON_LIBRARY

INCLUDEPATH += ../yasem-core

SOURCES += trayicon.cpp

HEADERS += trayicon.h\
        trayicon_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

include(../common.pri)
DESTDIR = $$DEFAULT_PLUGIN_DIR

OTHER_FILES += \
    metadata.json

RESOURCES += \
    resources.qrc
