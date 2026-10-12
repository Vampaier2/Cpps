#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include <iomanip>
#include <iostream>
#include "Contact.hpp"


class PhoneBook
{
	private:
		Contact contacts[8];
		int	n_contact;
		int	total_contacts;
	public:
		PhoneBook();
		int		addContact();
		Contact	getContact(int index) const;
		int		getTotalContacts() const;
};

//add.cpp
int get_input(std::string msg, std::string &input);

//search.cpp
void print_table_header(void);
void show_search_table(const PhoneBook &phoneBook);


#endif

