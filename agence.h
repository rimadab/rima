#ifndef AGENCE_H
#define AGENCE_H

#include <QDialog>
#include"agence_classe.h"
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


namespace Ui {
class Agence;
}

class Agence : public QDialog
{
    Q_OBJECT

public:
    explicit Agence(QWidget *parent = nullptr);
    ~Agence();

private slots:
    void on_pushButton_ajouter_clicked();

    void on_tableView_agence_clicked(const QModelIndex &index);

    void on_pushButton_2_clicked();

    void on_retour_clicked();

private:
    Ui::Agence *ui;
    agence_classe a;
    int indice;

};

#endif // AGENCE_H
