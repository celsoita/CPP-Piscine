#include "Fixed.hpp"

Fixed::Fixed(void) :_FixPoint(0)
{
	std::cout << "Default  Constuctor called" << std::endl;
	return ;
}

Fixed::Fixed(int const Fixpoint)
{
	std::cout << "Int constructor called" << std::endl;
	this->_FixPoint = Fixpoint * (1 << _fractional);	
}
Fixed::Fixed(float const Fixpoint)
{
	std::cout << "Float constructor called" << std::endl;
	this->_FixPoint = roundf(Fixpoint *(1 << _fractional));
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

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_FixPoint = rhs.getRawBits();
	return *this;
}

void Fixed::setRawBits(int const raw)
{
	this->_FixPoint = raw;
}
float Fixed::toFloat( void ) const
{
	float fixpoint = this->_FixPoint;
	fixpoint = fixpoint / (1 << _fractional);
	return fixpoint;
}
int Fixed::toInt(void) const
{
	int fixpoint = this->_FixPoint;
	fixpoint = fixpoint / (1 << _fractional);
	return fixpoint;
}
Fixed::~Fixed (void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
std::ostream& operator<<(std::ostream& o,Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}
/*
	comparison
*/
bool Fixed::operator>(Fixed const &rhs) const
{
	return (this->toFloat() > rhs.toFloat());
}
bool Fixed::operator<(Fixed const &rhs) const
{
	return (this->toFloat() < rhs.toFloat());
}
bool Fixed::operator<=(Fixed const &rhs) const
{
	return((this->toFloat() <= rhs.toFloat()));
}
bool Fixed::operator>=(Fixed const &rhs) const
{
	return((this->toFloat() >= rhs.toFloat()));
}
bool Fixed::operator==(Fixed const &rhs) const
{
	return((this->toFloat() == rhs.toFloat()));
}
bool Fixed::operator!=(Fixed const &rhs) const
{
	return((this->toFloat() != rhs.toFloat()));
}
/*
		arithmetic
	~~~~~~~~~~~~~~~~
*/
Fixed Fixed::operator+(Fixed const &rhs) const
{
	return (this->toFloat() + rhs.toFloat());
}
Fixed Fixed::operator-(Fixed const &rhs) const
{
	return (this->toFloat() - rhs.toFloat());
}
Fixed Fixed::operator*(Fixed const &rhs) const
{
	return (this->toFloat() * rhs.toFloat());
}
Fixed Fixed::operator/(Fixed const &rhs) const
{
	return (this->toFloat() / rhs.toFloat());
}
/*
	 increment/decrement
*/
Fixed& Fixed::operator++(void)
{
	++this->_FixPoint;
	return(*this);
}
Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	tmp._FixPoint = this->_FixPoint++;
	return (tmp);
}
Fixed& Fixed::operator--(void)
{
	--this->_FixPoint;
	return(*this);
}
Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	tmp._FixPoint = this->_FixPoint--;
	return (tmp);
}
Fixed& Fixed::min(Fixed &a, Fixed&b)
{
	return(a.getRawBits() < b.getRawBits() ? a : b);
}
const Fixed& Fixed::min(Fixed const &a, const Fixed &b)
{
	return(a.getRawBits() < b.getRawBits() ? a : b);
}
Fixed&	Fixed::max(Fixed &a, Fixed &b)
{
	return(a.getRawBits() > b.getRawBits() ? a : b);
}
const Fixed& Fixed::max(Fixed const &a, const Fixed &b)
{
	return(a.getRawBits() > b.getRawBits() ? a : b);
}