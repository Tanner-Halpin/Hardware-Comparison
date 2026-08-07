#include "hardwareanalysis.h"
#include <QtWidgets/QApplication>
#include "QtSql/qsqldatabase.h"

int main(int argc, char *argv[])
{    
    QApplication app(argc, argv);
    HardwareAnalysis window;
    window.show();
    return app.exec();
}