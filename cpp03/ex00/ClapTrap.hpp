#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>//std
#include <string>
#include <climits>

class ClapTrap
{
	private:
		std::string name;	//Name
		int	hit_points;		//Hit points. representing the health of the ClapTrap
		int	energy_points;	//Energy points
		int	attack_damage;	//Attack damage 
		int checkStatus(std::string action);
	public:
		ClapTrap();									// 1º Default constructor
		ClapTrap(const ClapTrap& other);			// 2º Copy constructor(Creates a new object as a copy of another:)
		ClapTrap& operator=(const ClapTrap& other);	// 3º Copy assignment (so it's possible to do a = b)
		~ClapTrap();									// 4º Destructor

		ClapTrap(std::string name);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};

#endif