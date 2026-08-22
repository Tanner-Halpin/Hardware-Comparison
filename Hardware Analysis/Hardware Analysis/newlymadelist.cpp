#include "newlymadelist.h"
#include "newlist.h"
#include "hardwareanalysis.h"
#include <sstream>

NewlyMadeList::NewlyMadeList(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	PC* temp = b.newPC(names); // Create a temporary 'PC' object with the names list initialized. 

	// Each 'name' in the 'temp PC object will be matched with the names of any components in the SQL database. 
	// the components of the matching 'names' will have their attribute lists filled accordingly to what matches in the SQL database

	std::string parts[6] = { "CPU: ", "GPU: ", "Storage: ", "Memory: ", "Motherboard: ", "Power Supply: " };

	for (size_t i = 0; i < names.size(); ++i)
	{
		std::stringstream myError;

		myError << parts[i] << " " << *(temp->get_componentList()[i]);
		
		QString e = QString::fromStdString(myError.str());

		ui.listWidget->addItem(e);
		myError.clear();
	}

	temp->get_componentList().clear();
	names.clear();
}

NewlyMadeList::~NewlyMadeList()
{
}

// View the size of the list
/*
*	std::stringstream ss;
*	ss << temp->get_componentList().size();;
*
*	QString d = QString::fromStdString(ss.str());
*	ui.listWidget->addItem(d);
*/