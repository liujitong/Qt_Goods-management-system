QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
RC_ICONS = Icon\nanew.ico
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    all_out.cpp \
    change_windows.cpp \
    fileio.cpp \
    global.cpp \
    insert.cpp \
    insert_windows.cpp \
    main.cpp \
    mainwindow.cpp \
    serach_table.cpp

HEADERS += \
    all_out.h \
    change_windows.h \
    fileio.h \
    global.h \
    insert.h \
    insert_windows.h \
    mainwindow.h \
    serach_table.h

FORMS += \
    all_out.ui \
    change_windows.ui \
    insert_windows.ui \
    mainwindow.ui \
    serach_table.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icon.qrc \
    icon.qrc \
    icon.qrc
