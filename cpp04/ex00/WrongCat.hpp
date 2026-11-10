#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>//std
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();								// 1º Default constructor
		WrongCat(const WrongCat& other);				// 2º Copy constructor(Creates a new object as a copy of another:)
		WrongCat& operator=(const WrongCat& other);	// 3º Copy assignment (so it's possible to do a = b)
		~WrongCat();								// 4º Destructor

		void	makeSound() const;
};

#endif