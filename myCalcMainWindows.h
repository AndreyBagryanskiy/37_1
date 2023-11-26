#include <QMainWindow>
#include <QtWidgets/QLabel>

class MyCalcMainWindow : public QMainWindow{
    Q_OBJECT
public:

    QLabel *label = nullptr;
    MyCalcMainWindow(QWidget* parent = nullptr): QMainWindow(parent){};
public slots:
   void addBut(){label->setText("+");};
   void subBut(){label->setText(" -");};
   void multBut(){label->setText(" x");};
   void divBut(){label->setText(" /");};

};