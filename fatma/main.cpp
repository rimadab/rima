#include "cars.h"
#include"database.h"
#include <QApplication>
#include<QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Database db;
    if(db.createconnect())
        QMessageBox::warning(NULL,"Warning","DATABASE OPENED");
    else
        QMessageBox::warning(NULL,"Warning","DATABASE NOT OPENED");
    Cars w;
    w.show();
    return a.exec();
}
