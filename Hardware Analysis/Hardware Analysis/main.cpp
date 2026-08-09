#include "hardwareanalysis.h"
#include <QtWidgets/QApplication>
#include <QtSql/qsqldatabase.h>
#include <qsqlquery.h>

int main(int argc, char *argv[])
{    
    QApplication app(argc, argv);

    HardwareAnalysis window;
    window.show();
    return app.exec();
}

/*
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("(localdb)\\MSSQLLocalDB");
    db.setDatabaseName("Tanner");
    db.setUserName("");
    db.setPassword("");
    bool ok = db.open();

    db.isOpen();
*/