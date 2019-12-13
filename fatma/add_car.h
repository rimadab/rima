#ifndef ADD_CAR_H
#define ADD_CAR_H

#include <QWidget>
#include <QTableView>

namespace Ui {
class Add_Car;
}

class Add_Car : public QWidget
{
    Q_OBJECT

public:
    explicit Add_Car(QTableView* Tbs,QWidget *parent = nullptr);
    ~Add_Car();
    QTableView* Tabs;

private slots:
    void on_ajouter_clicked();

private:
    Ui::Add_Car *ui;
};

#endif // ADD_CAR_H
