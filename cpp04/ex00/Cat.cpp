#include "Cat.hpp"

//---------- Orthodox Canonical Form ------------

// Default constructor, so it creates a structor
Cat::Cat()
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->type = "Cat";
}

//  Copy constructor(Creates a new object of copy of another:)
Cat::Cat(const Cat& other): Animal(other)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	//*this = other;
}

//Copy assignment (so i can do ex: a = b)
Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Copy Cat assignment operator called " << std::endl;
	if (this == &other)
		return (*this);
	Animal::operator=(other);
	return (*this);
}

//   Destructor (it destroyes, idk what else to say)
Cat::~Cat()
{
	std::cout << "!!!Cat " << this->type << " got destroyed!!!" << std::endl;
}

//---------------------------------------------------

void	Cat::makeSound() const
{
	std::cout << "Cat says Miau!" << std::endl;
}
