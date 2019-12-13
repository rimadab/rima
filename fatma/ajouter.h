#ifndef AJOUTER_H
#define AJOUTER_H

#include <QWidget>
#include <QTableView>

namespace Ui {
class ajouter;
}
class ajouter : public QWidget
{
    Q_OBJECT

public:
    explicit ajouter(QTableView* Tbs,QWidget *parent = nullptr);
    ~ajouter();
    QTableView* Tabs;
 private slots:
    void on_ajouter_clicked();

 private:
    Ui::ajouter *ui;
};

#endif // AJOUTER_H
