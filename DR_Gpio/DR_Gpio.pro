TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        DR_Gpio.cpp \
        main.c

HEADERS += \
    DR_Gpio.h \
    RegsLPC1769.h
