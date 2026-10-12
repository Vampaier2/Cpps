#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include <iomanip>
#include <iostream>
#include "contact.hpp"


class PhoneBook
{
	private:
		Contact contacts[8];
	public:
		int	n_contact;
		int	total_contacts;
		PhoneBook();
		int addContact();
		//void fill_phonebook();
		Contact getContact(int index) const;
};

//add.cpp
int get_input(std::string msg, std::string &input);

//search.cpp
void print_table_header(void);
void show_search_table(const PhoneBook &phoneBook);


#endif

