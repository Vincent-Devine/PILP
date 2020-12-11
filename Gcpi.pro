QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ihm_post.cpp \
    main.cpp \
    gcpi.cpp \
    post.cpp

HEADERS += \
    gcpi.h \
    ihm_post.h \
    post.h

FORMS += \
    gcpi.ui \
    ihm_post.ui

TRANSLATIONS += \
    Gcpi_fr_FR.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
