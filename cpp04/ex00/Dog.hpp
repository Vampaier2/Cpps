#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>//std
#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();								// 1º Default constructor
		Dog(const Dog& other);				// 2º Copy constructor(Creates a new object as a copy of another:)
		Dog& operator=(const Dog& other);	// 3º Copy assignment (so it's possible to do a = b)
		~Dog();								// 4º Destructor

		void	makeSound() const;
};

#endif