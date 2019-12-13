#ifndef employeWindow_H
#define employeWindow_H
#include "employer.h"
#include "conge.h"
#include <QDialog>
#include <QMessageBox>
#include "qcustomplot.h"
#include "smtp.h"
#include <QtWidgets/QMessageBox>
#include "notification_emp.h"
#include <QMediaPlayer>



QT_BEGIN_NAMESPACE
namespace Ui { class employeWindow; }
QT_END_NAMESPACE

class employeWindow : public QDialog
{
    Q_OBJECT

public:
    employeWindow(QWidget *parent = nullptr);
    ~employeWindow();
    void refresh();
private slots:
    void sendMail();
    void mailSent(QString);

private slots:
    void on_ajouter_clicked();



    void on_supprimer_clicked();

    void on_modifier_2_clicked();

    void on_comboBox_3_activated(const QString &arg1);

    void on_comboBox_5_activated(const QString &arg1);

    void on_lineEdit_19_textChanged(const QString &arg1);

    void on_checkBox_2_stateChanged(int arg1);


    void on_ajouter_2_clicked();

    void on_supprimer_2_clicked();

    void on_comboBox_6_activated(const QString &arg1);


    void on_modifier_3_clicked();

    void on_comboBox_4_activated(const QString &arg1);

    void on_lineEdit_20_textChanged(const QString &arg1);

    void on_checkBox_3_stateChanged(int arg1);

    //void on_tabWidget_2_currentChanged(int index);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_verticalSlider_sliderMoved(int position);

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::employeWindow *ui;
    employer tmpemployer;
    conge tmpconge;
    int etat=0;
    QString valeur;
    QMediaPlayer *music =new QMediaPlayer();
};
#endif // employeWindow_H
