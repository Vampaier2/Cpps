#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>//std
#include <string>

class Animal
{
	protected:
		std::string type;	//Type
	public:
		Animal();								// 1º Default constructor
		Animal(const Animal& other);			// 2º Copy constructor(Creates a new object as a copy of another:)
		Animal& operator=(const Animal& other);	// 3º Copy assignment (so it's possible to do a = b)
		virtual ~Animal();								// 4º Destructor

		std::string getType() const;
		virtual void	makeSound() const = 0;
};

#endif