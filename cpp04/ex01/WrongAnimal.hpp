#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>//std
#include <string>

class WrongAnimal
{
	protected:
		std::string type;	//Type
	public:
		WrongAnimal();								// 1º Default constructor
		WrongAnimal(const WrongAnimal& other);			// 2º Copy constructor(Creates a new object as a copy of another:)
		WrongAnimal& operator=(const WrongAnimal& other);	// 3º Copy assignment (so it's possible to do a = b)
		virtual ~WrongAnimal();								// 4º Destructor

		std::string getType() const;
		void	makeSound() const;
};

#endif