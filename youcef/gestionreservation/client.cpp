#include <QDebug>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlDatabase>
#include <QSqlQuery>
#include "../../connection.h"
#include "client.h"

Client::Client()
{
    nom="";
    prenom="";
    adresse="";
    CIN=0;

}

 Client ::Client (int CIN ,QString nom,QString prenom , QString adresse )
{
     this->CIN=CIN;
     this->nom=nom;
     this->prenom=prenom;
     this->adresse=adresse;
 }
 QString Client::get_nom()
 {
     return  nom;
 }
  QString Client::get_prenom()
  {
      return prenom;
  }
  int Client::get_CIN()
  {
      return CIN;
  }
  QString Client::get_adresse()
  {
      return adresse;
  }


bool Client::ajouter()
{
QSqlQuery query;
connection co;
//co.ouvrirConnexion();

QString res= QString::number(CIN);
query.prepare("INSERT INTO TABECLIENT (CIN, NOM, PRENOM ,ADRESSE) "
                    "VALUES (:CIN, :nom, :prenom, :adresse)");
query.bindValue(":CIN", CIN);
query.bindValue(":nom", nom);
query.bindValue(":prenom", prenom);
query.bindValue(":adresse",adresse);

return    query.exec();
}

QSqlQueryModel * Client::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from tabeclient");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prénom"));
model->setHeaderData(3,Qt::Horizontal,QObject::tr("adresse"));
    return model;
}

bool Client::supprimer(int CIN)
{    QSqlQuery query;

    connection co;

//    QString res= QString::number(CIN);
      query.prepare("Delete * from tabeclient WHERE CIN =:CIN ");
      query.bindValue(":CIN",CIN);
      return    query.exec();

}

bool Client::modifier()
 {      QSqlQuery query;
        query.prepare("update TABECLIENT set  NOM=:nom,PRENOM=:prenom,,ADRESSE=:adresse where CIN=:CIN");
      //  query.bindValue(":CIN",CIN);
        query.bindValue(":nom",nom);
        query.bindValue(":prenom",prenom);
        query.bindValue(":adresse", adresse);
        return    query.exec();

}



QSqlQueryModel * Client::recherche(int CIN)
{QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM tabeclient WHERE CIN=:CIN");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("ADRESSE"));
      return model;
}
QSqlQueryModel * Client:: recherche2(QString nom , QString prenom)
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM tabeclient WHERE NOM like '"+nom+"%' or PRENOM like ' "+prenom+"%' " );
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("ADRESSE"));
      return model;


}

void Client::recherchedjo(QString CIN,QString *test ,QString *test1)
{
    QSqlQuery q;
    QString s;
        q.prepare("SELECT * FROM TABECLIENT WHERE CIN='"+CIN+"'   ")  ;

        if(q.exec()){
        while (q.next()) {
           this->CIN= q.value(0).toInt();

          // qDebug()<< this->CIN;
 //qDebug()<<q.value(1).toString();
 //qDebug()<<q.value(2).toString();


           *test=q.value(1).toString();
         //  qDebug()<<*test;




           *test1 = q.value(2).toString();
             //qDebug()<<*test1;


             s= q.value(3).toString();




    }}



}


/*
bool Client::existe(int CIN,QString NOM, QString PRENOM )
{QSqlQueryModel * model = new QSqlQueryModel();
    QString cin="500";
    model->setQuery("SELECT * FROM TABECLIENT WHERE CIN ='"+cin+"'   ");
    qDebug()<<model->rowCount();
    bool c ;
    c=model->rowCount()==1;
    qDebug()<<c;

return c;
}

*/






























