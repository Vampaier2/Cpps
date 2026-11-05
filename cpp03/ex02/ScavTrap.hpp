#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>//std
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();									// 1º Default constructor
		ScavTrap(const ScavTrap& other);			// 2º Copy constructor(Creates a new object as a copy of another:)
		ScavTrap& operator=(const ScavTrap& other);	// 3º Copy assignment (so it's possible to do a = b)
		~ScavTrap();								// 4º Destructor

		ScavTrap(std::string name);
		void attack(const std::string& target);
		void guardGate(void);

};

#endif