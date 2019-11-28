#include "gerer_agence.h"
#include "agence.h"
#include "ui_gerer_agence.h"
#include <QMessageBox>
#include <QString>


gerer_agence::gerer_agence(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gerer_agence)
{
    ui->setupUi(this);

  ui->table1->setModel(tmpagence.afficher());

}

gerer_agence::~gerer_agence()
{
    delete ui;
}

void gerer_agence::on_pushButton_4_clicked()
{
    bool test;
    QString NOM =ui->lineEdit_4->text();
    int TAUX_REDUCTION =ui->lineEdit_2->text().toInt();
    agence c(NOM,TAUX_REDUCTION);
    test=c.ajouter();
    if(test)
    {ui->table1->setModel(tmpagence.afficher());//refresh
    QMessageBox::information(nullptr, QObject::tr("Ajouter une agence"),
                      QObject::tr("agence ajouté.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);

    }
      else
          {QMessageBox::critical(nullptr, QObject::tr("Ajouter une agence"),
                      QObject::tr("Erreur !.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);}


    }




void gerer_agence::on_pushButton_3_clicked()
{
    QString NOM = ui->lineEdit_3->text();
    bool test=tmpagence.supprimer(NOM);
    if(test)
    {ui->table1->setModel(tmpagence.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer une agence"),
                    QObject::tr("agence supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer une agence"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);


    }


void gerer_agence::on_pushButton_2_clicked()
{

        QString NOM=ui->lineEdit_4->text();
        float TAUX_REDUCTION=ui->lineEdit_2->text().toFloat();
          agence c(NOM,TAUX_REDUCTION);
        bool test2= c.modifier();
        if(test2)
        {
            ui->table1->setModel(tmpagence.afficher());//refresh

                 QMessageBox::information(nullptr, QObject::tr("modifier une agence"),
                             QObject::tr("agence modifié.\n"
                                         "Click Cancel to exit."), QMessageBox::Cancel);

             }
             else
                 QMessageBox::critical(nullptr, QObject::tr("modifier une agence"),
                             QObject::tr("Erreur !.\n"
                                         "Click Cancel to exit."), QMessageBox::Cancel);
}
void gerer_agence::on_pushButton_clicked()
{

    QString NOM=ui->noom->text();
                    ui->noom->clear();
                    QSqlQueryModel *model;
                    agence *c=new agence();

                          QString nom,taux_reduction;




                            QSqlQuery  *q  = new QSqlQuery();
                            q->prepare("select * from agence where (NOM=:NOM)");
                            q->addBindValue(NOM);
                            if(q->exec())
                            {
                                while(q->next())
                                {


                                    NOM=q->value(0).toString();
                                    taux_reduction=q->value(1).toString();


                                }
                            }

                            ui->lineEdit_4->setText(NOM);
                            ui->lineEdit_2->setText(taux_reduction);
}
