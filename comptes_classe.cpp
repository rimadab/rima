#include "comptes_classe.h"

comptes_classe::comptes_classe()
{

}
comptes_classe::comptes_classe(int id_comptes,QString nom,QString prenom,QString mail,QString password,QString grade)
{
this->id_comptes=id_comptes;
this->nom=nom;
this->prenom=prenom;
this->mail=mail;
this->password=password;
this->grade=grade;
}

QSqlQueryModel *comptes_classe::afficher_comptes()
{
    QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("select * from comptes");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("id_comptes"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("mail"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("password"));
     model->setHeaderData(5,Qt::Horizontal,QObject::tr("grade"));


    return model;

}

void comptes_classe::ajouter_comptes(comptes_classe c)
{

    QSqlQuery qry;
    qry.prepare("insert into comptes(nom,prenom,mail,password,grade)"
                "values(?,?,?,?,?)");

    qry.addBindValue(c.nom);
    qry.addBindValue(c.prenom);
    qry.addBindValue(c.mail);
    qry.addBindValue(c.password);
    qry.addBindValue(c.grade);


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


void comptes_classe::modifier_comptes(comptes_classe c )
{
    QSqlQuery qry;
    qry.prepare("update comptes set nom=?,prenom=?,mail=?,password=?,grade=? where id_compte=? ");

    qry.addBindValue(c.nom);
    qry.addBindValue(c.prenom);
    qry.addBindValue(c.mail);
    qry.addBindValue(c.password);
    qry.addBindValue(c.grade);
    qry.addBindValue(c.id_comptes);



    if(qry.exec())
    {
        qDebug()<<"sucsess";
    }
    else
    {
        qDebug()<<"failed";

    }
}

void comptes_classe::selectionner(int id_comptes)
{
    QSqlQuery qry;
    qry.prepare("select * from comptes where id_compte= ?");
    qry.addBindValue(id_comptes);
    if(qry.exec())
    {
        while (qry.next())
        {
            id_comptes=qry.value(0).toInt();
            nom=qry.value(1).toString();
            prenom=qry.value(2).toString();
            mail=qry.value(3).toString();
            password=qry.value(4).toString();
            grade=qry.value(5).toString();

        }
    }
}
bool comptes_classe::supprimer_comptes(int id_comptes)
{
    QSqlQuery qry;
    qry.prepare("delete from comptes where id_compte = ?");

    qry.addBindValue(id_comptes);
    if(qry.exec())
    {
        return true;
    }
    else
    {
        return false;
    }
}
QSqlQueryModel * comptes_classe::rechercher_comptes(QString nom)
{



    QString req="select * from comptes where nom like '%'||?||'%' " ;
    QSqlQuery qry;
    qry.prepare(req);


    qry.addBindValue(nom);
    QSqlQueryModel *model=new QSqlQueryModel();
    qry.exec();
    model->setQuery(qry);
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("id_comptes"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("mail"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("password"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("grade"));


    return model;
}
QSqlQueryModel *comptes_classe::tri_par_mail()
{
    QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("select * from comptes order by mail ");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("id_comptes"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("mail"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("password"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("grade"));


    return model;

}
bool comptes_classe::verif_chaine(QString ch)
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

bool comptes_classe::verif_champs_vide(QString ch1,QString ch2,QString ch3,QString ch4,QString ch5)
{

    if(ch1!="" && ch2!="" && ch3!="" && ch4!="" && ch5!="")
    {
        return true;
    }
    return false;
}
bool comptes_classe::verif_mail(QString ch)
{
    for(int i=0;i<ch.size();i++)
    {
        if(ch[i]!='@'&&ch[i]!='.')
            return false;

    }
    return true;
}
