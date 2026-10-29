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

//---------------------------------------------

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

int Fixed::getRawBits(void) const
{
    return (this->value);
}

//-----------------Float + Int funcs ----------------------------


// converts (int const) to the corresponding fixed-point value
// this->value = value * 2^fractionalBits;
Fixed::Fixed(int const value)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = value << fractionalBits;
}

// converts (float const) to the corresponding fixed-point value
// this->value = roundf(value * (1 * 2^fractionalBits));
Fixed::Fixed(float const value)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(value * (1 << fractionalBits));
}

// converts the fixed-point value to a floating-point value
// (float)this->value / (1 * 2^fractionalBits)
float Fixed::toFloat(void) const
{
    return ((float)this->value / (1 << fractionalBits));
}

// converts the fixed-point value to an integer value
// this->value / 2^fractionalBits
int Fixed::toInt(void) const
{
    return (this->value >> fractionalBits);
}

//---------------Operator---------------------

// we're teaching the output stream(<<)
// std::cout == os | std::ostream is the type of std::cout |
// '&' means we're working with the original stream(not a copy)
std::ostream& operator<<(std::ostream& os, Fixed const& fixed)
{
    os << fixed.toFloat(); //this is the same thing as -> std::cout << a.toFloat();
    return (os); //we return os, because if we want to add more << "text"
}
