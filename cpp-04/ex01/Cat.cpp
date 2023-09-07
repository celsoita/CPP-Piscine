#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << " Cat constructor called " <<std::endl;
	this->_brain = new Brain();
}
Cat::Cat(std::string type)
{
	std::cout << " Cat constructor called " << std::endl;
	this->_type = type;
	this->_brain = new Brain();
}

Cat::Cat(Cat const &src)
{
	_brain = new Brain(*(src._brain));
	std::cout << " Cat copy constructor called " << std::endl;
	this->_type = src._type;
}
Cat& Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
		delete this->_brain;
		this->_brain = new Brain(*(rhs._brain));
	}
	return(*this);
}
const std::string Cat::getIdeas(int i) const
{
	return(this->_brain->getIdeas(i));
}
void Cat::setIdeas(std::string str, int i)
{
	this->_brain->setIdeas(str, i);
}
void Cat::makeSound(void) const
{
	std::cout << " Cat sound " << std::endl;
}
Cat::~Cat(void)
{
	std::cout << " Cat deconstructor called " <<std::endl;
 	delete this-> _brain;
}
