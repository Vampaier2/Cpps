#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}

//returns a reference to the existing type string,
//  but const prevents it from being modifyed
const std::string& Weapon::getType(void)
{
	return this->type;
}