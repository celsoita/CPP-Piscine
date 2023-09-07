#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << " Animal constructor called " << std::endl;
}

Animal::Animal(std::string type)
{
	std::cout << " Animal constructor called " << std::endl;
	this->_type = type;
}
Animal::Animal(Animal const &src)
{
	std::cout << " Animal copu constructor called " << std::endl; 
	*this = src;
}
Animal& Animal::operator=(Animal const &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}
std::string Animal::getType(void) const
{
	return(this->_type);
}

void Animal::setType(std::string NewAnimal)
{
	this->_type = NewAnimal;
}
void Animal::makeSound(void) const
{
	std::cout << " Wild sound from Animal " << std::endl;
}
Animal::~Animal(void)
{
	std::cout << " Animal deconstructor called " << std::endl;
}