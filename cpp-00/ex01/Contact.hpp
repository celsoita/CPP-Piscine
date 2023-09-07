#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact
{
	private:
		std::string Name;
		std::string Last_Name;
		std::string Nickname;
		std::string Phone_Number;
		std::string Darkest_Secret;	
	public:
	//get
	std::string getName();
	std::string getLastName();
	std::string getNickname();
	std::string getPhone_Number();
	std::string getDarkest_Secret();
	//set
	void setName(std::string Newname);
	void setLast_Name(std::string last_name);
	void setNickname(std::string nickname);
	void setPhone_Number(std::string phone_number);
	void setDarkest_Secret(std::string darkest_secret);
};

#endif
//: first name, last name, nickname, phone number, and darkest secret.