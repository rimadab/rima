#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("login");
    connection connection_object ;
    if(connection_object.connOpen())
    {
        qDebug() << "connected";
        ui->l_titre->setText("connected");
    }
    else
    {
         ui->l_titre->setText("NOT connected");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    QSqlQuery qry,qry1;
    username=ui->username->text();
    password=ui->password->text();

    qry.prepare("select * from comptes where mail=? and  password=? ");
    qry.addBindValue(username);
    qry.addBindValue(password);


    if(qry.exec())
    {



        int count=0;
        while(qry.next())
        {
            count++;
        }
        if(count==1)
        {
            qry1.prepare("select grade from comptes where mail=? and  password=? ");
            qry1.addBindValue(username);
            qry1.addBindValue(password);
            if(qry1.exec())
            {
                while(qry1.next())
                {
                    qDebug()<<qry.first();
                    QString grade=qry1.value(0).toString();
                    qDebug()<<grade;
                    if(grade=="comptes")
                    {
                        this->hide();
                        menu menuob;
                        menuob.exec();
                    }
                    else
                    {
                        QMessageBox::information(this,tr("Information"),tr("cannot find"));
                    }
                }

            }

        }
        if(count>1)
        {
            QMessageBox::information(this,tr("Information"),tr("duplicate username and password"));
        }
        if(count<1)
        {
            QMessageBox::information(this,tr("Information"),tr("username or password is not correct"));

        }
    }
}
