#include "hardwareanalysis.h"
#include <QtWidgets/QApplication>
#include <QtSql/qsqldatabase.h>
#include <qsqlquery.h>

int main(int argc, char *argv[])
{    
    QApplication app(argc, argv);

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("(localdb)\\MSSQLLocalDB");
    db.setDatabaseName("Tanner");

    bool ok = db.open();

    db.isOpen();

    HardwareAnalysis window;
    window.show();
    return app.exec();
}