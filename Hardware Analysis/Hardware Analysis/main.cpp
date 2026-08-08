#include "hardwareanalysis.h"
#include <QtWidgets/QApplication>
#include <QtSql/qsqldatabase.h>

int main(int argc, char *argv[])
{    
    QApplication app(argc, argv);

    HardwareAnalysis window;
    window.show();
    return app.exec();
}

/*
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("bigblue");
    db.setDatabaseName("flightdb");
    db.setUserName("acarlson");
    db.setPassword("1uTbSbAs");
    bool ok = db.open();
*/