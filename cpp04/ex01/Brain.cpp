#include "Brain.hpp"

//---------- Orthodox Canonical Form ------------

// Default constructor, so it creates a structor
Brain::Brain()
{
	std::cout << "Default Brain constructor called" << std::endl;
}

//  Copy constructor(Creates a new object of copy of another:)
Brain::Brain(const Brain& other)
{
    std::cout << "Copy Brain constructor called" << std::endl;
    *this = other;
}

//Copy assignment (so i can do ex: a = b)
Brain& Brain::operator=(const Brain& other)
{
    std::cout << "Copy Brain assignment operator called " << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
        {
            this->ideas[i] = other.ideas[i];
        }
    }
    return (*this);
}

//   Destructor (it destroyes, idk what else to say)
Brain::~Brain()
{
	std::cout << "!!!Brain destructor called!!!" << std::endl;
}

//---------- Get Set ------------

void Brain::setIdea(int index, const std::string& idea)
{
    if (index < 0 || index >= 100)
    {
        return;
    }

    this->ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
    if (index < 0 || index >= 100)
    {
        return ("");
    }

    return (this->ideas[index]);
}
