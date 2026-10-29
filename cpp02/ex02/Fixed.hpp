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

		//--- get + set Raw Bits ---
		int getRawBits(void) const;
		void setRawBits(int const raw);

		//--- Int + Float ---
		Fixed(int const value);
		Fixed(float const value);
		float toFloat(void) const;
		int toInt(void) const;

		// Comparison operators
		bool operator>(const Fixed& other);
		bool operator<(const Fixed& other);
		bool operator>=(const Fixed& other);
		bool operator<=(const Fixed& other);
		bool operator==(const Fixed& other);
		bool operator!=(const Fixed& other);

		// Arithmetic operators
		Fixed operator+(const Fixed& other);
		Fixed operator-(const Fixed& other);
		Fixed operator*(const Fixed& other);
		Fixed operator/(const Fixed& other);

		// Increment and decrement
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);

		// Min and max
		static Fixed& min(Fixed& n1, Fixed& n2);
		static const Fixed& min(const Fixed& n1, const Fixed& n2);
		static Fixed& max(Fixed& n1, Fixed& n2);
		static const Fixed& max(const Fixed& n1, const Fixed& n2);
};

std::ostream& operator<<(std::ostream& os, Fixed const& fixed);
void	print(std::string text);


#endif