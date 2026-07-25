#include "hardwareanalysis.h"
#include <QtWidgets/QApplication>
#include <qsqldatabase.h>
#include <qsqlquery.h>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QSqlDatabase db = QSqlDatabase::addDatabase("PSQL");
    db.setHostName("localhost");
    db.setDatabaseName("Hardware_Analysis_DB");
    db.setUserName("postgres");
    db.setPassword("cPlusP025!");
    bool ok = db.open();

    HardwareAnalysis window;
    window.show();
    return app.exec();
}
