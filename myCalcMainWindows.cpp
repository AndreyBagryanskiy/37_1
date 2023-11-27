#include "myCalcMainWindows.h"

MyCalcMainWindow::MyCalcMainWindow(QWidget* parent = nullptr): QMainWindow(parent){
    line1->setValidator(doubleValidator);
    line2->setValidator(doubleValidator);
};


void MyCalcMainWindow::addBut(){
    label->setText("+");
    result = a + b;
    lineResult->setText(QString::number(result));
};
void MyCalcMainWindow::subBut(){
    label->setText(" -");
    result = a - b;
    lineResult->setText(QString::number(result));
};
void MyCalcMainWindow::multBut(){
    label->setText(" x");
    result = a * b;
    lineResult->setText(QString::number(result));
};
void MyCalcMainWindow::divBut(){label->setText(" /");};
   
void MyCalcMainWindow::line_1(){
    a = line1->text().toDouble();
    lineResult->setText(QString::number(result));
};
void MyCalcMainWindow::line_2(){
    b = line2->text().toDouble();
    lineResult->setText(QString::number(result));
};