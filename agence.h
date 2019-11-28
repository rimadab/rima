#ifndef AGENCE_H
#define AGENCE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class  agence
{
public:
    agence();
    agence(QString,QString);
    QSqlQueryModel *rechercher();
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(QString);
    bool modifier();
    QString getnom()
    {return  NOM ;
    }
    void setnom (QString noom)
    {NOM=noom;}
private:
   QString NOM;
   QString LOCATION;

};

#endif // agence_H
