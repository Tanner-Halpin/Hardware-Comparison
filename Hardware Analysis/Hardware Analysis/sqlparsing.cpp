#include "sqlparsing.h"
#include "loadbuildlist.h"

// The Loop below, along with the QSqlQuery instances grab the information directly from the database of the selected CPU

void SQLParsing::CPU_Specs(PC* p)
{
	QSqlQuery query;

	QSqlQuery q;
	q.exec("SELECT Processor_Name FROM Computer_Processor WHERE Processor_Name = '" + QString::fromStdString(p->CPU->fullname) + "'");

	QSqlQuery a;

	while (q.next())
	{
		if (p->CPU->fullname == q.value(0).toString())
		{
			for (int i{ 0 }; i < 12; ++i)
			{
				a.prepare("SELECT COL_NAME(OBJECT_ID('Computer_Processor'),:index)");
				a.bindValue(":index", i + 2);
				
				a.exec();
				
				while (a.next())
				{
					QString a_value = a.value(0).toString();
					query.exec("SELECT " + a_value + " FROM Computer_Processor WHERE Processor_NAME = '" + QString::fromStdString(p->CPU->fullname) + "'");

					if (query.next())
					{
						QString term = query.value(0).toString();
						QString name = a.value(0).toString();

						p->CPU->attributes.push_back(p->createAttribute(name.toStdString(), term.toStdString()));
					}
				}
			}
		}
	}
}