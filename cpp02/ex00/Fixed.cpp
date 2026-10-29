#include "Fixed.hpp"

//---------- Orthodox Canonical Form ------------

// Default constructor, so it creates a structor
Fixed::Fixed()
{
    print("Default constructor called");
    this->value = 0;
}

//  Copy constructor(Creates a new object of copy of another:)
Fixed::Fixed(const Fixed& other)
{
    print("Copy constructor called");
    *this = other;
}

//Copy assignment (so i can do ex: a = b)
Fixed& Fixed::operator=(const Fixed& other)
{
    print("Copy assignment operator called ");
    if (this == &other)
        return (*this);
    this->value = other.getRawBits();
    return (*this);
}

//   Destructor (it destroyes, idk what else to say)
Fixed::~Fixed()
{
    print("Destructor called");
}

//---------------------------------------------------

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

int Fixed::getRawBits(void) const
{
    print("getRawBits member function called");
    return (this->value);
}



/* 

//Copy assignment (so i can do ex: a = b)
Fixed& Fixed::operator=(const Fixed& other)
{
    print("Copy assignment operator called ");
    this->value = other.getRawBits();
    return (*this);
}
*/