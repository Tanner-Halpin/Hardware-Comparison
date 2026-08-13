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

	attribute_data =
	{
		p.CPU->attributes,
		p.GPU->attributes,
		p.RAM->attributes,
		p.Motherboard->attributes,
		p.SSD->attributes,
		p.PSU->attributes
	};

	attribute_labels =
	{
		ui.label,
		ui.label_2,
		ui.label_3,
		ui.label_4,
		ui.label_5,
		ui.label_6
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
		data_labels[i]->fullname = name_labels[i]->text().toStdString(); // Changing the parameters actual value to what is currently in the textbox
		name_labels[i]->setText(QString::fromStdString(data_labels[i]->fullname)); // Set the textbox to the parameters actual name value. When the list is clicked on again, it will load the parameters real values	
	}
}


/*
	// Begin of test
	Attributes a;
	if (data_labels[0]->attributes.size() == 0)
	{
		data_labels[0]->attributes.push_back(a.createAttribute("Cores", "16"));
	}
	attribute_labels[0]->setText(data_labels[0]->print_components());
	// End of test
*/