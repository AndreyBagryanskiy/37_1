#pragma once
#include "./ui_myCalc.h"
#include <QMainWindow>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

class MyCalcMainWindow : public QMainWindow{
    Q_OBJECT
public:

    QLabel *label = nullptr;
    QLineEdit *lineResult = nullptr;
    QLineEdit *line1 = nullptr;
    QLineEdit *line2 = nullptr;

    MyCalcMainWindow(QWidget *parent = nullptr);

public slots:
   void addBut();
   void subBut();
   void multBut();
   void divBut();
   void line_1();
   void line_2();
private:
    double a{0.00}, b{0.00}, result{0.00};
};

