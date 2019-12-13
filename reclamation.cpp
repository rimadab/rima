#include "reclamation.h"
#include <QDebug>
#include <QString>

reclamation::reclamation()
{
ref=0;
numserie=0;
date="";
description="";
etat="en attente";
}
reclamation::reclamation(QString etat)
{
this->etat=etat;
}
reclamation::reclamation(int ref,int numserie,QString date,QString description,QString etat)
{
    this->ref=ref;
  this->numserie=numserie;
    this->date=date;
    this->description=description;
    this->etat=etat;

}
int reclamation::get_ref(){return  ref;}
int reclamation::get_numserie(){return  numserie;}
QString reclamation::get_date(){return  date;}
QString reclamation::get_description(){return  description;}
QString reclamation::get_etat(){return etat;}




bool reclamation::ajouter()
{
QSqlQuery query;
query.prepare("insert into RECLAMATION (REF,NUMSERIE, DATER, DESCRIPTION,ETAT) values (:REF,:NUMSERIE, :DATER, :DESCRIPTION,:ETAT)");
query.bindValue(":REF", ref);
query.bindValue(":NUMSERIE", numserie);
query.bindValue(":DATER", date);
query.bindValue(":DESCRIPTION", description);
query.bindValue(":ETAT", etat);

return    query.exec();
}
QSqlQueryModel * reclamation::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from RECLAMATION");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("REF"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("NUMSERIE"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATER"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("DESCRIPTION"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("ETAT"));
    return model;
}
bool reclamation::resolu(int )
{
    QSqlQuery query;
    QString res= QString::number(ref);


    query.prepare("Update RECLAMATION set ETAT=:ETAT where REF =:REF");
    query.bindValue(":REF", res);
    query.bindValue(":ETAT","resolu");


}
