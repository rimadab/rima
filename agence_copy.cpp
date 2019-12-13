#include "agence.h"
#include "ui_agence.h"
#include "notification.h"
#include "comptes.h"


Agence::Agence(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Agence)
{
    ui->setupUi(this);
    ui->tableView_agence->setModel(a.afficher_agences());
    indice=-1;


}

Agence::~Agence()
{
    delete ui;
}

void Agence::on_pushButton_ajouter_clicked()
{
    notification n;
    a.setLocation(ui->location->text());



    if(a.verif_champs_vide(ui->location->text())==false)
       {
           QMessageBox::information(this,tr("error"),tr("les champ ne doit pas etre vide"));
       }

       else if(a.verif_chaine(ui->location->text())==false)
       {
           QMessageBox::information(this,tr("error"),tr("les champ doit etre alphabetique"));
       }
       else
       {
    a.ajouter_agences(a);
    n.notification_ajout_agence(ui->location->text());

     this->hide();
    Agence agenceob;
    agenceob.setModal(true);
    agenceob.exec();
    }


}

void Agence::on_tableView_agence_clicked(const QModelIndex &index)
{
    indice=ui->tableView_agence->model()->index(index.row(),0).data().toInt();

}

void Agence::on_pushButton_2_clicked()
{
    a.selectionner(indice);
    a.supprimer_agences(indice);
    this->hide();
    Agence agenceob;
    agenceob.setModal(true);
    agenceob.exec();
}

void Agence::on_retour_clicked()
{
     this->hide();
    comptes agenceob;
    agenceob.setModal(true);
    agenceob.exec();
}
