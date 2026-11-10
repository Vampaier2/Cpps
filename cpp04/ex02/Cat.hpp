#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>//std
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* brain;
	public:
		Cat();								// 1º Default constructor
		Cat(const Cat& other);				// 2º Copy constructor(Creates a new object as a copy of another:)
		Cat& operator=(const Cat& other);	// 3º Copy assignment (so it's possible to do a = b)
		~Cat();								// 4º Destructor

		void	makeSound() const;
		Brain* getBrain(void) const;		// returns the private brain pointer
};

#endif