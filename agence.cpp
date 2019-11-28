#include "agence.h"
#include <QDebug>
agence::agence()
{
    NOM="";
    LOCATION="";
}
 agence::agence(QString NOM,QString LOCATION)
 {

     this->NOM=NOM;
     this->LOCATION=LOCATION;
 }
 bool agence::ajouter()
 {
 QSqlQuery query;
 query.prepare("INSERT INTO AGENCE (NOM, LOCATION) "
                     " VALUES (:NOM, :LOCATION)");

 query.bindValue(":NOM", NOM);
 query.bindValue(":LOCATION", LOCATION);

 return    query.exec();
 }

 QSqlQueryModel * agence::afficher()
 {QSqlQueryModel * model= new QSqlQueryModel();

 model->setQuery("select * from AGENCE");
 model->setHeaderData(0, Qt::Horizontal, QObject::tr("NOM"));
 model->setHeaderData(1, Qt::Horizontal, QObject::tr("LOCATION"));


     return model;
 }
 bool agence::supprimer(QString nom)
 {

 QSqlQuery query;
 query.prepare("Delete from AGENCE where NOM = :NOM ");
 query.bindValue(":NOM", nom);
 return    query.exec();
 }
bool agence::modifier()
{
    QSqlQuery query;
    query.prepare("UPDATE  AGENCE set   NOM=:NOM , LOCATION=:LOCATION");

    query.bindValue(":NOM",NOM);
    query.bindValue(":LOCATION",LOCATION);

    return  query.exec();
}
QSqlQueryModel *agence::rechercher()
{
    QSqlQueryModel *model=new QSqlQueryModel();
       QSqlQuery q;
       q.prepare("select * from AGENCE where (NOM=:NOM) ");
       q.addBindValue(getnom());
       q.exec();
     model->setQuery(q);
     return(model);
}
