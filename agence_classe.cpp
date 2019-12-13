#include "agence_classe.h"

agence_classe::agence_classe()
{

}
agence_classe::agence_classe(int id_agence,QString location)
{
this->id_agence=id_agence;
this->location=location;

}

QSqlQueryModel *agence_classe::afficher_agences()
{
    QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("select * from agence");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("id_agence"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("location"));



    return model;

}
void agence_classe::ajouter_agences(agence_classe a)
{

    QSqlQuery qry;
    qry.prepare("insert into agence(location)"
                "values(?)");

    qry.addBindValue(a.location);



    if(qry.exec())
        {
            qDebug()<<"sucsess";
            QMessageBox msgBox;
            msgBox.setText("Sauvegarde effectuee !");
            msgBox.exec();
        }
        else
        {
            qDebug()<<"qwer";
            QMessageBox msgBox;
            msgBox.setText("ERREUR : Sauvegarde echouee !");
            msgBox.exec();


        }
    }
void agence_classe::selectionner(int id_agence)
{
    QSqlQuery qry;
    qry.prepare("select * from agence where id_agence= ?");
    qry.addBindValue(id_agence);
    if(qry.exec())
    {
        while (qry.next())
        {
            id_agence=qry.value(0).toInt();
            location=qry.value(1).toString();


        }
    }
}
bool agence_classe::supprimer_agences(int id_agence)
{
    QSqlQuery qry;
    qry.prepare("delete from agence where id_agence = ?");

    qry.addBindValue(id_agence);
    if(qry.exec())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool agence_classe::verif_chaine(QString ch)
{
    for(int i=0;i<ch.size();i++)
    {
        if(ch[i]<'a' || ch[i]>'z')
        {
            return false;
        }

    }
    return true;
}

bool agence_classe::verif_champs_vide(QString ch1)
{

    if(ch1!="")
    {
        return true;
    }
    return false;
}


