#include "newlist.h"
#include "build.h"
#include "newlymadelist.h"
#include "hardwareanalysis.h"
#include <sstream>

NewList::NewList(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.cpuInput->setFocus();
}

NewList::~NewList()
{
}

void NewList::set_name()
{
	QString m_name = ui.lineEdit->text();

	std::stringstream ss;
	ss << m_name.toStdString();

	b.get_buildRoster()[b.get_buildRoster().size() - 1].name = ss.str();
}


void NewList::on_okButton_clicked() 
{
	status = true;

	names.push_back(ui.cpuInput->text().toStdString());
	names.push_back(ui.gpuInput->text().toStdString());
	names.push_back(ui.storageInput->text().toStdString());
	names.push_back(ui.memoryInput->text().toStdString());
	names.push_back(ui.motherboardInput->text().toStdString());
	names.push_back(ui.psuInput->text().toStdString());

	NewlyMadeList dialog(this);
	dialog.exec();
}