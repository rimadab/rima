#ifndef ClientWindow_H
#define ClientWindow_H

#include <QDialog>
#include"client.h"
#include "carte.h"
namespace Ui {
class ClientWindow;
}

class ClientWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ClientWindow(QWidget *parent = nullptr);
    ~ClientWindow();

private slots:

    void on_pushButton_ajo_clicked();

    void on_pushButton_sup_clicked();


    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();


    void on_lineEdit_7_textChanged();

    void on_pushButton_4_clicked();

private:
    Ui::ClientWindow *ui;
    Client tempclient,tabrech;
    carte tmpc;
};

#endif // ClientWindow_H
