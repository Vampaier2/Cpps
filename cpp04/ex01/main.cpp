#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

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


	// ==================================================
	// EXERCISE 01
	// ==================================================

	title("EXERCISE 01 - BRAIN AND DEEP COPIES");

	title("1. Subject Test - Dog and Cat");
	{
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();

		std::cout << "\n" << std::endl;

		delete dog;
		delete cat;
	}

	title("2. Array of Animals - Half Dogs, Half Cats");
	{
		const int SIZE = 10;
		Animal* animals[SIZE];

		for (int i = 0; i < SIZE / 2; i++)
		{
			animals[i] = new Dog();
		}

		for (int i = SIZE / 2; i < SIZE; i++)
		{
			animals[i] = new Cat();
		}

		std::cout << "\n--- Sounds ---" << std::endl;

		for (int i = 0; i < SIZE; i++)
		{
			std::cout << i << ": " << animals[i]->getType() << " -> ";
			animals[i]->makeSound();
		}

		std::cout << "\n--- Deleting Through Animal* ---" << std::endl;

		for (int i = 0; i < SIZE; i++)
		{
			delete animals[i];
		}
	}

	title("3. Deep Copy - Dog Copy Constructor");
	{
		Dog original;
		original.getBrain()->setIdea(0, "chase the ball");
		std::cout << "\n" << std::endl;
		Dog copy(original);

		original.getBrain()->setIdea(0, "changed after the copy");
		std::cout << "\n" << std::endl;

		std::cout << "Original idea: "
				  << original.getBrain()->getIdea(0) << std::endl;
		std::cout << "\n" << std::endl;

		std::cout << "Copy idea: "
				  << copy.getBrain()->getIdea(0) << std::endl;
		std::cout << "\n" << std::endl;
		
		std::cout << "Same Brain address? "
				  << (original.getBrain() == copy.getBrain()
					  ? "YES (SHALLOW COPY!)"
					  : "NO (DEEP COPY)") << std::endl;
		std::cout << "\n" << std::endl;
	}

	title("4. Deep Copy - Cat Assignment Operator");
	{
		Cat a;
		Cat b;

		a.getBrain()->setIdea(0, "sleep on the keyboard");
		b.getBrain()->setIdea(0, "old idea of b");
		std::cout << "\n" << std::endl;

		b = a;

		a.getBrain()->setIdea(0, "changed after assignment");
		std::cout << "\n" << std::endl;

		std::cout << "A idea: "
				  << a.getBrain()->getIdea(0) << std::endl;

		std::cout << "B idea: "
				  << b.getBrain()->getIdea(0) << std::endl;
		std::cout << "\n" << std::endl;

		std::cout << "Same Brain address? "
				  << (a.getBrain() == b.getBrain()
					  ? "YES (SHALLOW COPY!)"
					  : "NO (DEEP COPY)") << std::endl;

		std::cout << "\n--- Self Assignment ---" << std::endl;

		Cat& ref = a;
		a = ref;

		std::cout << "A idea after self-assignment: "
				  << a.getBrain()->getIdea(0) << std::endl;
		std::cout << "\n" << std::endl;

	}

	title("5. Copy Objects Created With New");
	{
		Animal* animals[2];

		animals[0] = new Dog();
		animals[1] = new Cat();
		std::cout << "\n" << std::endl;

		Dog* dogCopy = new Dog(*static_cast<Dog*>(animals[0]));
		Cat* catCopy = new Cat(*static_cast<Cat*>(animals[1]));
		std::cout << "\n" << std::endl;

		dogCopy->makeSound();
		catCopy->makeSound();
		std::cout << "\n" << std::endl;

		delete animals[0];
		delete animals[1];
		delete dogCopy;
		delete catCopy;
	}

	title("6. Stack Objects");
	{
		Dog dog;
		Cat cat;
		std::cout << "\n" << std::endl;

		dog.makeSound();
		cat.makeSound();

		std::cout << "\n--- Leaving Scope ---" << std::endl;
	}

	title("ALL TESTS COMPLETED");

	return (0);
}