#ifndef CAR_H
#define CAR_H
#include<QSql>
#include<QSqlDatabase>
#include<QString>
#include<QSqlQueryModel>

class car
{
public:
    car();
    bool addcar(QString, QString,QString);
    bool update(QString, QString,QString,QString,QString);
    bool Delete(QString);
    QSqlQueryModel* read();
    QSqlQueryModel* read(QString);
};

#endif // CAR_H
