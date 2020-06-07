include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

HEADERS += \
        ../combat_project/IKeypad.h \
        ../combat_project/ILatch.h \
        ../combat_project/lockcontroller.h \
        tst_testdivisionbyzero.h

SOURCES += \
        ../combat_project/lockcontroller.cpp \
        main.cpp
INCLUDEPATH += C:\\Users\\skeych\\Desktop\\combat_project
