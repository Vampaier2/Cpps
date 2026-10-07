#include "Zombie.hpp"

int main()
{
	int N = 20;
	std::string name = "Laranja";
	Zombie* firstZombie = zombieHorde( N, name);

	for(int i = 0; i < N; i++)
	{
		firstZombie[i].announce();
	}
	delete[] firstZombie;
	return (0);
}
