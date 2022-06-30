QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add.cpp \
    admin.cpp \
    car.cpp \
    change2.cpp \
    database.cpp \
    del.cpp \
    diver.cpp \
    main.cpp \
    login.cpp \
    outinput.cpp \
    search.cpp \
    user.cpp

HEADERS += \
    add.h \
    admin.h \
    car.h \
    change2.h \
    database.h \
    del.h \
    diver.h \
    global.h \
    login.h \
    outinput.h \
    search.h \
    user.h

FORMS += \
    add.ui \
    admin.ui \
    change2.ui \
    database.ui \
    del.ui \
    diver.ui \
    login.ui \
    outinput.ui \
    search.ui \
    user.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    background.qrc \
    icon.qrc
