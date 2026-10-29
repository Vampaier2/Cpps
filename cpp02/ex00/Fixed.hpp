#ifndef FIXED_H
#define FIXED_H

#include <iostream>//std
#include <fstream>
#include <string>

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
};

void	print(std::string text);


#endif