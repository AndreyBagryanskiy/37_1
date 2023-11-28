#include "myCalcMainWindows.h"

 MyCalcMainWindow::MyCalcMainWindow(QWidget *parent) : QMainWindow(parent){};
 

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
void MyCalcMainWindow::divBut(){
    label->setText(" /");
    if(b == 0) lineResult->setText("ERROR!");
    else{
        result = a / b;
        lineResult->setText(QString::number(result));
    }
};
   
void MyCalcMainWindow::line_1(){
    a = line1->text().toDouble();
    label->setText(" ");
    lineResult->setText("");
    
};
void MyCalcMainWindow::line_2(){
    b = line2->text().toDouble();
    label->setText(" ");
    lineResult->setText("");
};