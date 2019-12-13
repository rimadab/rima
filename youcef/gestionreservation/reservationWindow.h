#ifndef reservationWindow_H
#define reservationWindow_H

#include <QDialog>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QTableView>
QT_BEGIN_NAMESPACE
namespace Ui { class reservationWindow; }
QT_END_NAMESPACE

class reservationWindow : public QDialog
{
    Q_OBJECT

public:
    reservationWindow(QWidget *parent = nullptr);
    ~reservationWindow();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_comboBox_2_currentIndexChanged(const QString &arg1);

    void on_pushButton_6_clicked();

    void on_dateEdit_2_userDateChanged(const QDate &date);

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::reservationWindow *ui;
};
#endif // reservationWindow_H
