#include <iostream>
#include <vector>
#include <sstream>
#include "parts.h"

std::ostream& operator<<(std::ostream& out, Component& c)
{
	out << c.company << " " << c.type << " " << c.version << " " << c.model << "\n";
	for (auto& i : c.attributes)
	{
		out << "> " << i << "\n";
	}
	return out;
}

std::ifstream& operator>>(std::ifstream& in, Component& c)
{
	in >> c.company >> c.type >> c.version >> c.model;
	return in;
}

Component* Parts::CreateItem(std::string name)
{
	std::vector<Component*> customPC;
	Component* d = new Component;

	count++;

	std::stringstream ss(name);
	std::string word;

	std::string* attributesList[4]{ &d->company, &d->type, &d->version, &d->model };

	int i = 0;
	while (ss >> word)
	{
		*attributesList[i] = word;
		i++;

		if (i > 3)
			break;
	}
	i = 0;

	componentList.push_back(d);

	return d;
}

void Parts::getProcessor(std::string command)
{
	QProcess process;

	QString program = "powershell.exe";
	QStringList arguments;

	arguments << "-Command" << QString::fromStdString(command);
	process.start(program, arguments);

	process.waitForFinished();
	QString output = process.readAllStandardOutput();

	gathered_parts.push_back(output);
}