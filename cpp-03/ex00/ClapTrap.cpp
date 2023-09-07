#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :_Energypoints(10) ,_Hitpoints(10) ,_Attackdamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string Name):_Energypoints(10) ,_Hitpoints(10) ,_Attackdamage(0)
{
	this->_Name = Name;
}
ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
}
std::string ClapTrap::getName(void)
{
	return(this->_Name);
}
int ClapTrap::getAttackDamage(void)
{
	return(this->_Attackdamage);
}
int ClapTrap::getHitpoints(void)
{
	return(this->_Hitpoints);
}
int ClapTrap::getEnergyPoints(void)
{
	return(this->_Energypoints);
}
void ClapTrap::setName(std::string name)
{
	this->_Name = name;
}
ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	if (this != &rhs)
		this->_Name = rhs._Name;
	return (*this);
}
//action functions
void ClapTrap::attack(const std::string& target)
{
	if (_Energypoints > 0)
	{
		std::cout << " ClapTrap " << getName() << " attack " << target << " causing " << _Attackdamage << " points of damage"<<std::endl;
		_Energypoints--;
	}
	else
		std::cout << "out of energy" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (!_Hitpoints)
		std::cout << "dead" <<std::endl;
	else
	{
		if(amount > this->_Hitpoints)
			_Hitpoints = 0;
		else
			_Hitpoints -= amount;
		std::cout << " ClapTrap " << getName() << " has taken damage " << amount << " points of damage"<<std::endl;
	}
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (!_Hitpoints)
		std::cout << "dead" <<std::endl;
	else if(_Energypoints > 0 && _Hitpoints)
	{
		_Hitpoints += amount;
		_Energypoints--;
		std::cout <<" ClapTrap "<< getName()<< " repared " << amount << " points fo reparing " << std::endl;
	}
	else
		std::cout << " not enough energy to do something " << std::endl;
}


ClapTrap::~ClapTrap(void)
{
	std::cout << "Default deconstructor called" << std::endl;
}