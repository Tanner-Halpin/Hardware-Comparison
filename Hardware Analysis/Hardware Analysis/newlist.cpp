#include "newlist.h"
#include "build.h"
#include "newlymadelist.h"
#include "hardwareanalysis.h"
#include <sstream>

// SQL test to grab information from the Database. The function below autofills with the grabbed information

QVector<QString> NewList::sql_parse() 
{
	QSqlQuery query;
	query.exec("SELECT Processor_Name FROM Computer_Processor"); 

	QVector<QString> names;
	while (query.next())
	{
		QString name = query.value(0).toString();
		names.push_back(name);
	}
	return names;
}


NewList::NewList(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.cpuInput->setFocus(); 

	// Autofill completion for when user enters in a component: 

	QCompleter* list = new QCompleter(sql_parse(), this);
	list->setCaseSensitivity(Qt::CaseInsensitive);

	ui.cpuInput->setCompleter(list);
}


NewList::~NewList()
{
}

void NewList::set_name() // Setting the name of the new Computer Build
{
	QString m_name = ui.lineEdit->text();

	std::stringstream ss;
	ss << m_name.toStdString();

	b.get_buildRoster()[b.get_buildRoster().size() - 1].name = ss.str();
}


void NewList::on_okButton_clicked() 
{
	status = true;

	// Adding each of the component names to the 'names' vector, to be created with the newPC() function

	names.push_back(ui.cpuInput->text().toStdString());
	names.push_back(ui.gpuInput->text().toStdString());
	names.push_back(ui.storageInput->text().toStdString());
	names.push_back(ui.memoryInput->text().toStdString());
	names.push_back(ui.motherboardInput->text().toStdString());
	names.push_back(ui.psuInput->text().toStdString());

	NewlyMadeList dialog(this);
	dialog.exec();
}