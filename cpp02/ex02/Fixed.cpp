#include "Fixed.hpp"

//---------- Orthodox Canonical Form ------------

// Default constructor, so it creates a structor
Fixed::Fixed()
{
	//print("Default constructor called");
	this->value = 0;
}

//  Copy constructor(Creates a new object of copy of another:)
Fixed::Fixed(const Fixed& other)
{
	//print("Copy constructor called");
	*this = other;
}

//Copy assignment (so i can do ex: a = b)
Fixed& Fixed::operator=(const Fixed& other)
{
    //print("Copy assignment operator called ");
    if (this == &other)
        return (*this);
    this->value = other.getRawBits();
    return (*this);
}

//   Destructor (it destroyes, idk what else to say)
Fixed::~Fixed()
{
	//print("Destructor called");
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
	//print("Int constructor called");
	this->value = value << fractionalBits;
}

// converts (float const) to the corresponding fixed-point value
// this->value = roundf(value * (1 * 2^fractionalBits));
Fixed::Fixed(float const value)
{
	//print("Float constructor called");
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

//---------------Operators---------------------

// we're teaching the output stream(<<)
// std::cout == os | std::ostream is the type of std::cout |
// '&' means we're working with the original stream(not a copy)
std::ostream& operator<<(std::ostream& os, Fixed const& fixed)
{
	os << fixed.toFloat(); //this is the same thing as -> std::cout << a.toFloat();
	return (os); //we return os, because if we want to add more << "text"
}

//------------Comparison operators: >, <, >=, <=, ==, and != -------------

bool Fixed::operator>(const Fixed& other)
{
	//print("Operator '>' called");
	return(this->value > other.getRawBits());
}

bool Fixed::operator<(const Fixed& other)
{
	//print("Operator '<' called");
	return(this->value < other.getRawBits());
}

bool Fixed::operator>=(const Fixed& other)
{
	//print("Operator '>=' called");
	return(this->value >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed& other)
{
	//print("Operator '<=' called");
	return(this->value <= other.getRawBits());
}

bool Fixed::operator==(const Fixed& other)
{
	//print("Operator '==' called");
	return(this->value == other.getRawBits());
}

bool Fixed::operator!=(const Fixed& other)
{
	//print("Operator '!=' called");
	return(this->value != other.getRawBits());
}

//------------Arithmetic operators: +, -, *, and / -------------

Fixed Fixed::operator+(const Fixed& other)
{
	Fixed result;
	//print("Operator '+' called");

	result.setRawBits(this->value + other.value);

	return(result);
}

Fixed Fixed::operator-(const Fixed& other)
{
	Fixed result;
	//print("Operator '-' called");

	result.setRawBits(this->value - other.value);

	return(result);
}

// since setRawBits expects a Raw Value, we need to shift the 
// multiplication to the right by 8 bits (>>) to get the Raw Result Value
Fixed Fixed::operator*(const Fixed& other)
{
	Fixed result;
	//print("Operator '*' called");

	result.setRawBits((this->value * other.value) >> fractionalBits);

	return(result);
}

// since setRawBits expects a Raw Value, we need to shift the
//  division to the left by 8 bits (<<) to get the Raw Result Value
Fixed Fixed::operator/(const Fixed& other)
{
	Fixed result;
	//print("Operator '/' called");

	result.setRawBits((this->value / other.value) << fractionalBits);

	return(result);
}


//------------increment/decrement: n++, ++n, n-- and --n


//int = n++
Fixed Fixed::operator++(int)
{
	Fixed result;
	//print("Operator 'n++' called");

	result.setRawBits(this->value);
	(this->value)++;

	return(result);
}

//void (or blank) = ++n
Fixed& Fixed::operator++()
{
	//print("Operator '++n' called");

	(this->value)++;
	
	return(*this);
}

//int = n--
Fixed Fixed::operator--(int)
{
	Fixed result;
	//print("Operator 'n--' called");

	result.setRawBits(this->value);
	(this->value)--;

	return(result);
}

//void (or blank) = --n
Fixed& Fixed::operator--()
{
	//print("Operator '--n' called");

	(this->value)--;
	
	return(*this);
}

//---------- overloaded member functions: min and max

Fixed& Fixed::min(Fixed &n1, Fixed &n2)
{
	//print("min fixed-point numbs called");

	if(n1.getRawBits() < n2.getRawBits())
	{
		return (n1);
	}
	return(n2);
}

const Fixed& Fixed::min(const Fixed &n1, const Fixed &n2)
{
	//print("min const fixed-point numbs called");

	if(n1.getRawBits() < n2.getRawBits())
	{
		return (n1);
	}
	return(n2);
}

Fixed& Fixed::max(Fixed &n1, Fixed &n2)
{
	//print("max fixed-point numbs called");

	if(n1.getRawBits() > n2.getRawBits())
	{
		return (n1);
	}
	return(n2);
}

const Fixed& Fixed::max(const Fixed &n1, const Fixed &n2)
{
	//print("max const fixed-point numbs called");

	if(n1.getRawBits() > n2.getRawBits())
	{
		return (n1);
	}
	return(n2);
}