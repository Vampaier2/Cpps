#include "PhoneBook.hpp"

//contact
Contact PhoneBook::getContact(int index) const
{
	return (contacts[index]);
}

PhoneBook::PhoneBook()
{
	n_contact = 0;
	total_contacts = 0;
}

int PhoneBook::getTotalContacts() const
{
    return (total_contacts);
}