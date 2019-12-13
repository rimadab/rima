#pragma once
#ifndef STATISTIQUE_C_H
#define STATISTIQUE_C_H

#include <QMainWindow>


namespace Ui {
class statistique_c;
}

class statistique_c : public QMainWindow
{
    Q_OBJECT

public:
    explicit statistique_c(QWidget *parent = 0);
    ~statistique_c();




private:
    Ui::statistique_c *ui;
};

#endif // STATISTIQUE_C_H
