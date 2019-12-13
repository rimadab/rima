#include "commandes.h"
#include<QSqlQuery>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QFileDialog>
#include <QPrinter>
#include <QApplication>
#include <QTextStream>
#include <QInputDialog>
#include <QIODevice>
#include <QFile>
#include<QPdfWriter>
#include<QPainter>
#include<QDesktopServices>
#include <QDate>

class COMMANDESData : public QSharedData
{
public:

};


bool COMMANDES::ajouter_commande(QString TYPE,QString MARQUE,QString BUDGET_LIMITE,QString ID_COMMANDES)
{
    QSqlQuery query;
        query.prepare("INSERT INTO COMMANDES (TYPE,MARQUE,BUDGET_LIMITE,ID_COMMANDES) "
                      "VALUES (?, ?, ?,?)");
        query.addBindValue(TYPE);
        query.addBindValue(MARQUE);
        query.addBindValue(BUDGET_LIMITE);
        query.addBindValue(ID_COMMANDES);




        return query.exec();
}





bool COMMANDES::modifier_commande(QString TYPE, QString MARQUE, QString BUDGET_LIMITE, QString ID_COMMANDES)
{
    QSqlQuery query;
        query.prepare("update COMMANDES SET ID_COMMANDES=? ,TYPE=?,MARQUE=?,BUDGET_LIMITE=? where ID_COMMANDES=?");
        query.addBindValue(ID_COMMANDES);
          query.addBindValue(TYPE);
           query.addBindValue(MARQUE);
           query.addBindValue(BUDGET_LIMITE);
           query.addBindValue(ID_COMMANDES);

        query.exec();

       if(query.exec())
          {QMessageBox::information(NULL,"modification","modification terminee");}
            else
           QMessageBox::information(NULL,"modification","ERREUR");
}




bool COMMANDES::supprimer_commande(QString ID_COMMANDES)
{
    QSqlQuery query;
                    query.prepare("DELETE FROM COMMANDES WHERE ID_COMMANDES =?");
                   query.addBindValue(ID_COMMANDES);
                    if(query.exec())
                         { QMessageBox::information(NULL,"suppression","Supprimer avec succees");}
                           else
                               QMessageBox::information(NULL,"suppression","Erreur");

                    return  query.exec();
}






bool COMMANDES::pdf(QString chemin,QString ID_COMMANDES )
{

 QPdfWriter pdf(chemin);

         pdf.setPageSize(QPagedPaintDevice::A4);
         pdf.setPageMargins(QMargins(30, 30, 30, 30));

         QSqlQuery qry;
         qry.exec("select * from COMMANDES where ID_COMMANDES = '"+ID_COMMANDES+"'   ");

         if(qry.next())
         {
         type=qry.value(0).toString();
         marque=qry.value(1).toString();
        budget= qry.value(2).toInt();
       ID_COMMANDES =qry.value(3).toString();


         }

         QPainter painter(&pdf);
         QRect r = painter.viewport();
         painter.setPen(Qt::black);
         painter.setFont(QFont("Times", 25));

         painter.drawImage(QRect(0, 30, 1500, 1061),QImage("C:/Users/Youssef/Desktop/1.png"));

         painter.setPen(Qt::black);
         painter.setFont(QFont("Times", 10));
         QString citydate = "Tunis, ";
         QDate date = QDate::currentDate();
         citydate += date.toString("dd.MM.yyyy");
         painter.drawText(r, Qt::AlignRight, citydate);

         painter.setPen(Qt::black);
         painter.setFont(QFont("Times", 20));

            painter.drawText(2500,4950,type);
            painter.drawText(3000,5400,marque);
            painter.drawText(3000,5850,qry.value(2).toString() );
            painter.drawText(4200,6300,ID_COMMANDES);


         QString c="TYPE:",n="MARQUE:",p="BUDGET:",e="ID_COMMANDES:";
         painter.setPen(Qt::blue);

            painter.drawText(1300,4950,c);
            painter.drawText(1300,5400,n);
            painter.drawText(1300,5850,p);
            painter.drawText(1300,6300,e);



         painter.end();

         QDesktopServices::openUrl(QUrl::fromLocalFile(chemin));
         return true;
}









void  COMMANDES::COMMANDE1(QString ID_COMMANDES)
{
    QSqlQuery q;
    q.prepare("select * from COMMANDES where ID_COMMANDES='"+ID_COMMANDES+"'  ")  ;

    if(q.exec()){
    while (q.next()) {
      type= q.value(0).toString();
       marque = q.value(1).toString();
         budget = q.value(2).toInt();
         this->ID_COMMANDES= q.value(3).toString();



}}
}





COMMANDES::COMMANDES() : data(new COMMANDESData)
{

}

COMMANDES::COMMANDES(const COMMANDES &rhs) : data(rhs.data)
{

}

COMMANDES &COMMANDES::operator=(const COMMANDES &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

COMMANDES::~COMMANDES()
{

}
