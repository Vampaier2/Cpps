#include "ScavTrap.hpp"

//---------- Orthodox Canonical Form ------------

// Default constructor, so it creates a structor
ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
	this->name = "Bebop";
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

//  Copy constructor(Creates a new object of copy of another:)
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "Copy ScavTrap constructor called" << std::endl;
}

//Copy assignment (so i can do ex: a = b)
// ClapTrap already knows how to copy the values, so we just call that function.
ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "Copy ScavTrap assignment operator called " << std::endl;
    if (this != &other)
        ClapTrap::operator=(other);
    return (*this);
}

//   Destructor (it destroyes, idk what else to say)
ScavTrap::~ScavTrap()
{
	std::cout << "!!!ScavTrap " << this->name << " got destroyed!!!" << std::endl;
}

//---------------------------------------------------

// Named constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Named ScavTrap constructor called" << std::endl;
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

//--------------------------------------------


void ScavTrap::attack(const std::string& target)
{
	if (checkStatus("Attack") == 1)
	{
		return;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage <<   " points of damage!" << std::endl;
	this->energy_points--;
	std::cout << "Current Energy Points: " << this->energy_points << "\n" << std::endl;
}

void	ScavTrap::guardGate()
{
	if (checkStatus("enter Gatekeeper mode") == 1)
	{
		return;
	}
	std::cout << "ScavTrap " << this->name << " is now in Gatekeeper mode!\n" << std::endl;
}
