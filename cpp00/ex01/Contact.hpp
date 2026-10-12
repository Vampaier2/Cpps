#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact
{
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string darksecret;
	public:
		//Contact getContact(int index) const;

		std::string getFirstname() const;
		void setFirstname(std::string firstname);

		std::string getLastname() const;
		void setLastname(std::string lastname);

		std::string getNickname() const;
		void setNickname(std::string nickname);

		std::string getPhonenumber() const;
		void setPhonenumber(std::string phonenumber);

		std::string getDarksecret() const;
		void setDarksecret(std::string darksecret);
};

#endif