#ifndef COMPTES_H
#define COMPTES_H

#include <QDialog>
#include"comptes_classe.h"
#include <QTimer>
#include <QDateTime>
#include<QString>
#include<QSqlQuery>
#include<QMessageBox>
#include <QStringList>
#include <QtSql>
#include <QDebug>
#include <QSqlError>
#include<QSqlQueryModel>
#include "statistique_c.h"
namespace Ui {
class comptes;
}

class comptes : public QDialog
{
    Q_OBJECT

public:
    explicit comptes(QWidget *parent = nullptr);
    ~comptes();

private slots:
    void on_ajouter_clicked();



    void on_Effectuer_clicked();

    void on_pushButton_modifier_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_supprimer_clicked();

    void on_lineEdit_recherche_textChanged(const QString &arg1);

    void on_pushButton_tri_clicked();

    void on_retour_clicked();

    void on_statistique_clicked();

private:
    Ui::comptes *ui;
    comptes_classe c;
    int indice;
    statistique_c *s;
};

#endif // COMPTES_H
