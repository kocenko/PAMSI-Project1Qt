QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

HEADERS += \
    mainwindow.h \
    message.h \
    node.h \
    orderedList.h

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    message.cpp \
    node.cpp \
    orderedList.cpp

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target/

RESOURCES += \
    Resources/main_background.qrc
