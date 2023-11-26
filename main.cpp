#include "./ui_myCalc.h"
#include "myCalcMainWindows.h"

int main(int argc, char *argv[]) {
    QApplication app(argc,argv);
    MyCalcMainWindow window(nullptr);
    Ui::MainWindow calc;
    calc.setupUi(&window);
    window.label = calc.label;
   
    window.show();
    app.exec();
}
