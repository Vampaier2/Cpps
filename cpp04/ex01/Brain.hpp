#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>//std
#include <string>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();								// 1º Default constructor
		Brain(const Brain& other);				// 2º Copy constructor(Creates a new object as a copy of another:)
		Brain& operator=(const Brain& other);	// 3º Copy assignment (so it's possible to do a = b)
		~Brain();								// 4º Destructor

	void        setIdea(int index, const std::string& idea);
	std::string getIdea(int index) const;   // check that index is in 0..99; return "" otherwise
};

#endif