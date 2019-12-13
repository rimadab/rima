#include "commandeWindow.h"
#include "ui_commandeWindow.h"
#include "commandes.h"
#include "../../menu.h"



commandeWindow::commandeWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::commandeWindow)
{
    ui->setupUi(this);
    ui->comboBox_4->hide();
    ui->comboBox_5->hide();
    ui->comboBox_3->hide();
}

commandeWindow::~commandeWindow()
{
    delete ui;
}

void commandeWindow::on_pushButton_clicked()
{
    if (ui->comboBox->currentIndex()==0)
    {
        ui->stackedWidget->setCurrentIndex(1);
}
    if (ui->comboBox->currentIndex()==1)
    {
        ui->stackedWidget->setCurrentIndex(2);
}
    if (ui->comboBox->currentIndex()==2)
    {
        ui->stackedWidget->setCurrentIndex(3);
}
}

void commandeWindow::on_pushButton_2_clicked()
{
     ui->stackedWidget->setCurrentIndex(4);

}

void commandeWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);


}

void commandeWindow::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);

}

void commandeWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

}

void commandeWindow::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);


}

void commandeWindow::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

}

void commandeWindow::on_pushButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

}


void commandeWindow::on_pushButton_9_clicked()
{
    COMMANDES *c;
    QString v;

    if(ui->radioButton->isChecked())
    {
        v=ui->radioButton->text();

    }

    else if (ui->radioButton_2->isChecked())
 {
        v=ui->radioButton_2->text();

    }
    else if (ui->radioButton_3->isChecked())
 {
        v=ui->radioButton_3->text();

    }   else if (ui->radioButton_4->isChecked())
    {
           v=ui->radioButton_4->text();

       }   else if (ui->radioButton_5->isChecked())
    {
           v=ui->radioButton_5->text();

       }   else if (ui->radioButton_6->isChecked())
    {
           v=ui->radioButton_6->text();

       }   else if (ui->radioButton_7->isChecked())
    {
           v=ui->radioButton_7->text();

       }   else if (ui->radioButton_8->isChecked())
    {
           v=ui->radioButton_8->text();

       }

    else if(ui->radioButton_9->isChecked())
    {
        v=ui->radioButton_9->text();

    }




   if(c->ajouter_commande(ui->comboBox->currentText(),v,ui->spinBox->text(),ui->spinBox_2->text() ))

   {
    QMessageBox::information(this,tr("AJOUT COMMANDE"),tr("COMMANDE est AJOUTER avec success"));
   }

}

void commandeWindow::on_pushButton_10_clicked()
{
    COMMANDES *csupp ;

    csupp->supprimer_commande(ui->spinBox_3->text());



}

void commandeWindow::on_pushButton_12_clicked()
{
    QSqlQueryModel *model= new QSqlQueryModel();

    model->setQuery("select * from COMMANDES");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("TYPE"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("MARQUE "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("BUDGET_LIMITE"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("ID_COMMANDES"));
    ui->tableView->setModel(model);
}


void commandeWindow::on_comboBox_2_currentIndexChanged(const QString &arg1 )
{


    if(ui->comboBox_2->currentIndex()==0)
    {
        ui->comboBox_3->show();
        ui->comboBox_4->hide();
        ui->comboBox_5->hide();


    }

    if(ui->comboBox_2->currentIndex()==1)
    {
        ui->comboBox_4->show();

        ui->comboBox_5->hide();
        ui->comboBox_3->hide();

    }

    if(ui->comboBox_2->currentIndex()==2)
    {
        ui->comboBox_5->show();
        ui->comboBox_4->hide();

        ui->comboBox_3->hide();


    }




}

void commandeWindow::on_pushButton_13_clicked()
{    ui->stackedWidget->setCurrentIndex(6);

    COMMANDES cmodif;

     cmodif.COMMANDE1(ui->lineEdit->text());
    ui->spinBox_4->setValue(cmodif.Getbudget());




      if(cmodif.Gettype()=="POPcar")
    {
         if(cmodif.Getmarque()=="JAGUAR")
           {
               ui->comboBox_3->setCurrentIndex(0);
           }


          else if(cmodif.Getmarque()=="BENTLEY")
          {
              ui->comboBox_3->setCurrentIndex(1);
          }
         else if(cmodif.Getmarque()=="CADILLAC")
          {
              ui->comboBox_3->setCurrentIndex(2);
          }



          ui->comboBox_2->setCurrentIndex(0);
        ui->comboBox_3->show();

      }



    else if(cmodif.Gettype()=="Fcar")
     {
          if(cmodif.Getmarque()=="BMW")
          {
              ui->comboBox_4->setCurrentIndex(0);
          }
          else if(cmodif.Getmarque()=="MAZDA")
           {
               ui->comboBox_4->setCurrentIndex(1);
           }
          else if(cmodif.Getmarque()=="GOLF GTD")
          {
              ui->comboBox_4->setCurrentIndex(2);
          }


          ui->comboBox_2->setCurrentIndex(1);
         ui->comboBox_4->show();

     }

    else if(cmodif.Gettype()=="Xcar")
     {

          if(cmodif.Getmarque()=="MERCEDES")
          {
              ui->comboBox_5->setCurrentIndex(0);
          }
          else if(cmodif.Getmarque()=="ASTON MARTIN")
           {
               ui->comboBox_5->setCurrentIndex(1);
           }
          else if(cmodif.Getmarque()=="AUDI")
          {
              ui->comboBox_5->setCurrentIndex(2);
          }



         ui->comboBox_2->setCurrentIndex(2);
         ui->comboBox_5->show();








     }



}

void commandeWindow::on_pushButton_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);


}

void commandeWindow::on_pushButton_15_clicked()
{
        ui->stackedWidget->setCurrentIndex(5);
}

void commandeWindow::on_pushButton_14_clicked()
{

    COMMANDES *cmodif;
   QString v;
    if(ui->comboBox_2->currentIndex()==0)
    {
    v=ui->comboBox_3->currentText();
    }
    if(ui->comboBox_2->currentIndex()==1)
    {
    v=ui->comboBox_4->currentText();
    }
    if(ui->comboBox_2->currentIndex()==2)
    {
    v=ui->comboBox_5->currentText();
    }

    cmodif->modifier_commande(ui->comboBox_2->currentText(),v,ui->spinBox_4->text(),ui->lineEdit->text());

}

void commandeWindow::on_pushButton_16_clicked()
{
    COMMANDES C ;
    C.pdf("C:/Users/Youssef/Desktop/bon de commande.pdf",ui->lineEdit->text());
}

void commandeWindow::on_pushButton_17_clicked()
{
    COMMANDES c;
      //c.commandestrie(ui->tableView);
}



void commandeWindow::on_pushButton_18_clicked()
{
    this->hide();
    menu m ;
    m.exec();
}
