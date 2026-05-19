#ifndef BUILD_H
#define BUILD_H
#include "parts.h"

bool operator==(const Component& p1, const Component& p2);

struct PC
{
	std::string name;
	Component* CPU = NULL; Component* GPU = NULL; Component* SSD = NULL; Component* RAM = NULL; Component* Motherboard = NULL; Component* PSU = NULL;
};
std::ostream& operator<<(std::ostream& out, PC& p);
std::istream& operator>>(std::istream& in, PC& b);

class Build : public Parts
{
protected:
	std::string m_name;
	std::vector<PC> buildRoster;

public:
	Build();
	bool isBuildEqual(Component& p1, Component& p2);
	void addAttribute(int choice);
	void loadParts();
	void printUpload();
	void newPC();
	Build startMenu();
	std::vector<Component*> loadAllParts();
};

#endif // !BUILD_H