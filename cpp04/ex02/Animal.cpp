#include "Animal.hpp"

//---------- Orthodox Canonical Form ------------

// Default constructor, so it creates a structor
Animal::Animal()
{
	std::cout << "Default Animal constructor called" << std::endl;
	this->type = "Animal";
}

//  Copy constructor(Creates a new object of copy of another:)
Animal::Animal(const Animal& other): type(other.type)
{
    std::cout << "Copy Animal constructor called" << std::endl;
    //*this = other;
}

//Copy assignment (so i can do ex: a = b)
Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Copy Animal assignment operator called " << std::endl;
    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);
}

//   Destructor (it destroyes, idk what else to say)
Animal::~Animal()
{
	std::cout << "!!!Animal " << this->type << " got destroyed!!!" << std::endl;
}

//---------------------------------------------------

std::string Animal::getType() const
{
    return (this->type);
}
