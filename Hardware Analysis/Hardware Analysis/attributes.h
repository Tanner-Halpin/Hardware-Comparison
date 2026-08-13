#include <iostream> 
#include <vector>
#include <fstream>
#include <string>

#ifndef ATTRIBUTES_H
#define ATTRIBUTES_H

class Attributes
{
private:
	std::string m_attribute, m_value;

public:
	void setAttribute(std::string& attribute);
	void setvalue(std::string& value);
	Attributes createAttribute(std::string attribute, std::string value);

	friend std::ostream& operator<<(std::ostream& out, Attributes& a);
	friend std::istream& operator>>(std::istream& in, std::vector<Attributes>& a);
	friend std::ostream& operator<<(std::ostream& out, std::vector<Attributes>& a);
};

#endif // !ATTRIBUTES_H