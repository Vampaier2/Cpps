#include "Dog.hpp"

//---------- Orthodox Canonical Form ------------

// Default constructor, so it creates a structor
Dog::Dog()
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->type = "Dog";
    this->brain = new Brain();
}

//  Copy constructor(Creates a new object of copy of another:)
Dog::Dog(const Dog& other): Animal(other)
{
    std::cout << "Copy Dog constructor called" << std::endl;
    this->brain = new Brain(*other.brain);
}

//Copy assignment (so i can do ex: a = b)
Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Copy Dog assignment operator called " << std::endl;
    
    if (this != &other)
    {
        Animal::operator=(other);
        *this->brain = *other.brain;
    }
    
    return (*this);
}

//   Destructor (it destroyes, idk what else to say)
Dog::~Dog()
{
    delete this->brain;
	std::cout << "!!!Dog " << this->type << " got destroyed!!!" << std::endl;
}

//---------------------------------------------------

void	Dog::makeSound() const
{
	std::cout << "Dog says woof!" << std::endl;
}

Brain* Dog::getBrain(void) const
{
    return (this->brain);
}