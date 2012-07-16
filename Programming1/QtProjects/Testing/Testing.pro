#-------------------------------------------------
#
# Project created by QtCreator 2012-02-21T16:28:16
#
#-------------------------------------------------

TARGET = Testing
TEMPLATE = lib

DEFINES += TESTING_LIBRARY

SOURCES += \
    main.cpp \
    lcdrange.cpp \
    gameboard.cpp \
    cannonfield.cpp

HEADERS += testing.h\
        Testing_global.h \
    lcdrange.h \
    gameboard.h \
    cannonfield.h

symbian {
    MMP_RULES += EXPORTUNFROZEN
    TARGET.UID3 = 0xE2E2AF2B
    TARGET.CAPABILITY = 
    TARGET.EPOCALLOWDLLDATA = 1
    addFiles.sources = Testing.dll
    addFiles.path = !:/sys/bin
    DEPLOYMENT += addFiles
}

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
