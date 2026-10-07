#include "Harl.hpp"

void Harl:: debug( void )
{
    print("I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!");
} 
void Harl:: info( void )
{
    print("I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!");
}   
void Harl:: warning( void )
{
    print("I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.");
} 
void Harl:: error( void )
{ 
    print("This is unacceptable! I want to speak to the manager now.");
}  

void Harl::complain(std::string level)
{
    void (Harl::*function)(void);

    if (level == "DEBUG")
    {
        function = &Harl::debug;
    }
    else if (level == "INFO")
    {
        function = &Harl::info;
    }
    else if (level == "WARNING")
    {
        function = &Harl::warning;
    }
    else if (level == "ERROR")
    {
        function = &Harl::error;
    }
    else
    {
        return;
    }
    (this->*function)();
}