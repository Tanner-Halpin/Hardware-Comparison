#include <iostream>
#include <vector>
#include <sstream>
#include "parts.h"
#include "componentparser.c"

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

Component* Parts::CreateItem()
{
	std::vector<Component*> customPC;
	Component* d = new Component;

	std::string name; // To be parsed into company, type, version and model

	std::cout << "\nEnter the full name of the " << partsName[count] << " component below: ";
	count++;
	
	std::getline(std::cin, name);
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

	customPC.push_back(d);
	componentList.push_back(d);

	std::cout << "\n" << std::endl;

	std::cout << "Part Added:\n\n";
	for (auto& i : customPC)
	{
		std::cout << " " << *i << "Address: " << i;
	}
	return d;
}

void Parts::systemPartList()
{
	char a[128] = "powershell -command (Get-WmiObject Win32_Processor).Name";
	std::cout << "CPU: ";
	parser(a);
	char b[128] = "powershell -command (Get-CimInstance Win32_VideoController).Name";
	std::cout << "GPU: ";
	parser(b);
	char c[128] = "powershell -command (Get-WmiObject win32_baseboard).Product \" \"+\" (Get-WmiObject win32_baseboard).Manufacturer";
	std::cout << "Motherboard: ";
	parser(c);
}
