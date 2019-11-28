#ifndef GERER_COMPTE_H
#define GERER_COMPTE_H

#include <QDialog>
#include "compte.h"
namespace Ui {
class gerer_compte;
}

class gerer_compte : public QDialog
{
    Q_OBJECT

public:
    explicit gerer_compte(QWidget *parent = nullptr);
    ~gerer_compte();

private slots:
    void on_pushButton_clicked(); //add

    void on_pushButton_3_clicked(); //supprimer

    void on_pushButton_2_clicked(); //modifier

    void on_pushButton_5_clicked(); //search

 //   void on_comboBox_activated(const QString &arg1);

private:
    Ui::gerer_compte *ui;
    compte tmpcompte;
};

#endif // GERER_compte_H
