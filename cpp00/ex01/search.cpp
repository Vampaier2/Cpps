#include "phoneBook.hpp"

Contact PhoneBook::getContact(int index) const
{
	return (contacts[index]);
}

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

void show_search_table(const PhoneBook &phoneBook)
{
	int i = 0;
	print_table_header();
	while(i < phoneBook.total_contacts)
	{
		Contact contact = phoneBook.getContact(i);

		std::cout << std::setw(10) << i;
		std::cout << "|";
		std::cout << std::setw(10) << filter_string(contact.firstname);
		std::cout << "|";
		std::cout << std::setw(10) << filter_string(contact.lastname);
		std::cout << "|";
		std::cout << std::setw(10) << filter_string(contact.nickname);
		std::cout << "|";
		std::cout << std::endl;
		i++;
	}
}
