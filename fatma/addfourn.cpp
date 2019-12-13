#include "addfourn.h"
#include "ui_addfourn.h"
#include "fourn.h"

addFourn::addFourn(QTableView* Data,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addFourn)
{
    ui->setupUi(this);
    Table=Data;
}

addFourn::~addFourn()
{
    delete ui;
}

void addFourn::on_ajouter_clicked()
{
    if(ui->Id->text()!="",ui->Nom->text()!="" && ui->Prenom->text()!="" && ui->Tel->text()!="" && ui->Adresse->text()!="" && ui->inter1->text()!="" && ui->inter2->text()!="")
    {
        Fourn tmpF;
        if(!tmpF.addFourn(ui->Id->text(),ui->Nom->text(),ui->Prenom->text(),ui->Adresse->text(),ui->Tel->text(),ui->Type->currentText(),ui->inter1->text()+" - "+ ui->inter2->text()))
        {
            ui->label_7->setText("ERROR.");
        }
        else
        {
            ui->label_7->setText("");
            Table->setModel(tmpF.read());
        }
    }
    else
        ui->label_7->setText("Valider les champs");

}
