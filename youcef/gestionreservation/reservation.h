#ifndef RESERVATION_H
#define RESERVATION_H
#include<QSqlQuery>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
//#include"connexion.h"
#include <QFileDialog>

#include <QApplication>
#include <QTextStream>
#include <QInputDialog>
#include <QIODevice>
#include <QFile>
#include<QPdfWriter>
#include<QPainter>
#include<QDesktopServices>
#include <QDate>
#include <QTableView>
#include <QMainWindow>
#include <QObject>
#include <QSharedDataPointer>
#include <QWidget>
#include <QDebug>
#include <QSqlQueryModel>
class reservationData;

class reservation
{
public:
    reservation();
    reservation(const reservation &);
    reservation &operator=(const reservation &);
    ~reservation();

 bool recherchedatedjo(QDate d);
    bool  voiturerecherche(QString type,QString MARQUE,QDate d);

    QString GetCIN(){return CIN;}
     void SetCIN(QString val){CIN=val;}

     QString GetNOM(){return NOM;}
      void SetNOM(QString val){NOM=val;}

      QString GetPRENOM(){return PRENOM;}
       void SetPRENOM(QString val){PRENOM=val;}

       QString GetVOITURERESERVER(){return VOITURERESERVER;}
        void SetVOITURERESERVER(QString val){VOITURERESERVER=val;}

        QString GetNBRESERVATION(){return NBRESERVATION;}
         void SetNBRESERVATION(QString val){NBRESERVATION=val;}
QSqlQueryModel * affichervoituredispo(QString TYPE1 ,QString MARQUE1,QDate d);
bool modifier_reservation(QString CIN, QString NOM, QString PRENOM, QDate DATE_RESERVATION,QDate DATE_FIN,QString VOITURERESERVER);
bool supprimer_reservation(QString ID_COMMANDES);

bool verifierdisponibiliter(QString TYPE1 ,QString MARQUE1,QDate d,int i );
QSqlQueryModel * affichervoiturecritere(QString TYPE1, QString MARQUE1, QDate d);
QSqlQueryModel * affichervoituretest(QString TYPE1, QString MARQUE1, QDate d);
bool modifier_reservation1(QString CIN,QDate DATE_FIN,QString VOITURERESERVER);
bool init_reservation(QString matricule);

bool ajouter_reservation(QString CIN,QString NOM,QString PRENOM,QDate DATE_RESERVATION,QDate DATE_FIN,QString VOITURERESERVER);
QSqlQueryModel * afficher();


private:
    QSharedDataPointer<reservationData> data;
    QString CIN,NOM,PRENOM,VOITURERESERVER,NBRESERVATION;
    QDate DATE_RESERVATION,DATE_FIN;
};

#endif // RESERVATION_H
