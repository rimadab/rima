#include "comptes.h"
#include "ui_comptes.h"
#include "menu.h"

comptes::comptes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::comptes)
{
    ui->setupUi(this);
    ui->tableView->setModel(c.afficher_comptes());
    indice=-1;
   ui->Effectuer->setVisible(false);


}

comptes::~comptes()
{
    delete ui;
}

void comptes::on_ajouter_clicked()
{
    c.setNom(ui->nom->text());
    c.setPrenom(ui->prenom->text());
    c.setMail(ui->mail->text());
    c.setPassword(ui->password->text());
    c.setGrade(ui->grade->text());


    if(c.verif_champs_vide(ui->nom->text(),ui->prenom->text(),ui->mail->text(),ui->password->text(),ui->grade->text())==false)
       {
           QMessageBox::information(this,tr("error"),tr("les champ ne doit pas etre vide"));
       }

       else if(c.verif_chaine(ui->nom->text())==false)
       {
           QMessageBox::information(this,tr("error"),tr("nom doit etre alphabetique"));
       }
    else if(c.verif_chaine(ui->prenom->text())==false)
    {
        QMessageBox::information(this,tr("error"),tr("prenom doit etre alphabetique"));
    }
    else if(c.verif_chaine(ui->grade->text())==false)
    {
        QMessageBox::information(this,tr("error"),tr("grade doit etre alphabetique"));
    }


       else
       {
    c.ajouter_comptes(c);
     this->hide();
    comptes comptesob;
    comptesob.setModal(true);
    comptesob.exec();
    }


}


void comptes::on_tableView_clicked(const QModelIndex &index)
{
    indice=ui->tableView->model()->index(index.row(),0).data().toInt();
}
void comptes::on_pushButton_modifier_clicked()
{
    ui->Effectuer->setVisible(true);

        if(indice>0)
        {
            c.selectionner(indice);
            ui->id_comptes->setText(QString::number(indice));
            ui->nom->setText(c.getNom());
            ui->prenom->setText(c.getPrenom());
            ui->mail->setText(c.getMail());
            ui->password->setText(c.getPassword());
            ui->grade->setText(c.getgrade());



        }
}
void comptes::on_Effectuer_clicked()
{
    c.selectionner(indice);
    c.setID(indice);
    c.setNom(ui->nom->text());
    c.setPrenom(ui->prenom->text());
    c.setMail(ui->mail->text());
    c.setPassword(ui->password->text());
    c.setGrade(ui->grade->text());
    if(!(ui->nom->text()).isEmpty())
    {

    c.modifier_comptes(c);
    this->hide();
    comptes comptesob;
    comptesob.setModal(true);
    comptesob.exec();
    }
    else
    {
          QMessageBox::information(this,tr("error"),tr("les champs ne doit pas etre vide"));
    }

}


void comptes::on_supprimer_clicked()
{
    c.selectionner(indice);
    c.supprimer_comptes(indice);
    this->hide();
    comptes comptesob;
    comptesob.setModal(true);
    comptesob.exec();
}

void comptes::on_lineEdit_recherche_textChanged(const QString &arg1)
{
    QSqlQueryModel *model=c.rechercher_comptes(ui->lineEdit_recherche->text());
    ui->tableView->setModel(model);
}

void comptes::on_pushButton_tri_clicked()
{
     ui->tableView->setModel(c.tri_par_mail());
}

void comptes::on_retour_clicked()
{
    this->hide();
   menu menuob;
    menuob.exec();
}

void comptes::on_statistique_clicked()
{

    s=new statistique_c(this);
            s->show();

}
