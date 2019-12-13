#include "reservationWindow.h"
#include "ui_reservationWindow.h"
#include "reservation.h"
#include "../../menu.h"

#include <QDate>

#include "../../khalil/client.h"

reservationWindow::reservationWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::reservationWindow)
{
    ui->setupUi(this);
    ui->dateEdit->setMinimumDate(QDate::currentDate());
    ui->comboBox_4->hide();
    ui->comboBox_5->hide();
    //ui->comboBox_3->hide();
}

reservationWindow::~reservationWindow()
{
    delete ui;
}


void reservationWindow::on_pushButton_3_clicked()
{
    QString cin ;
           cin=ui->lineEdit_3->text();

            if( ui->lineEdit_3->text().isEmpty()   )
            {
               // w.show();
                    QMessageBox::warning(nullptr, QObject::tr("Attention"),
                                QObject::tr("Veuillez remplir tout les champs.\n"), QMessageBox::Ok);
            }
            else {




                      QSqlQuery qry;
                      qry.prepare("insert into RESERVATION (cin) values ('"+cin+"')");

                         if (qry.exec())
                     {

                           QMessageBox::information(this,tr("Ajout Reservation"),tr("Reservation est ajouté avec success"));

                           // reinitialiser tt les champs a vide
                           ui->lineEdit_3->setText("");

                        }
                         else
                     {
                       QMessageBox::critical(this,tr("SAVE"),qry.lastError().text());
                      }
             }
}

void reservationWindow::on_pushButton_4_clicked()
{
    reservation *r;
    r->supprimer_reservation(ui->lineEdit_4->text());

}

void reservationWindow::on_pushButton_5_clicked()
{
    reservation *r ;
    r->modifier_reservation1(ui->lineEdit_8->text(),ui->dateEdit_4->date(),ui->lineEdit_7->text());

}

void reservationWindow::on_pushButton_clicked()
{
    bool i;
    QDate d;
   d= ui->dateEdit->date();
    Client *c;
    reservation r1;
    reservation r;
    if(ui->comboBox_2->currentIndex()==0)
    {
     i= r.voiturerecherche(ui->comboBox_2->currentText(),ui->comboBox_3->currentText(),d);


    }

    if(ui->comboBox_2->currentIndex()==1)
    {
        i= r.voiturerecherche(ui->comboBox_2->currentText(),ui->comboBox_4->currentText(),d);

    }

    if(ui->comboBox_2->currentIndex()==2)
    {
       i= r.voiturerecherche(ui->comboBox_2->currentText(),ui->comboBox_5->currentText(),d);


    }


    if(i==true)
    {
        QMessageBox::information(NULL,"mawjouda","mawjouda");
    }

    //c->recherchedjo();

    //r1.recherchedatedjo(d);

}

void reservationWindow::on_comboBox_2_currentIndexChanged(const QString &arg1)
{
    if(ui->comboBox_2->currentIndex()==0)
    {
        ui->comboBox_3->show();
        ui->comboBox_4->hide();
        ui->comboBox_5->hide();


    }

    if(ui->comboBox_2->currentIndex()==1)
    {
        ui->comboBox_4->show();

        ui->comboBox_5->hide();
        ui->comboBox_3->hide();

    }

    if(ui->comboBox_2->currentIndex()==2)
    {
        ui->comboBox_5->show();
        ui->comboBox_4->hide();

        ui->comboBox_3->hide();


    }
}

void reservationWindow::on_pushButton_6_clicked()
{
reservation *r;
Client *c;
bool ty;
bool tyyu;
QString test,test1;
//tyyu=c->existe(500,"ha","ha");
c->recherchedjo(ui->lineEdit_3->text(),&test,&test1);
//qDebug()<<test;
if(ui->comboBox_2->currentIndex()==0)
{
 ty=r->verifierdisponibiliter(ui->comboBox_2->currentText(),ui->comboBox_3->currentText(),ui->dateEdit->date(),ui->spinBox->value());


}

if(ui->comboBox_2->currentIndex()==1)
{
    ty=r->verifierdisponibiliter(ui->comboBox_2->currentText(),ui->comboBox_4->currentText(),ui->dateEdit->date(),ui->spinBox->value());

}

if(ui->comboBox_2->currentIndex()==2)
{
   ty=r->verifierdisponibiliter(ui->comboBox_2->currentText(),ui->comboBox_5->currentText(),ui->dateEdit->date(),ui->spinBox->value());


}
if(ty==true)
{
    ui->tabWidget->setCurrentIndex(1);
  ui->lineEdit->setText(ui->lineEdit_3->text());
 ui->lineEdit_2->setText(test);
   ui->lineEdit_5->setText(test1);
    ui->dateEdit_2->setDate(ui->dateEdit->date());
    ui->tableView->setModel(r->affichervoiturecritere("POPcar","JAGUAR",ui->dateEdit->date()));


}



}

void reservationWindow::on_dateEdit_2_userDateChanged(const QDate &date)
{
    ui->dateEdit_3->setMinimumDate(ui->dateEdit_2->date());

}

void reservationWindow::on_pushButton_7_clicked()
{
    reservation *res;


    res->modifier_reservation(ui->lineEdit->text(),ui->lineEdit_2->text(),ui->lineEdit_5->text(),ui->dateEdit_2->date(),ui->dateEdit_3->date(),ui->lineEdit_6->text());
    //res->ajouter_reservation(ui->lineEdit->text(),ui->lineEdit_2->text(),ui->lineEdit_5->text(),ui->dateEdit_2->date(),ui->dateEdit_3->date(),ui->lineEdit_6->text());
    ui->tableView->setModel(res->affichervoiturecritere("POPcar","JAGUAR",ui->dateEdit_2->date()));
}













void reservationWindow::on_pushButton_8_clicked()
{
   reservation *r ;
   ui->tableView_2->setModel(r->afficher());
}

void reservationWindow::on_pushButton_9_clicked()
{
    this->hide();
    menu m ;
    m.exec();

}
