QT += widgets
SOURCES = main.cpp \
    gamebase.cpp \
    mainwindow.cpp
QMAKE_CXXFLAGS += -g -O0
INSTALLS += target
target.path = /opt

HEADERS += \
    gamebase.h \
    mainwindow.h
