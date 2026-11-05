#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap    pedro("Pedro");
	ClapTrap	banana;
	pedro.attack("Mario");
	banana.takeDamage(10);
	pedro.beRepaired(999999999);
	banana.takeDamage(7);
	pedro.attack("Mario");
	return (0);
}
