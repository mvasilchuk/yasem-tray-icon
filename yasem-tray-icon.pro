#-------------------------------------------------
#
# Project created by QtCreator 2014-03-11T12:58:06
#
#-------------------------------------------------

VERSION = 0.1.0
TARGET = yasem-tray-icon
TEMPLATE = lib

include($${top_srcdir}/common.pri)

QT       += core gui widgets

DEFINES += TRAYICON_LIBRARY

SOURCES += \
    trayiconplugin.cpp \
    trayiconobject.cpp

HEADERS +=\
    trayicon_global.h \
    trayiconplugin.h \
    trayiconobject.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

OTHER_FILES += \
    metadata.json

RESOURCES += \
    resources.qrc
