#ifndef AGENCE_CLASSE_H
#define AGENCE_CLASSE_H

#include<QString>
#include<QSqlQuery>
#include<QMessageBox>
#include<QStringList>
#include<QtSql>
#include<QDebug>
#include<QSqlError>
#include<QSqlQueryModel>
class agence_classe
{
public:
    agence_classe();

    agence_classe(int,QString);
   int getID(){return id_agence;}
   QString getLocation(){return location;}

   void setID(int id_agence){this->id_agence=id_agence;}
   void setLocation(QString location){this->location=location;}
   QSqlQueryModel * afficher_agences();
    void ajouter_agences(agence_classe);

     void selectionner(int);
      bool supprimer_agences(int);
      bool verif_chaine(QString);
      bool verif_champs_vide(QString);
private:
    int id_agence;
    QString location;
};

#endif // AGENCE_CLASSE_H
