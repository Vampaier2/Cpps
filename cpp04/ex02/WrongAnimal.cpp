#include "WrongAnimal.hpp"

//---------- Orthodox Canonical Form ------------

// Default constructor, so it creates a structor
WrongAnimal::WrongAnimal()
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
	this->type = "WrongAnimal";
}

//  Copy constructor(Creates a new object of copy of another:)
WrongAnimal::WrongAnimal(const WrongAnimal& other): type(other.type)
{
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
	//*this = other;
}

//Copy assignment (so i can do ex: a = b)
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "Copy WrongAnimal assignment operator called " << std::endl;
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

//   Destructor (it destroyes, idk what else to say)
WrongAnimal::~WrongAnimal()
{
	std::cout << "!!!WrongAnimal " << this->type << " got destroyed!!!" << std::endl;
}

//---------------------------------------------------

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal says banana!" << std::endl;
}
