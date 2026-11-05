#include "ClapTrap.hpp"

void print(std::string text)
{
    std::cout << text << std::endl;
}

int main(void)
{
	ClapTrap    pedro("Pedro");
	ClapTrap	banana;
	pedro.attack("Mario");
	banana.takeDamage(10);
	pedro.beRepaired(42);
	banana.takeDamage(7);
	pedro.attack("Mario");
	return (0);
}
