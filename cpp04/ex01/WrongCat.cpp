#include "WrongCat.hpp"

//---------- Orthodox Canonical Form ------------

// Default constructor, so it creates a structor
WrongCat::WrongCat()
{
	std::cout << "Default WrongCat constructor called" << std::endl;
	this->type = "WrongCat";
}

//  Copy constructor(Creates a new object of copy of another:)
WrongCat::WrongCat(const WrongCat& other): WrongAnimal(other)
{
	std::cout << "Copy WrongCat constructor called" << std::endl;
	//*this = other;
}

//Copy assignment (so i can do ex: a = b)
WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "Copy WrongCat assignment operator called " << std::endl;
	if (this == &other)
		return (*this);
	WrongAnimal::operator=(other);
	return (*this);
}

//   Destructor (it destroyes, idk what else to say)
WrongCat::~WrongCat()
{
	std::cout << "!!!WrongCat " << this->type << " got destroyed!!!" << std::endl;
}

//---------------------------------------------------

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat says Miau!" << std::endl;
}
