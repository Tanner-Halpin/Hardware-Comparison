#include <iostream> 
#include <vector>
#include <fstream>
#include <string>
#include "attributes.h"
#include "parts.h"
#include "build.h"

int main()
{
	std::cout << "Welcome to SwitchMySystem -- The Computer Component Analysis\n";
	std::cout << "When entering the name for a custom part, if the name is more then one word, separate the words by a hyphen: -\n\n";
	Build b;
	b.startMenu();

	return 0;
}