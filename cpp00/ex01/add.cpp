#include "phoneBook.hpp"

int checkinvalidphonens(std::string s)
{
	int i = 0;
	while(s[i])
	{
		if(s[i] < '0' || s[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

int get_phone(std::string msg, std::string &input)
{
	while (1)
	{
		std::cout << msg;
		if (!std::getline(std::cin, input))
		{
			return (1); // ctl+D check
		}
		if (!input.empty() && !checkinvalidphonens(input))
		{
			return (0);
		}
	}
	return (0);
}

int checkforinvalidstr(std::string s)
{
	int i = 0;
	while(s[i])
	{
		if(s[i] == '\t')
			return (1);
		i++;
	}
	return (0);
}

int get_input(std::string msg, std::string &input)
{
	while (1)
	{
		std::cout << msg;
		if (!std::getline(std::cin, input))
			return (1); // ctl+D check
		if (!input.empty() && !checkforinvalidstr(input))
			return (0);
	}
	return (0);
}

int PhoneBook::addContact()
{
	Contact newContact;
	std::string input;

	if (get_input("Firstname: ", input))
		return (1);
	newContact.setFirstname(input);
	if (get_input("Lastname: ", input))
		return (1);
	newContact.setLastname(input);
	if (get_input("Nickname: ", input))
		return (1);
	newContact.setNickname(input);
	if (get_phone("Phonenumber: ", input))
		return (1);
	newContact.setPhonenumber(input);
	if (get_input("Darksecret: ", input))
		return (1);
	newContact.setDarksecret(input);

	contacts[n_contact] = newContact;
	std::cout << "\n!!!New Contact added to Phonebook!!!\n" << std::endl;
	n_contact++;
	if (total_contacts != 8)
		total_contacts++;
	if (n_contact == 8)
		n_contact = 0;

	return (0);
}
