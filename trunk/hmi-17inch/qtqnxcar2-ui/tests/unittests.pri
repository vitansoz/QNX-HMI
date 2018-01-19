include(../../common.pri)

TEMPLATE = app
DESTDIR = $$BUILD_ROOT/bin/
CONFIG += testcase
QT += testlib

# core lib
INCLUDEPATH += $$SOURCE_ROOT/qtqnxcar2/qtqnxcar2
DEPENDPATH += $$SOURCE_ROOT/qtqnxcar2/qtqnxcar2
win32: LIBPATH += $$BUILD_ROOT/bin
else: LIBPATH += $$BUILD_ROOT/lib
LIBS += -lqtqnxcar2

# ui lib
INCLUDEPATH += $$SOURCE_ROOT/qtqnxcar2-ui/qtqnxcar2-ui
DEPENDPATH += $$SOURCE_ROOT/qtqnxcar2-ui/qtqnxcar2-ui
win32: LIBPATH += $$BUILD_ROOT/bin
else: LIBPATH += $$BUILD_ROOT/lib
LIBS += -lqtqnxcar2-ui

QMAKE_RPATHDIR += $$BUILD_ROOT/lib

DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII QT_NO_URL_CAST_FROM_STRING
