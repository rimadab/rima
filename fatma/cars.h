#ifndef CARS_H
#define CARS_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Cars; }


QT_END_NAMESPACE

class Cars : public QDialog
{
    Q_OBJECT

public:
    Cars(QWidget *parent = nullptr);
    ~Cars();



private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_lineEdit_textChanged();


    void on_ajouter_fr_clicked();
    void on_modifier_fr_clicked();
    void on_supprimer_clicked();

    void on_lineEdit_2_textChanged();

    void on_pushButton_4_clicked();

private:
    Ui::Cars *ui;

};


#endif // CARS_H
