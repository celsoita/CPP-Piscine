#include "Fixed.hpp"

Fixed::Fixed(void) :_FixPoint(0)
{
	std::cout << "Default  Constuctor called" << std::endl;
	return ;
}

Fixed::Fixed(int const Fixpoint) :_FixPoint(Fixpoint)
{
	std::cout << "Parametric Constuctor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const& src)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
	return ;
}
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_FixPoint;
}

Fixed& Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
		this->_FixPoint = rhs.getRawBits();
	return *this;
}

void Fixed::setRawBits(int const raw)
{
	this->_FixPoint = raw;
}

Fixed::~Fixed (void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
