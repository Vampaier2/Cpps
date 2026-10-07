#include "Zombie.hpp"

/*
new Zombie[N];   // allocate N objects
delete[] horde;  // destroy N objects


*/

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* horde = new Zombie[N];
	int i = 0;

	while (i < N)
	{
		horde[i].setName(name);
		i++;
	}

	return (horde);
}
