#ifndef CONNECTION_H
#define CONNECTION_H

#include <QtSql>
#include <QDebug>
#include <QFileInfo>

class connection
{
public:
    connection();
    QSqlDatabase mydb;
    void connClose();
    bool connOpen();



};

#endif // CONNECTION_H
