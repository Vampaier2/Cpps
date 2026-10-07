#ifndef HUMANA_H
#define HUMANA_H

#include <string>
#include <iomanip>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon& weapon;

public:
    HumanA(std::string name, Weapon &weapon);
    void attack(void);
};

#endif