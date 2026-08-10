#include "loadbuildlist.h"

loadbuildlist::loadbuildlist(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

loadbuildlist::~loadbuildlist()
{
}

void loadbuildlist::set_names(PC p) // Changed to a Q line edit to allow customizing the already made list
{
	name_labels = 
	{
		ui.cpuLabel,
		ui.gpuLabel,
		ui.ramLabel,
		ui.moboLabel,
		ui.storageLabel,
		ui.psuLabel,
	};

	data_labels =
	{
		p.CPU,
		p.GPU,
		p.RAM,
		p.Motherboard,
		p.SSD,
		p.PSU,
	};

	for (size_t i = 0; i < 6; ++i)
	{
		std::stringstream ss;

		ss << *data_labels[i];
		QString s = QString::fromStdString(ss.str());

		name_labels[i]->setText(s);
	}
}

void loadbuildlist::on_saveChanges_clicked() // Function to save changes for swapped out parts, and updates the Computer Build Roster and Component List
{
	for (size_t i = 0; i < 6; ++i)
	{
		data_labels[i]->fullname = name_labels[i]->text().toStdString();
		name_labels[i]->setText(QString::fromStdString(data_labels[i]->fullname));
	}
}

// Adding attributes test: 

	/*
	Attributes a;
	data_labels[0]->attributes.push_back(a.createAttribute("cores", "16"));

	std::stringstream tst;
	tst << *data_labels[0];

	ui.label->setText(QString::fromStdString(tst.str()));

	*/