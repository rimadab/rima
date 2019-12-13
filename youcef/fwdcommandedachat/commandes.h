#ifndef COMMANDES_H
#define COMMANDES_H

#include <QMainWindow>
#include <QObject>
#include <QSharedDataPointer>
#include <QWidget>
#include <QMainWindow>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QTableView>
class COMMANDESData;

class COMMANDES
{
public:
    COMMANDES();
    COMMANDES(const COMMANDES &);
    COMMANDES &operator=(const COMMANDES &);
    ~COMMANDES();
    QString Gettype(){return type;}
     void Settype(QString val){type=val;}
    QString Getmarque(){return marque;}
    int Getbudget(){return budget;}

    void SetMarque(QString val){marque=val;}
    void Setbudget(int val){budget=val;}
void  COMMANDE1(QString ID_COMMANDES);
    bool ajouter_commande(QString TYPE,QString MARQUE,QString BUDGET_LIMITE,QString ID_COMMANDES);
    bool modifier_commande(QString TYPE,QString MARQUE,QString BUDGET_LIMITE,QString ID_COMMANDES);
bool supprimer_commande(QString ID_COMMANDES);
bool pdf(QString chemin,QString ID_COMMANDES );
void commandestrie(QTableView * tab);



private:
 QSharedDataPointer<COMMANDESData> data;
 QString type,marque;
 QString ID_COMMANDES;
    int budget;

private:

};

#endif // COMMANDES_H
