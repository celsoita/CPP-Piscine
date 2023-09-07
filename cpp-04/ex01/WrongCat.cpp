#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << " WrongCat constructor called " << std::endl;
}

WrongCat::WrongCat(std::string type)
{
	std::cout << " WrongCat constructor called " << std::endl;
	this->_type = type;
}

WrongCat::WrongCat(WrongCat const &src)
{
	std::cout << " WrongCat copy constructor called " << std::endl;
	*this = src;
}

WrongCat& WrongCat::operator=(WrongCat const &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return(*this);
}
std::string WrongCat::getType(void) const
{
	return (this->_type);
}
void WrongCat::setType(std::string newType)
{
	this->_type = newType;
}

void WrongCat::makeSound(void) const
{
	std::cout << " WrongCat sound " << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << " WrongCat deconstructor called " << std::endl;
}