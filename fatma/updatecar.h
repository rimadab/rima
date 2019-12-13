#ifndef UPDATECAR_H
#define UPDATECAR_H

#include <QWidget>
#include <QTableView>

namespace Ui {
class updatecar;
}

class updatecar : public QWidget
{
    Q_OBJECT

public:
    explicit updatecar(int rw,QTableView* Tbs,QWidget *parent = nullptr);
    ~updatecar();
    QTableView* Tabs;

private slots:
    void on_done_clicked();

private:
    Ui::updatecar *ui;
    int row;
};

#endif // UPDATECAR_H
