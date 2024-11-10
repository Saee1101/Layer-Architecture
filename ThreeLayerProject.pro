TEMPLATE = subdirs

SUBDIRS +=$$PWD/Entities \
          $$PWD/BusinessLogic \
          $$PWD/Presentation



QMAKE_CXXFLAGS += -std=gun++17
