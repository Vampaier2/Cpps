#include "PhoneBook.hpp"

void stopsign(void)
{
	std::string input;

	std::cout << "Press 'Enter' to continue...";
	std::getline(std::cin, input);
}

int main(int argc, char **argv)
{
	(void)argv;
	if(argc != 1)
		return (1);
	PhoneBook phoneBook;
	std::string command;
	//int	contacts = 0;

	while (1)
	{
		std::cout << "PhoneBook" << std::endl << "->ADD\n->SEARCH\n->EXIT" << std::endl;
		if (!std::getline(std::cin, command))
		{
			break;
		}
		if (command == "ADD")
		{
			if(phoneBook.addContact())
			{
				break;
			}
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

		std::cout << "\033[2J\033[H"; // optional
	}
	//std::cout << std::endl;
	return (0);
}