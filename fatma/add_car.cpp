#include "add_car.h"
#include "ui_add_car.h"
#include "car.h"
Add_Car::Add_Car(QTableView* Tbs,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Add_Car)
{
    ui->setupUi(this);
    this->Tabs=Tbs;

}

Add_Car::~Add_Car()
{
    delete ui;
}

void Add_Car::on_ajouter_clicked()
{
    if(ui->matricule->text()!="")
    {
        car tmpCar;
        if(!(tmpCar.addcar(ui->modele->currentText(),ui->matricule->text(),ui->type->currentText())))
            ui->ERROR->setText("ERROR");
        else
        {
            Tabs->setModel(tmpCar.read());
            ui->ERROR->setText("");
            this->hide();
        }

    }
    ui->ERROR->setText("Check your Input.");
}
