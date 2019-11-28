#include "compte.h"
#include <QDebug>

compte::compte()
{
    NOM="";
    PRENOM="";
    CIN=0;
    NUMERO_COMPTE=0;
}
compte::compte(QString NOM,QString PRENOM,int CIN,int NUMERO_COMPTE)
 {

     this->NOM=NOM;
     this->PRENOM=PRENOM;
     this->CIN=CIN;
     this->NUMERO_COMPTE=NUMERO_COMPTE;

 }
 bool compte::ajouter()
 {
 QSqlQuery query;
 query.prepare("INSERT INTO compte ( NOM, PRENOM,CIN,NUMERO_COMPTE) "
                     "VALUES (:NOM, :PRENOM,:CIN,:NUMERO_COMPTE)");

 query.bindValue(":NOM", NOM);
 query.bindValue(":PRENOM", PRENOM);
 query.bindValue(":CIN", CIN);
 query.bindValue(":NUMERO_COMPTE", NUMERO_COMPTE);
 return    query.exec();
 }

 QSqlQueryModel * compte::afficher()
 {QSqlQueryModel * model= new QSqlQueryModel();

 model->setQuery("select * from compte");
 model->setHeaderData(0, Qt::Horizontal, QObject::tr("NOM "));
 model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRENOM"));
 model->setHeaderData(2, Qt::Horizontal, QObject::tr("CIN"));
 model->setHeaderData(3, Qt::Horizontal, QObject::tr("NUMERO_COMPTE"));



     return model;
 }
 bool compte::supprimer(int CIN)
 {

 QSqlQuery query;
 query.prepare("Delete from compte where CIN = :CIN ");
 query.bindValue(":CIN", CIN);
 return    query.exec();
 }
bool compte::modifier()
{
    QSqlQuery query;
    query.prepare("UPDATE  compte set   NOM=:NOM , PRENOM=:PRENOM, CIN=:CIN, NUMERO_COMPTE=:NUMERO_COMPTE  where( CIN=:CIN)");

    query.bindValue(":NOM", NOM);
    query.bindValue(":PRENOM", PRENOM);
    query.bindValue(":CIN", CIN);
    query.bindValue(":NUMERO_COMPTE", NUMERO_COMPTE);
    return  query.exec();
}
QSqlQueryModel *compte::rechercher()
{
    QSqlQueryModel *model=new QSqlQueryModel();
       QSqlQuery q;
       q.prepare("select * from compte where (CIN=:CIN) ");
       q.addBindValue(getcin());
       q.exec();
     model->setQuery(q);
     return(model);
}
