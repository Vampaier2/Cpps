#include "phoneBook.hpp"

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

void get_input(std::string msg, std::string &input)
{
	std::cout << msg;
	std::getline(std::cin, input);
	while (input.empty() || checkforinvalidstr(input))
	{
		std::cout << msg;
		std::getline(std::cin, input);
	}
}

//debug
void PhoneBook::fill_phonebook()
{
	Contact newContact;
	int	i = 0;
	while(i < 7)
	{
		newContact.firstname = "aaaaaaaaaa";
		newContact.lastname = "aaa";
		newContact.nickname = "bbbbbbbbbbbb";
		newContact.phonenumber = "a";
		newContact.darksecret = "ccccccccc";
		contacts[i] = newContact;
		i++;
	}
	n_contact = 7;
	total_contacts = 7;
}

void PhoneBook::addContact()
{
	Contact newContact;

	get_input("Firstname: ", newContact.firstname);
	//Lastname
	get_input("Lastname: ", newContact.lastname);
	//Nickname
	get_input("Nickname: ", newContact.nickname);
	//Phonenumber
	get_input("Phonenumber: ", newContact.phonenumber);
	//Darksecret
	get_input("Darksecret: ", newContact.darksecret);

	contacts[n_contact] = newContact;
	std::cout << "\n!!!New Contact added to Phonebook!!!\n" << std::endl;
	n_contact++;
	if (total_contacts != 8)
		total_contacts++;
	if (n_contact == 8)
		n_contact = 0;
}
