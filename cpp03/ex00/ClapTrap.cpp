#include "ClapTrap.hpp"

//---------- Orthodox Canonical Form ------------

// Default constructor, so it creates a structor
ClapTrap::ClapTrap()
{
	print("Default constructor called");
	this->name = "Bebop";
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

//  Copy constructor(Creates a new object of copy of another:)
ClapTrap::ClapTrap(const ClapTrap& other)
{
    print("Copy constructor called");
    *this = other;
}

//Copy assignment (so i can do ex: a = b)
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    print("Copy assignment operator called ");
    if (this == &other)
        return (*this);
    this->name = other.name;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_damage = other.attack_damage;
    return (*this);
}

//   Destructor (it destroyes, idk what else to say)
ClapTrap::~ClapTrap()
{
	std::cout << "!!!ClapTrap " << this->name << " got destoyed!!!" << std::endl;
}

//---------------------------------------------------

// Named constructor
ClapTrap::ClapTrap(std::string name)
{
	print("Named constructor called");
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

//--------------------------------------------


void ClapTrap::attack(const std::string& target)
{
	if (checkStatus("Attack") == 1)
	{
		return;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage <<   " points of damage!" << std::endl;
	this->energy_points--;
	std::cout << "Current Energy Points: " << this->energy_points << "\n" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (checkStatus("take Damage") == 1)
	{
		return;
	}
	std::cout << "ClapTrap " << this->name << " took " << amount << " of damage!" << std::endl;
	if (amount >= (unsigned int)this->hit_points)
	{
		this->hit_points = 0;
	}
	else
	{
		this->hit_points -= amount;
	}
	std::cout << "Current Hit Points: " << this->hit_points << "\n" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{

	if (checkStatus("Repair") == 1)
	{
		return;
	}
	std::cout << "ClapTrap " << this->name << " repaired " << amount << " of Hit Points!" << std::endl;
	this->hit_points += amount;
	this->energy_points--;
	std::cout << "Current Hit Points: " << this->hit_points << std::endl;
	std::cout << "Current Energy Points: " << this->energy_points << "\n" << std::endl;
}

int ClapTrap::checkStatus(std::string action)
{
	if (this->energy_points <= 0)
	{
		std::cout << "!!!ClapTrap " << this->name << " has no energy points left to " << action << "!!!\n" << std::endl;
		return (1);
	}

	if (this->hit_points <= 0)
	{
		std::cout << "!!!ClapTrap " << this->name << " has no hit points left to " << action << "!!!\n" << std::endl;
		return (1);
	}

	return (0);
}
