#-------------------------------------------------
#
# Project created by QtCreator 2019-11-26T14:30:31
#
#-------------------------------------------------

QT       += core gui printsupport network
QT  += sql
QT  +=widgets
QT += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = rimaaa
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    connection.cpp \
    menu.cpp \
    comptes.cpp \
    comptes_classe.cpp \
    agence.cpp \
    agence_classe.cpp \
    notification.cpp \
    qcustomplot.cpp \
    statistique_c.cpp \
    reclamation.cpp \
    reclamationwindow.cpp \
    fatma/add_car.cpp \
    fatma/addfourn.cpp \
    fatma/arduino.cpp \
    fatma/car.cpp \
    fatma/cars.cpp \
    fatma/fourn.cpp \
    fatma/updatecar.cpp \
    fatma/updatefourn.cpp \
    khalil/carte.cpp \
    khalil/client.cpp \
    khalil/ClientWindow.cpp \
    iyadh/conge.cpp \
    iyadh/employer.cpp \
    iyadh/employeWindow.cpp \
    iyadh/smtp.cpp \
    iyadh/notification_emp.cpp \
    youcef/fwdcommandedachat/commandes.cpp \
    youcef/fwdcommandedachat/informations.cpp \
    youcef/gestionreservation/reservation.cpp \
    youcef/gestionreservation/reservationWindow.cpp \
    youcef/fwdcommandedachat/commandeWindow.cpp

HEADERS += \
        mainwindow.h \
    connection.h \
    menu.h \
    comptes.h \
    comptes_classe.h \
    agence.h \
    agence_classe.h \
    qcustomplot.h \
    statistique_c.h \
    reclamation.h \
    reclamationwindow.h \
    fatma/add_car.h \
    fatma/addfourn.h \
    fatma/arduino.h \
    fatma/car.h \
    fatma/cars.h \
    fatma/fourn.h \
    fatma/updatecar.h \
    fatma/updatefourn.h \
    khalil/carte.h \
    khalil/client.h \
    khalil/ClientWindow.h \
    iyadh/conge.h \
    iyadh/employer.h \
    iyadh/employeWindow.h \
    iyadh/smtp.h \
    notification.h \
    iyadh/notification_emp.h \
    youcef/fwdcommandedachat/commandes.h \
    youcef/fwdcommandedachat/informations.h \
    youcef/gestionreservation/reservation.h \
    youcef/gestionreservation/reservationWindow.h \
    youcef/fwdcommandedachat/commandeWindow.h

FORMS += \
        mainwindow.ui \
    menu.ui \
    comptes.ui \
    agence.ui \
    statistique_c.ui \
    reclamationwindow.ui \
    fatma/add_car.ui \
    fatma/addfourn.ui \
    fatma/cars.ui \
    fatma/form.ui \
    fatma/updatecar.ui \
    fatma/updatefourn.ui \
    khalil/ClientWindow.ui \
    khalil/interprinc.ui \
    iyadh/employeWindow.ui \
    iyadh/statistiques.ui \
    youcef/reservationWindow.ui \
    youcef/commandeWindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    interface.qrc \
    img.qrc \
    youcef/fwdcommandedachat/resource.qrc

DISTFILES += \
    iyadh/eajout.wav \
    iyadh/emodifier.wav \
    iyadh/esupp.wav
