#include "Zombie.hpp"

void print(std::string text)
{
	std::cout << text << std::endl;
}

int main()
{
	int N = 3;

	if (N < 0)
	{
		print("!!! Number of Zombies can't be negative !!!");
		return (1);
	}
	std::string name = "Laranja";
	Zombie* firstZombie = zombieHorde( N, name);

	for(int i = 0; i < N; i++)
	{
		firstZombie[i].announce();
	}
	delete[] firstZombie;
	return (0);
}
