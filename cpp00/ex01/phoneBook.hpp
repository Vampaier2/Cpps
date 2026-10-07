#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include <iomanip>
#include <iostream>

class Contact
{
	public:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string darksecret;
};

class PhoneBook
{
	private:
		Contact contacts[8];
	public:
		int	n_contact;
		int	total_contacts;
		PhoneBook();
		void addContact();
		void fill_phonebook();
		Contact getContact(int index) const;
};

//add.cpp
void get_input(std::string msg, std::string &input);
//void addContact();
//void fill_phonebook();
//search.cpp
void print_table_header(void);
void show_search_table(const PhoneBook &phoneBook);


#endif

