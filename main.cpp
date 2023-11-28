#include "myCalcMainWindows.h"
#include <QDoubleValidator>

int main(int argc, char *argv[]) {
    QApplication app(argc,argv);
    MyCalcMainWindow window(nullptr);
    Ui::MainWindow calc;
    calc.setupUi(&window);
    window.label = calc.label;
    window.lineResult = calc.lineResult;
    window.line1 = calc.line1;
    window.line2 = calc.line2;
    QDoubleValidator validator;
    validator.setLocale(QLocale::English);
    validator.setNotation(QDoubleValidator::StandardNotation);
    window.line1->setValidator(&validator);
    window.line2->setValidator(&validator);
    
    window.show();
    app.exec();
}
