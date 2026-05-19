#include <iostream>
#include <vector>
#include "build.h"

bool operator==(const Component& p1, const Component& p2)
{
	return p1 == p2;
}

std::ostream& operator<<(std::ostream& out, PC& p)
{
	out << p.name << "'s PC Specifications: " << "\n" << "1.) " << *(p.CPU) << "\n" << "2.) " << *(p.GPU) << "\n" << "3.) " << *(p.SSD) << "\n" << "4.) " << *(p.RAM) << "\n" << "5.) " << *(p.Motherboard) << "\n" << "6.) " << *(p.PSU) << "\n";
	return out;
}

std::istream& operator>>(std::istream& in, PC& b)
{
	in >> b.name;
	return in;
}


Build::Build()
{
	std::cout << "Components we could gather from your computer: \n";
	systemPartList();
	std::cout << std::endl;
}

bool Build::isBuildEqual(Component& p1, Component& p2)
{
	if (!(p1 == p2))
	{
		return false;
	}
	return true;
}

void Build::addAttribute(int choice)
{
	std::string attribute, value;

	std::cin.clear();
	std::cin.ignore(100, '\n');

	std::cout << "Enter attribute name: ";
	std::getline(std::cin, attribute);

	std::cout << "The value: ";
	std::getline(std::cin, value);

	componentList[choice]->attributes.push_back(createAttribute(attribute, value));

	loadAllParts();
	std::cout << "\n";
}

void Build::loadParts()
{
	std::string file, name;
	std::cout << "Enter the exact name of the file: ";
	std::cin >> file;

	std::ifstream out{ file };

	if (!out)
	{
		std::cerr << "Error reading file\n\n";
		startMenu();
	}
	else
	{
		Component* e = new Component;

		std::cout << "Enter your name, or username: ";
		std::cin >> name;
		PC* list = new PC;
		list->name = name;
		
		int count = 0;
		int temp = 0;
		if (componentList.size() > 1)
		{
			count = componentList.size();
			temp = count;
		}

		std::cout << "\n" << std::endl;

		while (out >> e->company >> e->type >> e->version >> e->model)
		{
			componentList.push_back(e);
			std::cout << *componentList[count];
			++count;
			e = new Component;
		}

		Component** compList[6] = { &list->CPU, &list->GPU, &list->SSD, &list->RAM, &list->Motherboard, &list->PSU };

		for (int i = 0; i < std::size(compList); i++)
		{
			*compList[i] = componentList[temp];
			++temp;
		}

		std::cout << "\n" << std::endl;
		buildRoster.push_back(*list);

		delete list;
		delete e;
		list = nullptr;
		e = nullptr;
	}
}

void Build::printUpload()
{
	std::cout << "\n\nCurrent PC Build Roster:\n\n";
	int count = 0;

	for (auto& i : buildRoster)
	{
		std::cout << i;
		count++;
	}
	std::cout << "\n\n";
}

void Build::newPC()
{
	while (true)
	{
		PC* build = new PC;

		std::cout << "\nEnter your name, or username: ";
		std::getline(std::cin, m_name);
		std::cout << m_name << "'s PC. \n";

		Component** compList[6] = { &build->CPU, &build->GPU, &build->SSD, &build->RAM, &build->Motherboard, &build->PSU };

		for (size_t i = 0; i < std::size(compList); i++)
		{
			*compList[i] = CreateItem();
		}

		build->name = m_name;

		buildRoster.push_back(*build);
		count = 0;

		printUpload();
		startMenu();

		delete build;
		build = nullptr;
	}
}

Build Build::startMenu()
{
	char option = 0;
	while (true && option != 'q')
	{
		std::cout << "Pick an option: \na: Upload a list of PC Specifications\nb: Create a new PC with Parts\nc: Load the PC Build Roster\nd: Modify the component details\nq: End the program\n\nEnter your choice: ";
		std::cin >> option;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		switch (option)
		{
		case 'a':
			loadParts(); break;
		case 'b':
			newPC(); break;
		case 'c':
			printUpload(); break;
		case 'd':
			loadAllParts(); break;
		case 'q':
			exit(0); break;
		default:
			std::cout << "Invalid input. Please try again\n\n"; startMenu();
		}
	}
}

std::vector<Component*> Build::loadAllParts()
{
	if (componentList.size() == 0)
	{
		std::cout << "No components in the list\n\n";
		startMenu();
	}
	else
	{
		int j = 0;
		for (auto i = componentList.begin(); i != componentList.end(); ++i)
		{
			std::cout << "\n" << j + 1 << ".) " << *componentList[j] << "Address Identifier (ID): " << componentList[j] << "\n";
			j++;
		}
		std::cout << "\n";
		char choice;  int selection;

		std::cout << "Add Attributes to a Part (y/n) ";
		std::cin >> choice;

		switch (choice)
		{
		case 'y':
			std::cout << "Select part by number: ";
			std::cin >> selection;
			addAttribute(selection - 1);

		case 'n':
			return componentList;
		default:
			return componentList;
		}
	}
}