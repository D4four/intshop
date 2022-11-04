QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    BookC.cpp \
    BookStore.cpp \
    book.cpp \
    choose.cpp \
    create.cpp \
    edit.cpp \
    editbook.cpp \
    main.cpp \
    mainwindow.cpp \
    view.cpp

HEADERS += \
    BookC.h \
    BookStore.h \
    OfficeC.h \
    StudBookC.h \
    book.h \
    choose.h \
    create.h \
    edit.h \
    editbook.h \
    includes.h \
    mainwindow.h \
    view.h

FORMS += \
    book.ui \
    choose.ui \
    create.ui \
    edit.ui \
    editbook.ui \
    mainwindow.ui \
    view.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
