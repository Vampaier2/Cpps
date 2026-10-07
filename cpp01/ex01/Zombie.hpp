#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iomanip>
#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		Zombie(std::string name);
		void setName(std::string name);
		void announce();
		~Zombie();
};

Zombie*	newZombie( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif