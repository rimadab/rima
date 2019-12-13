#include "updatecar.h"
#include "ui_updatecar.h"
#include "car.h"

updatecar::updatecar(int rw,QTableView* Tbs,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::updatecar)
{
    ui->setupUi(this);
    this->row=rw;
    this->Tabs=Tbs;
    ui->matricule->setText(Tabs->model()->data(Tabs->model()->index(row,0)).toString());
}

updatecar::~updatecar()
{
    delete ui;
}

void updatecar::on_done_clicked()
{
    if(ui->matricule->text()!="")
    {
        car tmpCar;
        if(!(tmpCar.update(ui->matricule->text(),ui->type->currentText(),ui->modele->currentText(),ui->etat->currentText(),Tabs->model()->data(Tabs->model()->index(row,0)).toString())))
            ui->ERROR->setText("ERROR");
        else
        {
            Tabs->setModel((tmpCar.read()));
            ui->ERROR->setText("");
            this->hide();
        }

    }
    ui->ERROR->setText("CHECK YOUR INPUT");
}
