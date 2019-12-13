#include "reclamation.h"
#include "ui_reclamationwindow.h"
#include "reclamationwindow.h"
#include <QMessageBox>
#include "menu.h"

reclamationwindow::reclamationwindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::reclamationwindow)
{
    ui->setupUi(this);
    ui->TABLEAURECLAMATION->setModel(tmpRECLAMATION.afficher());

}

reclamationwindow::~reclamationwindow()
{
    delete ui;
}


void reclamationwindow::on_pushButton_2_clicked()
{
    int ref= ui->lineEdit_ref->text().toInt();
    int numserie= ui->lineEdit_num->text().toInt();
    QString date= ui->lineEdit_date->text();
    QString description= ui->lineEdit_description->text();
    QString etat="en attente";
  reclamation c(ref,numserie,date,description,etat);

ui->TABLEAURECLAMATION->setModel(tmpRECLAMATION.afficher());//refresh
}

void reclamationwindow::on_pushButton_resolu_clicked()
{
    int id = ui->lineEdit_refR->text().toInt();
    QString etat ="resolu";
    reclamation r(etat);
     r.resolu(id);
    ui->TABLEAURECLAMATION->setModel(tmpRECLAMATION.afficher());//refresh
}

void reclamationwindow::on_pushButton_clicked()
{
    this->hide();
    menu m ;
    m.exec();
}
