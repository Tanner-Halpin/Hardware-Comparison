#include "loadbuildlist.h"

loadbuildlist::loadbuildlist(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

loadbuildlist::~loadbuildlist()
{
}

void loadbuildlist::set_names(PC p) 
{
	std::vector<QLabel*> name_labels = 
	{
		ui.cpuLabel,
		ui.gpuLabel,
		ui.ramLabel,
		ui.moboLabel,
		ui.storageLabel,
		ui.psuLabel,
	};

	std::vector<Component*> data_labels =
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