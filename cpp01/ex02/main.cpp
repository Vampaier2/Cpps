#include <string>
#include <iomanip>
#include <iostream>

int main()
{
	
	
	std::string s = "HI THIS IS BRAIN";
	std::string *stringPTR = &s;
    std::string &stringREF = s;

	//Your program must print:
	//• The memory address of the string variable.
	std::cout << &s << std::endl;

	//• The memory address held by stringPTR.
	std::cout << stringPTR << std::endl;

	//• The memory address held by stringREF.
	std::cout << &stringREF << std::endl;

	//And then:
	
	//• The value of the string variable.
	std::cout << s << std::endl;
	//• The value pointed to by stringPTR.
	std::cout << *stringPTR << std::endl;
	//• The value pointed to by stringREF.
	std::cout << stringREF << std::endl;
	return (0);
}
