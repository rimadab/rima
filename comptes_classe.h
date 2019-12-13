#ifndef COMPTES_CLASSE_H
#define COMPTES_CLASSE_H

#include<QString>
#include<QSqlQuery>
#include<QMessageBox>
#include<QStringList>
#include<QtSql>
#include<QDebug>
#include<QSqlError>
#include<QSqlQueryModel>
class comptes_classe
{
public:
    comptes_classe();

     comptes_classe(int,QString,QString,QString,QString,QString);
    int getID(){return id_comptes;}
    QString getNom(){return nom;}
    QString getPrenom(){return prenom;}
    QString getMail(){return mail;}

    QString getPassword(){return password;}
    QString getgrade(){return grade;}
    void setID(int id_comptes){this->id_comptes=id_comptes;}
    void setNom(QString nom){this->nom=nom;}
    void setPrenom(QString prenom){this->prenom=prenom;}
    void setMail(QString mail){this->mail=mail;}
    void setPassword(QString password){this->password=password;}
    void setGrade(QString grade){this->grade=grade;}

        QSqlQueryModel * afficher_comptes();
         void ajouter_comptes(comptes_classe);
          void modifier_comptes(comptes_classe );
          void selectionner(int);
           bool supprimer_comptes(int);
            QSqlQueryModel * rechercher_comptes(QString);
            QSqlQueryModel * tri_par_mail();
            bool verif_chaine(QString);
            bool verif_champs_vide(QString,QString,QString,QString,QString);
            bool verif_mail(QString);


private:
    int id_comptes;
    QString nom;
    QString prenom;
    QString mail;
    QString password;
    QString grade;

};

#endif // COMPTES_CLASSE_H
