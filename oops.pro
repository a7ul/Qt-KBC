#-------------------------------------------------
#
# Project created by QtCreator 2013-04-28T21:13:21
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = oops
TEMPLATE = app


SOURCES += main.cpp\
        kbc.cpp \
    code/question.cpp \
    code/filehandle.cpp \
    code/questionentry.cpp \
    startscreen.cpp \
    resultofquestion.cpp \
    code/audiencepolldialog.cpp \
    code/about.cpp



HEADERS  += kbc.h \
    code/question.h \
    code/filehandle.h \
    code/questionentry.h \
    startscreen.h \
    resultofquestion.h \
    code/audiencepolldialog.h \
    code/about.h


FORMS    += kbc.ui \
    code/questionentry.ui \
    startscreen.ui \
    resultofquestion.ui \
    code/audiencepolldialog.ui \
    code/about.ui



RESOURCES += \
    resources.qrc
