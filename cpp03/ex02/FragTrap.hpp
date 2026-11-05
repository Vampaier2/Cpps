#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>//std
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();									// 1º Default constructor
		FragTrap(const FragTrap& other);			// 2º Copy constructor(Creates a new object as a copy of another:)
		FragTrap& operator=(const FragTrap& other);	// 3º Copy assignment (so it's possible to do a = b)
		~FragTrap();								// 4º Destructor

		void attack(const std::string& target);
		FragTrap(std::string name);
		void highFivesGuys(void);

};

#endif