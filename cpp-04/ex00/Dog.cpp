#include "Dog.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	std::cout << " Dog constructor called " << std::endl;
}
Dog::Dog(std::string type)
{
	std::cout << " Dog constructor called " << std::endl;
	this->_type = type;
}
Dog::Dog(Dog const &src)
{
	std::cout << " Dog copy constructor called " << std::endl;
	*this = src;
}
Dog& Dog::operator=(Dog const &rhs)
{
	if(this != &rhs)
		this->_type = rhs._type;
	return(*this);
}
void Dog::makeSound(void) const
{
	std::cout << " Dog sound " << std::endl;
}
Dog::~Dog(void)
{
	std::cout << " Dog deconstructor called " << std::endl;
}