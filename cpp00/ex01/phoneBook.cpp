//#include <string>
#include "phoneBook.hpp"

void stopsign(void)
{
	std::string input;

	std::cout << "Press 'Enter' to continue...";
	std::getline(std::cin, input);
}

PhoneBook::PhoneBook()
{
	n_contact = 0;
	total_contacts = 0;
}


std::string	ft_toupper_str(std::string s)
{
	int i = 0;
	while(s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	return (s);
}
//----------ADD----------------------


//------------------------------------
int main(void)
{
	PhoneBook phoneBook;
	std::string command;
	//int	contacts = 0;

	while (1)
	{
		std::cout << "PhoneBook" << std::endl << "->ADD\n->SEARCH\n->EXIT" << std::endl;
		std::getline(std::cin, command);
		//command = ft_toupper_str(command);
		
		if (command == "ADD")
		{
			phoneBook.addContact();
			stopsign();
		}
		if (command == "SEARCH")
		{
			show_search_table(phoneBook);
			stopsign();
		}
		if (command == "EXIT")
		{
			break;
		}
		/* if (command == "FILL")
		{
			phoneBook.fill_phonebook();
		} */

		//system("clear")
		std::cout << "\033[2J\033[H"; // optional
	}
	//std::cout << std::endl;
	return (0);
}