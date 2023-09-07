#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>

class Weapon
{
	private:
	std::string _type;
	public:
		Weapon();
		Weapon(std::string weapon);
		void setWeapon(std::string weapon);
		std::string&	getType();
		void	setType(const std::string& type);
		~Weapon();
};

#endif