#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout <<"FragTrap constructor called" << std::endl;

}
FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
	std::cout <<"FragTrap constructor called" << std::endl;
	_Hitpoints = 100;
	_Energypoints = 100;
	_Attackdamage = 30;
}
FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
	*this = src;
}

FragTrap& FragTrap::operator=(FragTrap const &rhs)
{
	if (this != &rhs)
		this->_Name = rhs._Name;
	return (*this);
}

//action functions
void FragTrap::attack(const std::string& target)
{
	if (_Energypoints > 0)
	{
		std::cout << " FragTrap " << getName() << " attack " << target << " causing " << _Attackdamage << " points of damage"<<std::endl;
		_Energypoints--;
	}
	else
		std::cout << "out of energy" << std::endl;
}
void FragTrap::takeDamage(unsigned int amount)
{
	if (!_Hitpoints)
		std::cout << "dead" <<std::endl;
	else
	{
		if(amount > this->_Hitpoints)
			_Hitpoints = 0;
		else
			_Hitpoints -= amount;
		std::cout << " FragTrap " << getName() << " has taken damage " << amount << " points of damage"<<std::endl;
	}
}
void FragTrap::beRepaired(unsigned int amount)
{
	if (!_Hitpoints)
		std::cout << "dead" <<std::endl;
	else if(_Energypoints > 0 && _Hitpoints)
	{
		_Hitpoints += amount;
		_Energypoints--;
		std::cout <<" FragTrap "<< getName()<< " repaired " << amount << " points for repairing " << std::endl;
	}
	else
		std::cout << " not enough energy to do something " << std::endl;
}
void FragTrap::highFivesGuys(void)
{
	std::cout << "Can u give me a five ? " <<std::endl;
}
FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap deconstuctor called" << std::endl;
}
