#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

static void title(const std::string& t)
{
	std::cout << "\n========== " << t << " ==========" << std::endl;
}

int main(void)
{
	title("1. Construction / destruction chaining (named)");
	{
		ScavTrap serena("Serena");
		std::cout << "-- leaving scope --" << std::endl;
	}

	title("2. Default constructor");
	{
		ScavTrap def;
		def.guardGate();
	}

	title("3. attack(): ClapTrap vs ScavTrap messages and damage");
	{
		ClapTrap clap("Clappy");
		ScavTrap scav("Scavvy");
		clap.attack("Mario");
		scav.attack("Mario");
	}

	title("4. takeDamage->beRepaired, then running out of hp");
	{
		ScavTrap scav("Tank");
		scav.takeDamage(30);
		scav.beRepaired(10);
		scav.takeDamage(1000);
		scav.beRepaired(5);
		scav.attack("someone");
		scav.guardGate();
	}

	title("5. Copy constructor");
	{
		ScavTrap original("Original");
		original.takeDamage(40);
		ScavTrap copy(original);
		copy.attack("x");
	}

	title("6. Copy assignment");
	{
		ScavTrap a("A");
		ScavTrap b("B");
		a.takeDamage(50);
		b = a;
		b.beRepaired(1);
		b = b;
	}

	title("7. Large repair amount");
	{
		ScavTrap big("Big");
		big.beRepaired(70000);
	}

	return (0);
}