#include "cars.h"
#include "ui_cars.h"
#include "add_car.h"
#include "updatecar.h"
#include "car.h"
#include "fourn.h"
#include "addfourn.h"
#include "updatefourn.h"
#include "../connection.h"
#include "../menu.h"

Cars::Cars(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Cars)
{
    ui->setupUi(this);
    car karhba;
    Fourn fourn;
    ui->tableView->setModel(karhba.read());
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView_2->setModel(fourn.read());
    ui->tableView_2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    connect(ui->supprimer,SIGNAL(clicked(bool)),this,SLOT(on_supprimer_clicked()));


}

Cars::~Cars()
{
    delete ui;
}


void Cars::on_pushButton_clicked()
{
    Add_Car* CarForm= new Add_Car(ui->tableView);
    CarForm->show();


}

void Cars::on_pushButton_2_clicked()
{
    if(ui->tableView->currentIndex().row()!=-1)
    {
    updatecar* CarForm =new updatecar(ui->tableView->currentIndex().row(),ui->tableView);
    CarForm->show();
    }
}

void Cars::on_pushButton_3_clicked()
{
    if(ui->tableView->currentIndex().row()!=-1)
    {
    car tmpCar;
    tmpCar.Delete(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->currentIndex().row(),0)).toString());
    if(ui->lineEdit->text()=="")
            ui->tableView->setModel(tmpCar.read());
    else
            ui->tableView->setModel(tmpCar.read(ui->lineEdit->text()));
    }
}

void Cars::on_lineEdit_textChanged()
{
    car tmpCar;
    if(ui->lineEdit->text()=="")
            ui->tableView->setModel(tmpCar.read());
    else
            ui->tableView->setModel(tmpCar.read(ui->lineEdit->text()));
}



void Cars::on_ajouter_fr_clicked()
{
    addFourn* AF= new addFourn(ui->tableView_2);
    AF->show();


}

void Cars::on_modifier_fr_clicked()
{

    if(ui->tableView_2->currentIndex().row()!=-1)
    {
    updatefourn* UF =new updatefourn(ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->currentIndex().row(),0)).toString(),ui->tableView_2);
    UF->show();
    }

}

void Cars::on_supprimer_clicked()
{

    if(ui->tableView_2->currentIndex().row()!=-1)
    {
    Fourn tmpFour;
    tmpFour.Delete(ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->currentIndex().row(),0)).toString());
    if(ui->lineEdit_2->text()=="")
            ui->tableView_2->setModel(tmpFour.read());
    else
            ui->tableView_2->setModel(tmpFour.read(ui->lineEdit_2->text()));
    }

}

void Cars::on_lineEdit_2_textChanged()
{
    Fourn tmpF;
    if(ui->lineEdit_2->text()=="")
            ui->tableView_2->setModel(tmpF.read());
    else
            ui->tableView_2->setModel(tmpF.read(ui->lineEdit_2->text()));
}

void Cars::on_pushButton_4_clicked()
{
    this->hide();
    menu m ;
    m.exec();
}
