QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admin.cpp \
    commodityinfoinput.cpp \
    customer.cpp \
    login.cpp \
    main.cpp \
    manager.cpp \
    managerlogin.cpp \
    managerregister.cpp \
    mysqlconnect.cpp \
    utility.cpp

HEADERS += \
    admin.h \
    commodity.h \
    commodityinfoinput.h \
    customer.h \
    info.h \
    login.h \
    manager.h \
    managerlogin.h \
    managerregister.h \
    mysqlconnect.h \
    utility.h

FORMS += \
    admin.ui \
    commodityinfoinput.ui \
    customer.ui \
    login.ui \
    manager.ui \
    managerlogin.ui \
    managerregister.ui

TRANSLATIONS += \
    SupermarketManagement_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    sql/admin.sql \
    sql/commodity.sql \
    sql/manager.sql

RESOURCES += \
    src.qrc
