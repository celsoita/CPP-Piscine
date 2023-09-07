#include "globlib.h"



	std::string Contact::getName()
	{
		std::string name;
		name = this->Name;
		return (name);
	}

	std::string Contact::getLastName()
	{
		std::string lastname;
		lastname = this->Last_Name;
		return (lastname);
	}

	std::string Contact::getNickname()
	{
		std::string Nickname;
		Nickname = this->Nickname;
		return (Nickname);
	}
	std::string Contact::getPhone_Number()
	{
		std::string phone_number;
		phone_number = this->Phone_Number;
		return (phone_number);
	}
	std::string Contact::getDarkest_Secret()
	{
		std::string darkest_secret;
		darkest_secret = this->Darkest_Secret;
		return(darkest_secret);
	}
	//stessa cosa per tutti i dati privati
					//set
	//////////////////////////////////////////////////
	void Contact::setName(std::string newname)
	{
		this->Name = newname;
	}
	void Contact::setLast_Name(std::string last_name)
	{
		this->Last_Name = last_name;
	}
	void Contact::setNickname(std::string nickname)
	{
		this->Nickname = nickname;
	}
	void Contact::setPhone_Number(std::string phone_number)
	{
		this->Phone_Number = phone_number;
	}
	void Contact::setDarkest_Secret(std::string darkest_secret)
	{
		this->Darkest_Secret = darkest_secret;
	}
	/////
