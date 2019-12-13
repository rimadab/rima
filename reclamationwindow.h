#ifndef reclamationwindow_H
#define reclamationwindow_H
#include"reclamation.h"
#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class reclamationwindow; }
QT_END_NAMESPACE

class reclamationwindow : public QDialog
{
    Q_OBJECT

public:
    reclamationwindow(QWidget *parent = nullptr);
    ~reclamationwindow();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_resolu_clicked();

    void on_pushButton_clicked();

private:
    Ui::reclamationwindow *ui;
    reclamation tmpRECLAMATION;
};
#endif // reclamationwindow_H
