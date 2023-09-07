#include "Cat.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	std::cout << " Cat constructor called " <<std::endl;
}
Cat::Cat(std::string type)
{
	std::cout << " Cat constructor called " << std::endl;
	this->_type = type;
}

Cat::Cat(Cat const &src)
{
	std::cout << " Cat copy constructor called " << std::endl;
	*this = src;
}
Cat& Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return(*this);
}
void Cat::makeSound(void) const
{
	std::cout << " Cat sound " << std::endl;
}
Cat::~Cat(void)
{
	std::cout << " Cat deconstructor called " <<std::endl;
}
