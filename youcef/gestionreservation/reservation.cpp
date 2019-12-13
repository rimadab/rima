#include "reservation.h"
#include <QDebug>
#include <QMessageBox>
#include <QSqlQueryModel>

class reservationData : public QSharedData
{
public:

};

reservation::reservation() : data(new reservationData)
{

}

reservation::reservation(const reservation &rhs) : data(rhs.data)
{

}





reservation &reservation::operator=(const reservation &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

reservation::~reservation()
{

}

bool reservation::voiturerecherche(QString TYPE1,QString MARQUE1,QDate d)
{
    QSqlQuery q;
    QString DISPO1 ="true";
    QDate date_fin;
    int somme_voiture=0;
    q.prepare("select * from VOITURE where TYPE='"+TYPE1+"' AND MARQUE='"+MARQUE1+"'   ")  ;

    QString MATRICULE,TYPE,MARQUE,DISPO;
bool i = false;

    if(q.exec()){
    while (q.next() and i==false ) {
     MATRICULE = q.value(0).toString();
      TYPE= q.value(1).toString();
         MARQUE = q.value(2).toString();
         DISPO= q.value(3).toString();
         somme_voiture++;
qDebug() << somme_voiture ;
         //qDebug() << MATRICULE ;

         QSqlQuery q1;
         q1.prepare("select * from RESERVATION where VOITURERESERVER='"+MATRICULE+"'  ")  ;

         if(q1.exec()){
while (q1.next()  ) {
            this->CIN= q1.value(0).toString();
             this->NOM= q1.value(1).toString();
                     this->PRENOM= q1.value(2).toString();
                     this->NBRESERVATION= q1.value(3).toString();
                     this->DATE_RESERVATION= q1.value(4).toDate();
                     this->DATE_FIN= q1.value(5).toDate();
                     this->VOITURERESERVER= q1.value(6).toString();
           if(this->DATE_FIN<d)
           {
               somme_voiture--;
           }
     qDebug() << somme_voiture ;


}}





}}

DISPO="false";
    QSqlQuery query;
        query.prepare("update VOITURE SET MATRICULE=? ,TYPE=?,MARQUE=?,DISPO=? where MATRICULE=?");
        query.addBindValue(MATRICULE);
          query.addBindValue(TYPE);
           query.addBindValue(MARQUE);
           query.addBindValue(DISPO);
           query.addBindValue(MATRICULE);

        query.exec();

      //qDebug () << MATRICULE;
     // qDebug () << DISPO;




return i ;


}

bool reservation::recherchedatedjo(QDate d)

{

  QSqlQueryModel *model =new QSqlQueryModel();
  model->setQuery("select * from RESERVATION where DATE_RESERVATION >= '"+d.toString("dd/MM/yy") +"' ");

  // q.prepare("select * from VOITURE where DATE_RESERVATION='"+CIN+"'  ")  ;


qDebug()<<  model->rowCount();





    return true;
}


QSqlQueryModel * reservation::affichervoituredispo(QString TYPE1 ,QString MARQUE1,QDate d)
{
    QSqlQueryModel *model= new QSqlQueryModel();

    model->setQuery("select * from VOITURE INNER JOIN RESERVATION ON VOITURE.MATRICULE=RESERVATION.VOITURERESERVER where VOITURE.TYPE='"+TYPE1+"' AND VOITURE.MARQUE='"+MARQUE1+"' AND RESERVATION.DATE_FIN < '"+d.toString("dd/MM/yy") +"'    ");


  return model ;

   // ui->tableView->setModel(model);
}



bool reservation::verifierdisponibiliter(QString TYPE1, QString MARQUE1, QDate d, int i)
{

    QSqlQueryModel *model= new QSqlQueryModel();
    model->setQuery("select * from VOITURE INNER JOIN RESERVATION ON VOITURE.MATRICULE=RESERVATION.VOITURERESERVER where VOITURE.TYPE='"+TYPE1+"' AND VOITURE.MARQUE='"+MARQUE1+"' AND RESERVATION.DATE_FIN < '"+d.toString("dd/MM/yy") +"'    ");


    int a =model->rowCount();
    QString z = QString::number(a);
    if(model->rowCount()<i)
    {
         QMessageBox::information(NULL,"suppression","il y a que "+z+" voiture disponible ");
         return false;
    }
    if(model->rowCount()>= i)
    {
         QMessageBox::information(NULL,"suppression"," le nombre de voiture est disponible ");
         return true ;
    }



}


QSqlQueryModel *   reservation:: affichervoiturecritere(QString TYPE1, QString MARQUE1, QDate d)
{
    {QSqlQueryModel * model= new QSqlQueryModel();

        model->setQuery("select VOITURE.MATRICULE from VOITURE INNER JOIN RESERVATION ON VOITURE.MATRICULE=RESERVATION.VOITURERESERVER OR  RESERVATION.VOITURERESERVER IS NULL  where VOITURE.TYPE='"+TYPE1+"' AND VOITURE.MARQUE='"+MARQUE1+"' AND RESERVATION.DATE_FIN < '"+d.toString("dd/MM/yy") + "'    ");

        return model;
    }
}

bool reservation::ajouter_reservation(QString CIN,QString NOM,QString PRENOM,QDate DATE_RESERVATION,QDate DATE_FIN,QString VOITURERESERVER)
{
    QSqlQuery query;
        query.prepare("INSERT INTO RESERVATION (CIN,NOM,PRENOM,DATE_RESERVATION,DATE_FIN,VOITURERESERVER) "
                      "VALUES (?, ?, ?,?, ?,?)");
        query.addBindValue(CIN);
        query.addBindValue(NOM);
        query.addBindValue(PRENOM);
        query.addBindValue(DATE_RESERVATION);
        query.addBindValue(DATE_FIN);
        query.addBindValue(VOITURERESERVER);


        return query.exec();
}

bool reservation::modifier_reservation(QString CIN, QString NOM, QString PRENOM, QDate DATE_RESERVATION,QDate DATE_FIN,QString VOITURERESERVER)
{
    QSqlQuery query;
        query.prepare("update RESERVATION SET CIN=? ,NOM=?,PRENOM=?,DATE_RESERVATION=?,DATE_FIN=?,VOITURERESERVER=? where  VOITURERESERVER=?");
        query.addBindValue(CIN);
          query.addBindValue(NOM);
           query.addBindValue(PRENOM);
           query.addBindValue(DATE_RESERVATION);
           query.addBindValue(DATE_FIN);
           query.addBindValue(VOITURERESERVER);
           query.addBindValue(VOITURERESERVER);


        query.exec();

       if(query.exec())
          {QMessageBox::information(NULL,"modification","modification terminee");}
            else
           QMessageBox::information(NULL,"modification","ERREUR");
}









bool reservation::supprimer_reservation(QString ID_COMMANDES)
{
    QSqlQuery query;
                    query.prepare("DELETE FROM reservation WHERE VOITURERESERVER =?");
                   query.addBindValue(ID_COMMANDES);
                    if(query.exec())
                         { QMessageBox::information(NULL,"suppression","Supprimer avec succees");}
                           else
                               QMessageBox::information(NULL,"suppression","Erreur");

                    return  query.exec();
}





QSqlQueryModel * reservation::afficher()
{
   QSqlQueryModel *model = new QSqlQueryModel();
   model->setQuery("select * from RESERVATION");
   return model;
}




bool reservation::modifier_reservation1(QString CIN,QDate DATE_FIN,QString VOITURERESERVER)
{
    QSqlQuery query;
        query.prepare("update RESERVATION SET DATE_FIN=? where  VOITURERESERVER=? AND DATE_FIN < '"+DATE_FIN.toString("dd/MM/yy") +"'   ");

           query.addBindValue(DATE_FIN);
           query.addBindValue(VOITURERESERVER);


        query.exec();

       if(query.exec())
          {QMessageBox::information(NULL,"modification","modification terminee");}
            else
           QMessageBox::information(NULL,"modification","ERREUR");
}


bool reservation::init_reservation(QString matricule)
{
    QSqlQuery query;
        query.prepare("INSERT INTO RESERVATION (CIN,NOM,PRENOM,DATE_RESERVATION,DATE_FIN,VOITURERESERVER) "
                      "VALUES (?, ?, ?,?, ?,?)");
        query.addBindValue("");
        query.addBindValue("");
        query.addBindValue("");
        query.addBindValue(QDate::currentDate());
        query.addBindValue(QDate::currentDate());
        query.addBindValue(matricule);


        return query.exec();
}



