#include "Fixed.hpp"

void print(std::string text)
{
    std::cout << text << std::endl;
}


int main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;

	std::cout << ++a << std::endl;

	std::cout << a << std::endl;

	std::cout << a++ << std::endl;

	std::cout << a << std::endl;
	
	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}


/* 
int main(void)
{
    Fixed a;
    Fixed b(2);
    Fixed c(5);
    Fixed const d(10);
    Fixed const e(2);

    // Default constructor and stream operator
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;

    // Comparison operators
    std::cout << "\n--- Comparisons ---" << std::endl;
    std::cout << "c > b: " << (c > b) << std::endl;
    std::cout << "c < b: " << (c < b) << std::endl;
    std::cout << "c >= b: " << (c >= b) << std::endl;
    std::cout << "c <= b: " << (c <= b) << std::endl;
    std::cout << "b == e: " << (b == e) << std::endl;
    std::cout << "b != e: " << (b != e) << std::endl;

    // Arithmetic operators
    std::cout << "\n--- Arithmetic ---" << std::endl;
    std::cout << "b + c = " << b + c << std::endl;
    std::cout << "c - b = " << c - b << std::endl;
    std::cout << "b * c = " << b * c << std::endl;
    std::cout << "c / b = " << c / b << std::endl;

    // Prefix and postfix increment
    std::cout << "\n--- Increment ---" << std::endl;
    std::cout << "++a = " << ++a << std::endl;
    std::cout << "a++ = " << a++ << std::endl;
    std::cout << "a after a++ = " << a << std::endl;

    // Prefix and postfix decrement
    std::cout << "\n--- Decrement ---" << std::endl;
    std::cout << "--a = " << --a << std::endl;
    std::cout << "a-- = " << a-- << std::endl;
    std::cout << "a after a-- = " << a << std::endl;

    // min() and max() with non-const objects
    std::cout << "\n--- min / max (non-const) ---" << std::endl;
    std::cout << "min(b, c) = " << Fixed::min(b, c) << std::endl;
    std::cout << "max(b, c) = " << Fixed::max(b, c) << std::endl;

    // min() and max() with const objects
    std::cout << "\n--- min / max (const) ---" << std::endl;
    std::cout << "min(d, e) = " << Fixed::min(d, e) << std::endl;
    std::cout << "max(d, e) = " << Fixed::max(d, e) << std::endl;

    return 0;
} */
