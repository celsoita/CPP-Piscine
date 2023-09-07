#include "HumanA.hpp"

/*
we can write 
_name = name;
_weapon = weapoN;
*/
HumanA::HumanA(const std::string& name,Weapon &weapoN) :_name(name), _weapon(weapoN)
{
	std::cout << "HumanA " << name << " created with ";
	std::cout << weapoN.getType() << std::endl;
}

void HumanA::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
}
void HumanA::attack()
{
	std::cout << this->_name << " attacks with his " << \
		this->_weapon.getType() << std::endl;
}
HumanA::~HumanA()
{
	std::cout << "HumanA " << this->_name << " destroyed" << std::endl;
}