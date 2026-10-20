#include "Zombie.hpp"

/* 
basically what its doing is:
    1º->Zombie aux;

    2º->aux = Zombie(name);

    3º->aux = announce();
} */

void randomChump(std::string name)
{
    Zombie aux(name);

    aux.announce();
}
