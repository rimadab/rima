#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gerer_compte.h"
#include<QMessageBox>
#include "gerer_agence.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
ui->setupUi(this);
//ui->tab_1->setModel(tmpcompte.afficher());

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    gerer_compte gc;
    gc.setModal(true);
    gc.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    gerer_agence gcca;
    gcca.setModal(true);
    gcca.exec();
}
