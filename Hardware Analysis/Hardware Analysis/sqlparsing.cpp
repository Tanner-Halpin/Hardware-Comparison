#include "sqlparsing.h"
#include "loadbuildlist.h"

int SQLParsing::testQuery()
{
	QSqlQuery query;
	query.exec("SELECT Graphics_ID FROM Computer_GPU");

	if (query.next())
	{
		return query.value(0).toInt();
	}
	else 
	{
		return 4;
	}
}
