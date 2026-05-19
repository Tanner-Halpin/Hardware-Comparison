#ifndef PARTS_H
#define PARTS_H
#include "attributes.h"

struct Component
{
	std::string company="", type="", version="", model="";
	std::vector<Attributes> attributes;
};

std::ostream& operator<<(std::ostream& out, Component& c);
std::ifstream& operator>>(std::ifstream& in, Component& c);

class Parts : public Attributes
{
protected:
	std::vector<Component*> componentList;

public:
	int count = 0;
	std::vector<std::string> partsName = { "CPU", "Graphics Card", "Storage Device", "Memory Card", "Motherboard", "Power Supply" };
	Component* CreateItem();
	void systemPartList();
};


#endif // !PARTS_H
