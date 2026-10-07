#include "Harl.hpp"

void print(std::string text)
{
    std::cout << text << std::endl;
}

int	parsing(std::string complain)
{
	if(complain == "DEBUG" || complain == "INFO" || complain == "WARNING" || complain == "ERROR")
	{
		return (0);
	}
	return (1);
}

int main(int argc, char **argv)
{
	Harl harl;
	
	if(argc != 2)
		return (1);

	if(parsing(argv[1]) == 1)
	{
		return (print("You didn’t give me a valid input!"), 1);
	}
	
	harl.complain(std::string(argv[1]));
	return (0);
}
