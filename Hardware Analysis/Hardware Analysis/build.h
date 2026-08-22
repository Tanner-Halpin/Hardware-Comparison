#ifndef BUILD_H
#define BUILD_H
#include "parts.h"

bool operator==(const Component& p1, const Component& p2);

struct PC : public Parts 
{
	std::string name;
	Component* CPU = NULL; Component* GPU = NULL; Component* SSD = NULL; Component* RAM = NULL; Component* Motherboard = NULL; Component* PSU = NULL;
	std::vector<Component*>& get_componentList();
};

std::ostream& operator<<(std::ostream& out, PC& p);
std::istream& operator>>(std::istream& in, PC& b);

class Build : public Parts
{
protected:
	inline static std::vector<PC> buildRoster;

public:
	Build();
	bool isBuildEqual(Component& p1, Component& p2);
	void loadParts();
	void printUpload();
	PC* newPC(std::vector<std::string> names);
	Build startMenu();
	std::vector<Component*> loadAllParts();
	std::vector<PC>& get_buildRoster();
};

#endif // !BUILD_H