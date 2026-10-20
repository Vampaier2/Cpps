#include "Zombie.hpp"

// heap or stack 
int main()
{
    Zombie *fruta = newZombie("Banana");
    //pointer = stack| points to a Zombie = heap
    fruta->announce();
    delete fruta;

    randomChump("Pera"); //dies/delete automaticaly after exits functions

    return (0);
}