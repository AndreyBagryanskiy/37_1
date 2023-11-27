#include "./ui_myCalc.h"
#include "myCalcMainWindows.h"

int main(int argc, char *argv[]) {
    QApplication app(argc,argv);
    MyCalcMainWindow window(nullptr);
    Ui::MainWindow calc;
    calc.setupUi(&window);
    window.label = calc.label;
    window.lineResult = calc.lineResult;
    window.line1 = calc.line1;
    window.line2 = calc.line2;
    
    window.show();
    app.exec();
}
