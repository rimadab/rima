#include "menu.h"
#include "ui_menu.h"
#include "mainwindow.h"



menu::menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
}

menu::~menu()
{
    delete ui;
}



void menu::on_comptes_clicked()
{
    this->hide();
   comptes comptesob;
    comptesob.exec();
}

void menu::on_pushButton_2_clicked()
{
    this->hide();
   Agence agenceob;
    agenceob.exec();
}

void menu::on_pushButton_3_clicked()
{
    this->hide();
    reclamationwindow reclamationob ;
    reclamationob.exec();
}

void menu::on_pushButton_4_clicked()
{
    this->hide();
    Cars carsnob;
    carsnob.exec();

}

void menu::on_pushButton_5_clicked()
{
    this->hide();
    ClientWindow clientWin;
    clientWin.exec();
}

void menu::on_pushButton_6_clicked()
{
    this->hide();
    employeWindow empwin;
    empwin.exec();
}

void menu::on_pushButton_7_clicked()
{
    this->hide();
    reservationWindow win;
    win.exec();
}

void menu::on_pushButton_8_clicked()
{
    this->hide();
    commandeWindow win;
    win.exec();
}
