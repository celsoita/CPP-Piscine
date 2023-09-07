#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << " Brain constructor called " << std::endl;
	for(int i = 0; i < 100; ++i)
	{
		this->_ideas[i].erase();
	}
}
Brain& Brain::operator=(Brain const &rhs)
{
	for(int i = 0; i < 100; ++i)
	{
		this->_ideas[i].erase();
	}
	if (this != &rhs)
	{	for(int i = 0; i < 100; ++i)
		{
			this->_ideas[i] = rhs._ideas[i];
		}
	}
	return(*this);
}

Brain::Brain(Brain const &src)
{
	std::cout << " Brain copy constructor called " << std::endl;
	for(int i = 0; i < 100; ++i)
	{
		this->_ideas[i] = src._ideas[i];
	}
}
const std::string Brain::getIdeas(int i) const
{
	return (this->_ideas[i]);
}
void Brain::setIdeas(std::string str, int i)
{
	this->_ideas[i] = str;
}
Brain::~Brain(void)
{
	std::cout << " Brain deconstructor called " << std::endl;
}