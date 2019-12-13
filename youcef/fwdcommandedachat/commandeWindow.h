#ifndef commandeWindow_H
#define commandeWindow_H

#include <QDialog>

namespace Ui {
class commandeWindow;
}

class commandeWindow : public QDialog
{
    Q_OBJECT

public:
    explicit commandeWindow(QWidget *parent = nullptr);
    ~commandeWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_12_clicked();

    void on_comboBox_2_currentIndexChanged(const QString &arg1);

    void on_pushButton_13_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

private:
    Ui::commandeWindow *ui;
};

#endif // commandeWindow_H
