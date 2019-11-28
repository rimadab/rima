#ifndef COMPTE_H
#define COMPTE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>


class compte
{
public:
    compte();
    compte(QString,QString,int,int);
    QSqlQueryModel *rechercher();
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    bool modifier();
    int getcin()
    {return  CIN ;
    }
    void setcin (int ciin)
    {CIN=ciin;}
private:
   QString NOM,PRENOM;
    int CIN;
    int NUMERO_COMPTE;

};

#endif // compte_H
