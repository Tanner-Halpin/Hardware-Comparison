#include "hardwareanalysis.h"
#include <QtWidgets/QApplication>
#include <QtSql/qsqldatabase.h>
#include <qsqlquery.h>
#include <qdebug.h>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("(localdb)\\MSSQLLocalDB");

    db.setDatabaseName(  
        "DRIVER={ODBC Driver 18 for SQL Server};"
        "SERVER=(localdb)\\MSSQLLocalDB;"
        "DATABASE=hardwareanalysis;"
        "Trusted_Connection=yes;"
    );

    bool ok = db.open();
    if (ok)
    {
        qDebug() << "Success";
    }
    else
    {
        qDebug() << "Not a success";
    }

    HardwareAnalysis window;
    window.show();
    return app.exec();
}