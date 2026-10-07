#include "Zombie.hpp"

/* void randomChump( std::string name )
{
    Zombie aux;

    aux = Zombie(name);

    aux = announce();
} */

void randomChump(std::string name)
{
    Zombie aux(name);

    aux.announce();
}
