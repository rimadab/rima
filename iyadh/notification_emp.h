#ifndef notification_emp_H
#define notification_emp_H
#include <QSystemTrayIcon>
#include<QString>
class notification_emp
{
private:
    int num;
public:
    notification_emp();
    void notification_emp_sup_empl(QString);
    void notification_emp_Ouverture(QString id);
    void notification_emp_sup_conge(QString id);
};

#endif // notification_emp_H
