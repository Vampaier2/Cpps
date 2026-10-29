#ifndef FIXED_H
#define FIXED_H

#include <iostream>//std
#include <fstream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int value;
    	static const int fractionalBits = 8;
	public:
		Fixed();								// 1º Default constructor
		Fixed(const Fixed& other);				// 2º Copy constructor(Creates a new object as a copy of another:)
		Fixed& operator=(const Fixed& other);	// 3º Copy assignment (so it's possible to do a = b)
		~Fixed();								// 4º Destructor

		int getRawBits(void) const;
    	void setRawBits(int const raw);
		Fixed(int const value);
		Fixed(float const value);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, Fixed const& fixed);
void	print(std::string text);


#endif