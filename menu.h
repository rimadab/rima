#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include "comptes.h"
#include "agence.h"
#include "reclamationwindow.h"
#include "fatma/cars.h"
#include "khalil/ClientWindow.h"
#include "iyadh/employeWindow.h"
#include "youcef/gestionreservation/reservationWindow.h"
#include "youcef/fwdcommandedachat/commandeWindow.h"

namespace Ui {
class menu;
}

class menu : public QDialog
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = nullptr);
    ~menu();

private slots:

    void on_comptes_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();


private:
    Ui::menu *ui;
};

#endif // MENU_H
