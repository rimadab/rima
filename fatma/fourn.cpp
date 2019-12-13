#include "fourn.h"
#include<QSqlQuery>


Fourn::Fourn()
{

}

bool Fourn::addFourn(QString id,QString nom, QString prenom, QString adresse, QString tel,QString type,QString intervalle)
{
    QSqlQuery q;
    q.prepare("INSERT INTO Fourn VALUES(:id,:nom,:prenom,:adresse,:tel,:type,:intervalle)");
    q.bindValue(":id",id);
    q.bindValue(":nom",nom);
    q.bindValue(":prenom",prenom);
    q.bindValue(":adresse",adresse);
    q.bindValue(":tel",tel);
    q.bindValue(":type",type);
    q.bindValue(":intervalle",intervalle);


    return(q.exec());
}

bool Fourn::update(QString id,QString nom, QString prenom, QString adresse, QString tel,QString type,QString intervalle)
{
    QSqlQuery q;
    q.prepare("UPDATE Fourn SET nom=:nom,prenom=:prenom,adresse=:adresse,tel=:tel,type=:type,intervalle=:intervalle WHERE id=:id");
    q.bindValue(":id",id);
    q.bindValue(":nom",nom);
    q.bindValue(":prenom",prenom);
    q.bindValue(":adresse",adresse);
    q.bindValue(":tel",tel );
    q.bindValue(":type",type);
    q.bindValue(":intervalle",intervalle);

    return(q.exec());
}

bool Fourn::Delete(QString id )
{
    QSqlQuery q;
    q.prepare("DELETE FROM Fourn WHERE id=:id");
    q.bindValue(":id",id);
    return(q.exec());
}

QSqlQueryModel* Fourn::read()
{
    QSqlQueryModel* Model=new QSqlQueryModel;
    Model->setQuery("SELECT * FROM Fourn ORDER BY nom");
    Model->setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
    Model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    Model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
    Model->setHeaderData(3,Qt::Horizontal,QObject::tr("adresse"));
    Model->setHeaderData(4,Qt::Horizontal,QObject::tr("tel"));
    Model->setHeaderData(5,Qt::Horizontal,QObject::tr("type"));
    Model->setHeaderData(6,Qt::Horizontal,QObject::tr("intervalle"));




    return Model;
}
QSqlQueryModel* Fourn::read(QString id)
{
    QSqlQueryModel* Model=new QSqlQueryModel;
    Model->setQuery("SELECT * FROM Fourn WHERE id LIKE '%"+id+"%' ORDER BY nom");
    Model->setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
    Model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    Model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
    Model->setHeaderData(3,Qt::Horizontal,QObject::tr("adresse"));
    Model->setHeaderData(4,Qt::Horizontal,QObject::tr("tel"));
    Model->setHeaderData(5,Qt::Horizontal,QObject::tr("type"));
    Model->setHeaderData(6,Qt::Horizontal,QObject::tr("intervalle"));




    return Model;
}

