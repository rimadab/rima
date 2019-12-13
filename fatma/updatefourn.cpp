#include "updatefourn.h"
#include "ui_updatefourn.h"
#include "fourn.h"

updatefourn::updatefourn(QString Row,QTableView* Data,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::updatefourn)
{
    ui->setupUi(this);
    row=Row;
    Table=Data;
}

updatefourn::~updatefourn()
{
    delete ui;
}

void updatefourn::on_modifier_clicked()
{
    if(ui->Nom->text()!="" && ui->Prenom->text()!="" && ui->Tel->text()!="" && ui->Adresse->text()!="" && ui->inter1->text()!="" && ui->inter2->text()!="")
    {
        Fourn tmpF;
        if(!tmpF.update(row,ui->Nom->text(),ui->Prenom->text(),ui->Adresse->text(),ui->Tel->text(),ui->Type->currentText(),ui->inter1->text()+" - "+ ui->inter2->text()))
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
