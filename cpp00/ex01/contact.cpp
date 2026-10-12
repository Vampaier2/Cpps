#include "phoneBook.hpp"

//contact
Contact PhoneBook::getContact(int index) const
{
	return (contacts[index]);
}

//name
std::string Contact::getFirstname() const
{
    return this->firstname;
}

void Contact::setFirstname(std::string firstname)
{
    this->firstname = firstname;
}

//lastname
std::string Contact::getLastname() const
{
    return this->lastname;
}

void Contact::setLastname(std::string lastname)
{
    this->lastname = lastname;
}

//nickname
std::string Contact::getNickname() const
{
    return this->nickname;
}

void Contact::setNickname(std::string nickname)
{
    this->nickname = nickname;
}

//phone
std::string Contact::getPhonenumber() const
{
    return this->phonenumber;
}

void Contact::setPhonenumber(std::string phonenumber)
{
    this->phonenumber = phonenumber;
}

//secret
std::string Contact::getDarksecret() const
{
    return this->darksecret;
}

void Contact::setDarksecret(std::string darksecret)
{
    this->darksecret = darksecret;
}