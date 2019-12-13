#ifndef CLIENT_H
#define CLIENT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Client
{
public:
    Client();
    Client (int ,QString,QString,QString );
    QString get_nom();
    QString get_prenom();
    int get_CIN();
    QString get_adresse();
    void Setnom(QString val){nom=val;}

    bool ajouter();
     QSqlQueryModel * afficher();
     bool supprimer(int);
    bool modifier();
     QSqlQueryModel * recherche(int id);
        QSqlQueryModel * recherche2(QString   , QString  );
        void recherchedjo(QString CIN1,QString * ,QString *);
        bool  existe(int CIN,QString NOM, QString PRENOM );
private:
    QString nom,prenom,adresse;
    int CIN;
};

#endif // CLIENT_H




