#ifndef FOURN_H
#define FOURN_H
#include<QSql>
#include<QSqlDatabase>
#include<QString>
#include<QSqlQueryModel>

class Fourn
{
public:
    Fourn();
    bool addFourn(QString,QString, QString,QString,QString,QString,QString);
    bool update(QString, QString,QString,QString,QString,QString,QString);
    bool Delete(QString);
    QSqlQueryModel* read();
    QSqlQueryModel* read(QString);
};

#endif // FOURN_H
