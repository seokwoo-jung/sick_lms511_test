#-------------------------------------------------
#
# Project created by QtCreator 2017-02-26T16:01:11
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = sick_test
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    CLMS511.cpp

HEADERS  += mainwindow.h \
    CPCL.h \
    CLMS511.h \
    LMS511_parser.h

FORMS    += mainwindow.ui

INCLUDEPATH += /usr/local/include

LIBS += -L/usr/local/lib

LIBS += -lopencv_core
LIBS += -lopencv_videoio
LIBS += -lopencv_highgui
LIBS += -lopencv_imgproc
LIBS += -lopencv_imgcodecs

LIBS += -lopencv_calib3d
LIBS += -lopencv_core
LIBS += -lopencv_features2d
LIBS += -lopencv_flann
LIBS += -lopencv_highgui
LIBS += -lopencv_imgcodecs
LIBS += -lopencv_imgproc
LIBS += -lopencv_ml
LIBS += -lopencv_objdetect
LIBS += -lopencv_photo
LIBS += -lopencv_shape
LIBS += -lopencv_superres
LIBS += -lopencv_video
LIBS += -lopencv_videoio
LIBS += -lopencv_videostab

INCLUDEPATH += /usr/local/include/vtk-7.1  \
    /usr/local/include/pcl-1.8 \
    /usr/include/eigen3

LIBS += -L/usr/local/lib \
    -lvtkpng-7.1 \
    -lvtksys-7.1 \
    -lvtkglew-7.1 \
    -lvtkhdf5-7.1 \
    -lvtkjpeg-7.1 \
    -lvtktiff-7.1 \
    -lvtkzlib-7.1 \
    -lvtkexpat-7.1 \
    -lvtkexpat-7.1 \
    -lvtkgl2ps-7.1 \
    -lvtkIOAMR-7.1 \
    -lvtkIOPLY-7.1 \
    -lvtkIOSQL-7.1 \
    -lvtkIOXML-7.1 \
    -lvtkproj4-7.1 \
    -lvtkalglib-7.1 \
    -lvtkIOCore-7.1 \
    -lvtkIOMINC-7.1 \
    -lvtkmetaio-7.1 \
    -lvtkNetCDF-7.1 \
    -lvtksqlite-7.1 \
    -lvtkhdf5_hl-7.1 \
    -lvtkIOImage-7.1 \
    -lvtkIOMovie-7.1 \
    -lvtkIOVideo-7.1 \
    -lvtkIOXML-7.1 \
    -lvtkjsoncpp-7.1 \
    -lvtkCommonSystem-7.1 \
    -lvtkCommonCore-7.1 \
    -lvtkCommonDataModel-7.1 \
    -lvtkCommonMath-7.1 \
    -lvtkGUISupportQt-7.1 \
    -lvtkRenderingQt-7.1 \
    -lvtkGUISupportQtSQL-7.1 \
    -lvtkRenderingCore-7.1 \
    -lvtkRenderingOpenGL2-7.1 \
    -lvtkIOParallel-7.1 \
    -lvtkParallelCore-7.1 \
    -lvtkCommonExecutionModel-7.1 \
    -lvtkIOGeometry-7.1 \
    -lvtkRenderingAnnotation-7.1 \
    -lpcl_io \
    -lpcl_ml \
    -lpcl_common \
    -lpcl_io_ply \
    -lpcl_kdtree \
    -lpcl_ml \
    -lpcl_octree \
    -lpcl_people \
    -lpcl_search \
    -lpcl_stereo \
    -lpcl_filters \
    -lpcl_surface \
    -lpcl_features \
    -lpcl_tracking \
    -lpcl_keypoints \
    -lpcl_outofcore \
    -lpcl_recognition \
    -lpcl_registration \
    -lpcl_segmentation \
    -lpcl_visualization \
    -lpcl_sample_consensus \
    -lboost_system \
    -lgomp

DISTFILES += \
    sicktoolbox/SickConfig.hh.in \
    sicktoolbox/stamp-h1
