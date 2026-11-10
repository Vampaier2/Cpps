#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

static void title(const std::string& s)
{
	std::cout << "\n========== " << s << " ==========" << std::endl;
}

int main(void)
{
	// ==================================================
	// EXERCISE 00
	// ==================================================

	title("EXERCISE 00 - POLYMORPHISM");

	title("Normal Animals");
	{
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();

		std::cout << "\n--- Get Types ---" << std::endl;
		std::cout << dog->getType() << std::endl;
		std::cout << cat->getType() << std::endl;

		std::cout << "\n--- Make Sounds ---" << std::endl;
		dog->makeSound();
		cat->makeSound();

		std::cout << "\n--- Delete Animals ---" << std::endl;
		delete dog;
		delete cat;
	}

	title("Wrong Animals");
	{
		const WrongAnimal* wrongAnimal = new WrongAnimal();
		const WrongAnimal* wrongCat = new WrongCat();

		std::cout << "\n--- Get Types ---" << std::endl;
		std::cout << wrongAnimal->getType() << std::endl;
		std::cout << wrongCat->getType() << std::endl;

		std::cout << "\n--- Make Sounds ---" << std::endl;
		wrongAnimal->makeSound();
		wrongCat->makeSound();

		std::cout << "\n--- Delete Animals ---" << std::endl;
		delete wrongAnimal;
		delete wrongCat;
	}

	return (0);
}
