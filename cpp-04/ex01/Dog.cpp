#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << " Dog constructor called " << std::endl;
	this->_brain = new Brain();
}
Dog::Dog(std::string type)
{
	std::cout << " Dog constructor called " << std::endl;
	this->_type = type;
	this->_brain = new Brain();
}
Dog::Dog(Dog const &src)
{
	_brain = new Brain(*(src._brain));
	std::cout << " Dog copy constructor called " << std::endl;
	this->_type = src._type;
}
Dog& Dog::operator=(Dog const &rhs)
{
	if(this != &rhs)
	{
		this->_type = rhs._type;
		delete this->_brain;
		this->_brain = new Brain(*(rhs._brain));
	}
	return(*this);
}
const std::string Dog::getIdeas(int i) const
{
	return(this->_brain->getIdeas(i));
}
void Dog::setIdeas(std::string str, int i)
{
	this->_brain->setIdeas(str, i);
}
void Dog::makeSound(void) const
{
	std::cout << " Dog sound " << std::endl;
}
Dog::~Dog(void)
{
	std::cout << " Dog deconstructor called " << std::endl;
 	delete this-> _brain;
}