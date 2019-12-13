#ifndef UPDATEFOURN_H
#define UPDATEFOURN_H

#include <QWidget>
#include <QTableView>

namespace Ui {
class updatefourn;
}

class updatefourn : public QWidget
{
    Q_OBJECT

public:
    explicit updatefourn(QString,QTableView*,QWidget *parent = nullptr);
    ~updatefourn();

private slots:
    void on_modifier_clicked();

private:
    Ui::updatefourn *ui;
    QString row;
    QTableView* Table;
};

#endif // UPDATEFOURN_H
