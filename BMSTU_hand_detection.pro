#-------------------------------------------------
#
# Project created by QtCreator 2017-03-17T15:18:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BMSTU_hand_detection
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    myImage.cpp \
    contours.cpp \
    conditions.cpp \
    handGesture.cpp \
    defects.cpp

HEADERS  += mainwindow.hpp \
    myImage.hpp \
    contours.hpp \
    conditions.hpp \
    handGesture.hpp \
    defects.hpp

FORMS    += mainwindow.ui

INCLUDEPATH += D:/OpenCV/build/install/include
LIBS += D:/OpenCV/build/bin/libopencv_calib3d249d.dll
LIBS += D:/OpenCV/build/bin/libopencv_contrib249d.dll
LIBS += D:/OpenCV/build/bin/libopencv_core249d.dll
LIBS += D:/OpenCV/build/bin/libopencv_features2d249d.dll
LIBS += D:/OpenCV/build/bin/libopencv_flann249d.dll
LIBS += D:/OpenCV/build/bin/libopencv_flann249d.dll
LIBS += D:/OpenCV/build/bin/libopencv_highgui249d.dll
LIBS += D:/OpenCV/build/bin/libopencv_imgproc249d.dll
LIBS += D:/OpenCV/build/bin/libopencv_legacy249d.dll
LIBS += D:/OpenCV/build/bin/libopencv_ml249d.dll
LIBS += D:/OpenCV/build/bin/libopencv_nonfree249d.dll
LIBS += D:/OpenCV/build/bin/libopencv_objdetect249d.dll
LIBS += D:/OpenCV/build/bin/libopencv_ocl249d.dll
LIBS += D:/OpenCV/build/bin/libopencv_photo249d.dll
LIBS += D:/OpenCV/build/bin/libopencv_stitching249d.dll
LIBS += D:/OpenCV/build/bin/libopencv_superres249d.dll
LIBS += D:/OpenCV/build/bin/libopencv_video249d.dll
LIBS += D:/OpenCV/build/bin/libopencv_videostab249d.dll

STATECHARTS +=