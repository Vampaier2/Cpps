#ifndef HUMANB_H
#define HUMANB_H

#include <string>
#include <iomanip>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
    Weapon *weapon;
    std::string name;

public:
    HumanB(std::string name);
    void attack(void);
    void setWeapon(Weapon &weapon);
};

#endif