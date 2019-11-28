#include "gerer_compte.h"
#include "compte.h"
#include "ui_gerer_compte.h"
#include "compte.h"
#include <QMessageBox>
#include <QString>
gerer_compte::gerer_compte(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gerer_compte)
{
    ui->setupUi(this);

    ui->tab_1->setModel(tmpcompte.afficher());

}

gerer_compte::~gerer_compte()
{
    delete ui;
}

void gerer_compte::on_pushButton_clicked()
{
    bool test;
    QString NOM =ui->lineEdit_4->text();
    QString PRENOM =ui->lineEdit->text();
    int CIN =ui->lineEdit_2->text().toInt();

    int NUMERO_COMPTE =ui->lineEdit_5->text().toInt();

    compte c(NOM,PRENOM,CIN,NUMERO_COMPTE);
    test=c.ajouter();
    if(test)
    {ui->tab_1->setModel(tmpcompte.afficher());//refresh
    QMessageBox::information(nullptr, QObject::tr("Ajouter un compte"),
                      QObject::tr("compte ajouté.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);

    }
      else
          {QMessageBox::critical(nullptr, QObject::tr("Ajouter un compte"),
                      QObject::tr("Erreur !.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);}


    }




void gerer_compte::on_pushButton_3_clicked()
{
    int cin = ui->lineEdit_3->text().toInt();
    bool test=tmpcompte.supprimer(cin);
    if(test)
    {ui->tab_1->setModel(tmpcompte.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer un compte"),
                    QObject::tr("compte supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un compte"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);


    }


void gerer_compte::on_pushButton_2_clicked()
{

        QString NOM=ui->lineEdit_4->text();
        QString PRENOM=ui->lineEdit->text();


        int CIN=ui->lineEdit_2->text().toInt();
        int NUMERO_COMPTE=ui->lineEdit_5->text().toInt();
        compte c (NOM,PRENOM,CIN,NUMERO_COMPTE);
        bool test2= c.modifier();
        if(test2)
        {
            ui->tab_1->setModel(tmpcompte.afficher());//refresh

                 QMessageBox::information(nullptr, QObject::tr("Modifier un compte"),
                             QObject::tr("compte modifié.\n"
                                         "Click Cancel to exit."), QMessageBox::Cancel);

             }
             else
                 QMessageBox::critical(nullptr, QObject::tr("Modifier un compte"),
                             QObject::tr("Erreur !.\n"
                                         "Click Cancel to exit."), QMessageBox::Cancel);
}
void gerer_compte::on_pushButton_5_clicked()
{

    QString CIN=ui->ciin->text();
                    ui->ciin->clear();
                    QSqlQueryModel *model;
                    compte *c=new compte();

                          QString NOM,PRENOM,NUMERO_COMPTE;




                            QSqlQuery  *q  = new QSqlQuery();
                            q->prepare("select * from compte where (CIN=:CIN)");
                            q->addBindValue(CIN);
                            if(q->exec())
                            {
                                while(q->next())
                                {


                                    NOM=q->value(0).toString();
                                    PRENOM=q->value(1).toString();
                                     CIN=q->value(2).toString();
                                     NUMERO_COMPTE=q->value(3).toString();


                                }
                            }

                            ui->lineEdit_4->setText(NOM);
                            ui->lineEdit->setText(PRENOM);
                            ui->lineEdit_2->setText(CIN);
                            ui->lineEdit_5->setText(NUMERO_COMPTE);

}


/*void gerer_compte::on_comboBox_activated(const QString &arg1)
{

}*/
