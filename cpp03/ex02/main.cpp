#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

static void title(const std::string& t)
{
	std::cout << "\n========== " << t << " ==========" << std::endl;
}

int main(void)
{
	title("1. Construction / destruction chaining (named)");
	{
		FragTrap serena("Serena");
		std::cout << "-- leaving scope --" << std::endl;
	}

	title("2. Default constructor + highFiveGuys");
	{
		FragTrap def;
		def.highFivesGuys();
	}

	title("3. attack(): ClapTrap vs ScavTrap vs FragTrap messages and damage");
	{
		ClapTrap clap("Clappy");
		ScavTrap scav("Scavvy");
		FragTrap frag("Fraggy");
		clap.attack("Mario");
		scav.attack("Mario");
		frag.attack("Mario");
	}

	title("4. takeDamage->beRepaired, then running out of hp");
	{
		FragTrap frag("Tank");
		frag.takeDamage(1000);
		frag.beRepaired(5);
		frag.attack("someone");
	}

	title("5. Copy constructor");
	{
		FragTrap original("Original");
		original.takeDamage(40);
		FragTrap copy(original);
		copy.attack("x");
	}

	title("6. Copy assignment");
	{
		FragTrap a("A");
		FragTrap b("B");
		a.takeDamage(50);
		b = a;
		b.beRepaired(1);
		b = b;
	}

	title("7. Large repair amount");
	{
		FragTrap big("Big");
		big.beRepaired(70000);
	}

	return (0);
}