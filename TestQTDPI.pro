#-------------------------------------------------
#
# Project created by QtCreator 2016-08-15T13:42:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TestQTDPI
TEMPLATE = app

DESTDIR = ../TestQTDPI/bin


SOURCES += main.cpp\
        mainwindow.cpp \
    FeeSettingDlg.cpp \
    BasicDlg.cpp \
    TestTempDlg.cpp

HEADERS  += mainwindow.h \
    FeeSettingDlg.h \
    BasicDlg.h \
    windowsdpiscale.h \
    TestTempDlg.h

FORMS    += mainwindow.ui
