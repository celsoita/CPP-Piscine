#include "Weapon.hpp"

Weapon::Weapon()
{
	;
}
Weapon::Weapon(std::string weapon)
{
	this->_type = weapon;
}
void Weapon::setWeapon(std::string weapon)
{
	this->_type = weapon;
}
std::string&	Weapon::getType()
{
	return(this->_type);
}
void	Weapon::setType(const std::string& type)
{
	this->_type = type;
}
Weapon::~Weapon()
{
	;
}