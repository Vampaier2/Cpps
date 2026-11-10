#include "Dog.hpp"

//---------- Orthodox Canonical Form ------------

// Default constructor, so it creates a structor
Dog::Dog()
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->type = "Dog";
}

//  Copy constructor(Creates a new object of copy of another:)
Dog::Dog(const Dog& other): Animal(other)
{
	std::cout << "Copy Dog constructor called" << std::endl;
	//*this = other;
}

//Copy assignment (so i can do ex: a = b)
Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Copy Dog assignment operator called " << std::endl;
	if (this == &other)
		return (*this);
	Animal::operator=(other);
	return (*this);
}

//   Destructor (it destroyes, idk what else to say)
Dog::~Dog()
{
	std::cout << "!!!Dog " << this->type << " got destroyed!!!" << std::endl;
}

//---------------------------------------------------

void	Dog::makeSound() const
{
	std::cout << "Dog says woof!" << std::endl;
}