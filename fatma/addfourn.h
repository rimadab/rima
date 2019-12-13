#ifndef ADDFOURN_H
#define ADDFOURN_H

#include <QWidget>
#include <QTableView>

namespace Ui {
class addFourn;
}

class addFourn : public QWidget
{
    Q_OBJECT

public:
    explicit addFourn(QTableView*,QWidget *parent = nullptr);
    ~addFourn();

private slots:
    void on_ajouter_clicked();

private:
    Ui::addFourn *ui;
    QTableView* Table;
};

#endif // ADDFOURN_H
