#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout <<"ScavTrap constructor called" << std::endl;

}
ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	*this = src;
}
ScavTrap& ScavTrap::operator=(ScavTrap const &rhs)
{
	if (this != &rhs)
		this->_Name = rhs._Name;
	return (*this);
}

ScavTrap::ScavTrap(std::string Name) :ClapTrap(Name)
{
	std::cout <<"ScavTrap constructor called" << std::endl;
	_Hitpoints = 100; 
    _Energypoints = 50;
    _Attackdamage = 20;
}
//action functions
void ScavTrap::attack(const std::string& target)
{
	if (_Energypoints > 0)
	{
		std::cout << " ScavTrap " << getName() << " attack " << target << " causing " << _Attackdamage << " points of damage"<<std::endl;
		_Energypoints--;
	}
	else
		std::cout << "out of energy" << std::endl;
}
void ScavTrap::takeDamage(unsigned int amount)
{
	if (!_Hitpoints)
		std::cout << "dead" <<std::endl;
	else
	{
		if(amount > this->_Hitpoints)
			_Hitpoints = 0;
		else
			_Hitpoints -= amount;
		std::cout << " ScavTrap " << getName() << " has taken damage " << amount << " points of damage"<<std::endl;
	}
}
void ScavTrap::beRepaired(unsigned int amount)
{
	if (!_Hitpoints)
		std::cout << "dead" <<std::endl;
	else if(_Energypoints > 0 && _Hitpoints)
	{
		_Hitpoints += amount;
		_Energypoints--;
		std::cout <<" ScavTrap "<< getName()<< " repaired " << amount << " points for repairing " << std::endl;
	}
	else
		std::cout << " not enough energy to do something " << std::endl;
}
void ScavTrap::guardGate(void)
{
	std::cout<< "  ScavTrap " << getName() << " is now in Gate keeper mode " <<std::endl;
}
ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap deconstructor called" << std::endl;
}