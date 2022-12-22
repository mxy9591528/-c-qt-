QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dataconfig.cpp\
    levelchoicescene.cpp\
    main.cpp\
    mainscene.cpp\
    mycoin.cpp\
    mypushbutton.cpp\
    playscene.cpp

HEADERS += \
    dataconfig.h\
    levelchoicescene.h\
    main.h\
    mainscene.h\
    mycoin.h\
    mypushbutton.h\
    playscene.h\

FORMS += \
    mainscene.ui

TRANSLATIONS += \
    CoinFlip_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
 QT += multimedia

RESOURCES += \
    src.qrc
