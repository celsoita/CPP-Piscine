#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
	private:
	std::string _name;
	Weapon &_weapon;
	public:
	// HumanA();
	HumanA(const std::string &name, Weapon &weapoN);
	void setWeapon(Weapon weapon);
	void attack();
	~HumanA();

};

#endif