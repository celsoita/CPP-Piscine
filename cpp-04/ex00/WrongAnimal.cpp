#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("wrongAnimal")
{
	std::cout << " WrongAnimal constructor called " << std::endl;	
}
WrongAnimal::WrongAnimal(std::string  type)
{
	std::cout << " WrongAnimal constructor called " << std::endl;	
	this->_type = type;
}
std::string WrongAnimal::getType(void) const
{
	return(this->_type);
}
WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << " WrongAnimal copy constructor called " << std::endl;
	*this = src; 
}
WrongAnimal& WrongAnimal::operator=(WrongAnimal const &rhs)
{
	if(this != &rhs)
		this->_type = rhs._type;
	return(*this);
}
void WrongAnimal::makeSound(void) const
{
	std::cout << " WrongAnimal sound" << std::endl;
}
void WrongAnimal::setType(std::string newType)
{
	this->_type = newType;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << " WrongAnimal deconstructor called " << std::endl;
}