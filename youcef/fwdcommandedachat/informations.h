#ifndef INFORMATIONS_H
#define INFORMATIONS_H

#include <QMainWindow>
#include <QObject>

#include <QSharedDataPointer>
#include <QWidget>

class informationsData;

class informations
{
public:
    informations();
    informations(QString,QString,int);
    informations(const informations &);
    informations &operator=(const informations &);
    ~informations();
    QString Gettype(){return type;}
    QString Getmarque(){return marque;}
    int Getbudget(){return budget;}
    void Settype(QString val){type=val;}
    void SetMarque(QString val){marque=val;}
    void Setbudget(int val){budget=val;}

private:
    QSharedDataPointer<informationsData> data;
    QString type,marque;
    int budget;
};

#endif // INFORMATIONS_H
