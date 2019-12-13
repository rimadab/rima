#include "car.h"
#include<QSqlQuery>

car::car()
{

}

bool car::addcar(QString modele, QString matricule, QString type)
{
    QSqlQuery q;
    q.prepare("INSERT INTO car VALUES(:matricule,:type,:modele,:etat)");
    q.bindValue(":matricule",matricule);
    q.bindValue(":type",type);
    q.bindValue(":modele",modele);
    q.bindValue(":etat","disponible");

    return(q.exec());
}

bool car::update(QString matricule, QString type, QString modele, QString etat,QString matricule_old)
{
    QSqlQuery q;
 q.prepare("UPDATE car SET matricule=:matricule,type=:type,modele=:modele,etat=:etat WHERE matricule=:matricule_old");
 q.bindValue(":matricule",matricule);
    q.bindValue(":type",type);
    q.bindValue(":modele",modele);
    q.bindValue(":etat",etat );
    q.bindValue(":matricule_old",matricule_old );

    return(q.exec());
}

bool car::Delete(QString matricule )
{
    QSqlQuery q;
    q.prepare("DELETE FROM car WHERE matricule=:matricule");
    q.bindValue(":matricule",matricule);
    return(q.exec());
}

QSqlQueryModel* car::read()
{
    QSqlQueryModel* Model=new QSqlQueryModel;
    Model->setQuery("SELECT * FROM car ORDER BY type");
    Model->setHeaderData(0,Qt::Horizontal,QObject::tr("matricule"));
    Model->setHeaderData(1,Qt::Horizontal,QObject::tr("type"));
    Model->setHeaderData(2,Qt::Horizontal,QObject::tr("modele"));
    Model->setHeaderData(3,Qt::Horizontal,QObject::tr("etat"));

    return Model;
}

QSqlQueryModel *car::read(QString Mat)
{
    QSqlQueryModel* Model=new QSqlQueryModel;
    Model->setQuery("SELECT * FROM car WHERE matricule LIKE '%" +Mat+"%' ORDER BY type");
    Model->setHeaderData(0,Qt::Horizontal,QObject::tr("matricule"));
    Model->setHeaderData(1,Qt::Horizontal,QObject::tr("type"));
    Model->setHeaderData(2,Qt::Horizontal,QObject::tr("modele"));
    Model->setHeaderData(3,Qt::Horizontal,QObject::tr("etat"));

    return Model;
}
