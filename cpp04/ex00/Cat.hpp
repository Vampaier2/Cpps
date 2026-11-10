#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>//std
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();								// 1º Default constructor
		Cat(const Cat& other);				// 2º Copy constructor(Creates a new object as a copy of another:)
		Cat& operator=(const Cat& other);	// 3º Copy assignment (so it's possible to do a = b)
		~Cat();								// 4º Destructor

		void	makeSound() const;
};

#endif