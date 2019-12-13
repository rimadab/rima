#include "notification_emp.h"
#include <QSystemTrayIcon>
#include<QString>
notification_emp::notification_emp()
{
num=0;
}

void notification_emp::notification_emp_sup_empl(QString id)
{

    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;

    notifyIcon->setIcon(QIcon("C:/Users/iyadh/Desktop/notif"));
    QString s = id;
    //notifyIcon->setVisible(1);
    notifyIcon->show();
    notifyIcon->showMessage("News","Un employer a ete supprimer de la base !",QSystemTrayIcon::Information,15000);
//num++;
}

void notification_emp::notification_emp_sup_conge(QString id)
{

    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;

    notifyIcon->setIcon(QIcon("C:/Users/iyadh/Desktop/notif"));
    QString s = id;
    //notifyIcon->setVisible(1);
    notifyIcon->show();
    notifyIcon->showMessage("News","Un conge a ete supprimer de la base !",QSystemTrayIcon::Information,15000);
//num++;
}


void notification_emp::notification_emp_Ouverture(QString id)
{

    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;

    notifyIcon->setIcon(QIcon("C:/Users/iyadh/Desktop/notif"));
    QString s = id;
    //notifyIcon->setVisible(1);
    notifyIcon->show();
    notifyIcon->showMessage("Gestion d'employer ","Nouvelle instance ouverte",QSystemTrayIcon::Information,15000);
//num++;
}
