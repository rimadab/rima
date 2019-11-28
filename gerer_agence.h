#ifndef GERER_agence_H
#define GERER_agence_H

#include <QDialog>
#include "agence.h"
namespace Ui {
class gerer_agence;
}

class gerer_agence : public QDialog
{
    Q_OBJECT

public:
    explicit gerer_agence(QWidget *parent = nullptr);
    ~gerer_agence();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::gerer_agence *ui;
    agence tmpagence;
};

#endif // GERER_AGENCE_H
