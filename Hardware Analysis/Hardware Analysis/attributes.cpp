#include <iostream>
#include <string>
#include "attributes.h"

void Attributes::setAttribute(std::string& attribute) { m_attribute = attribute; }
void Attributes::setvalue(std::string& value) { m_value = value; }

Attributes Attributes::createAttribute(std::string attribute, std::string value)
{
	Attributes a;
	a.setAttribute(attribute), a.setvalue(value);

	return a;
}

std::ostream& operator<<(std::ostream& out, Attributes& a)
{
	out << a.m_attribute << ": " << a.m_value;
	return out;
}
