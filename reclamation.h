#ifndef RECLAMATION_H
#define RECLAMATION_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class reclamation
{public:
    reclamation();
    reclamation(int,int,QString,QString,QString);
    reclamation(QString);
    int get_numserie();
    int get_ref();
    QString get_date();
    QString get_description();
    QString get_etat();



    bool ajouter();
    QSqlQueryModel * afficher();
    bool resolu(int);
private:
   int numserie,ref;
   QString date,description,etat;
};
#endif // COMMANDE_H
