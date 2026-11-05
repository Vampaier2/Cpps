#include "FragTrap.hpp"

//---------- Orthodox Canonical Form ------------

// Default constructor, so it creates a structor
FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Default FragTrap constructor called" << std::endl;
	this->name = "Bebop";
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

//  Copy constructor(Creates a new object of copy of another:)
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "Copy FragTrap constructor called" << std::endl;
}

//Copy assignment (so i can do ex: a = b)
// ClapTrap already knows how to copy the values, so we just call that function.
FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "Copy FragTrap assignment operator called " << std::endl;
    if (this != &other)
        ClapTrap::operator=(other);
    return (*this);
}

//   Destructor (it destroyes, idk what else to say)
FragTrap::~FragTrap()
{
	std::cout << "!!!FragTrap " << this->name << " got destroyed!!!" << std::endl;
}

//---------------------------------------------------

// Named constructor
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Named FragTrap constructor called" << std::endl;
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

//--------------------------------------------


void FragTrap::attack(const std::string& target)
{
	if (checkStatus("Attack") == 1)
	{
		return;
	}
	std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage <<   " points of damage!" << std::endl;
	this->energy_points--;
	std::cout << "Current Energy Points: " << this->energy_points << "\n" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	if (checkStatus("ask for a high five") == 1)
	{
		return;
	}
	std::cout << "FragTrap " << this->name << " requests a positive high five!!\n" << std::endl;
}
