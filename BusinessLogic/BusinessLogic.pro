QT += core sql
QT -= gui

TEMPLATE = lib
DEFINES += BUSINESSLOGIC_LIBRARY

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    BusinessLogic.cpp

HEADERS += \
    BusinessLogic_global.h \
    BusinessLogic.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../build/Entities/release/ -lEntities
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../build/Entities/debug/ -lEntities

INCLUDEPATH += $$PWD/../Entities
DEPENDPATH += $$PWD/../Entities
