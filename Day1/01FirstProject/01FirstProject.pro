#-------------------------------------------------
#
# Project created by QtCreator 2021-03-20T19:29:10
#
#-------------------------------------------------


# QT包含的模块
QT       += core gui

# 大于4版本包含widgets模块
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

# 生成的.exe文件的名字
TARGET = 01FirstProject
# 模板 应用程序模板 application
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


# 源文件
SOURCES += \
        main.cpp \
        mywidget.cpp \
    mypushbutton.cpp

# 头文件
HEADERS += \
        mywidget.h \
    mypushbutton.h
