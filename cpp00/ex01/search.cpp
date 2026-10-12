#include "PhoneBook.hpp"

void print_table_header(void)
{
	std::cout << std::setw(10) << "Index";
	std::cout << "|";
	std::cout << std::setw(10) << "First Name";
	std::cout << "|";
	std::cout << std::setw(10) << "Last Name";
	std::cout << "|";
	std::cout << std::setw(10) << "Nickname";
	std::cout << "|";
	std::cout << std::endl;
}

std::string filter_string(std::string s)
{
    int i = 0;
    std::string filter_str;

    while (s[i] && i < 10)
    {
        filter_str += s[i];
        i++;
    }
    if (s.length() > 10)
        filter_str[9] = '.';
    return (filter_str);
}

void searchindexentry(const PhoneBook &phoneBook)
{
	 std::string reply;

    std::cout << "Enter contact index(or anything else for main menu): ";
    if (!std::getline(std::cin, reply))
		return;
    if (reply.length() != 1 || reply[0] < '1' || reply[0] > '8')
    {
        std::cout << "Invalid index!!" << std::endl;
        return;
    }

    int index = reply[0] - '1';

    if (index >= phoneBook.getTotalContacts())
    {
        std::cout << "No contact with that index!!" << std::endl;
        return;
    }

    Contact contact = phoneBook.getContact(index);

    std::cout << "First Name -->" << contact.getFirstname() << std::endl;
    std::cout << "Last Name -->" << contact.getLastname() << std::endl;
    std::cout << "Nickname -->" << contact.getNickname() << std::endl;
    std::cout << "Phonenumber -->" << contact.getPhonenumber() << std::endl;
    std::cout << "Darkest secret -->" << contact.getDarksecret() << std::endl;
}

void show_search_table(const PhoneBook &phoneBook)
{
	int i = 0;
	print_table_header();
	while(i < phoneBook.getTotalContacts())
	{
		Contact contact = phoneBook.getContact(i);

		std::cout << std::setw(10) << i+1;
		std::cout << "|";
		std::cout << std::setw(10) << filter_string(contact.getFirstname());
		std::cout << "|";
		std::cout << std::setw(10) << filter_string(contact.getLastname());
		std::cout << "|";
		std::cout << std::setw(10) << filter_string(contact.getNickname());
		std::cout << "|";
		std::cout << std::endl;
		i++;
	}

	searchindexentry(phoneBook);
}
