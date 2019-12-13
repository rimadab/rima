#include "notification.h"
#include<QSystemTrayIcon>
#include<QString>
notification::notification()
{
    loc="";

}
void notification::notification_ajout_agence(QString loc)
{

    QString location=loc;
    QSystemTrayIcon *notifyicon=new QSystemTrayIcon;
    notifyicon->show();

    QString s= location;
    notifyicon->showMessage("ajouter agence","un nouveau agence avec localisation: "+s+" a ete ajouter",QSystemTrayIcon::Information,15000);

}



