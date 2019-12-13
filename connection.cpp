#include "connection.h"


connection::connection()
{

}

void connection:: connClose()
{
    mydb.close();
    mydb.removeDatabase(QSqlDatabase::defaultConnection);
}

bool connection::connOpen()
{

    mydb = QSqlDatabase::addDatabase("QODBC");
    mydb.setDatabaseName("Source_Projet2A");
    mydb.setUserName("rima1");
    mydb.setPassword("rima123");
    if(mydb.open())
    {
        qDebug() << "connected";

        return true ;
    }
    else
    {
         qDebug()<<"NOT connected";
         return false ;
    }
}
