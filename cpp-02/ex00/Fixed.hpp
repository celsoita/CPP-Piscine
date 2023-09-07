#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed
{
	private:
		int	_FixPoint;
		static const int _fractional = 8;
	public:
		Fixed(void);//default construct
		Fixed(int const Fixpoint);//parametric construct
		Fixed(Fixed const & src);//copy construct
		Fixed & operator=(Fixed const &rhs);// A copy assignment operator overload.
		~Fixed(void);//destructor.
		int getRawBits( void ) const;//returns the raw value of the fixed-point value.
		void setRawBits( int const raw);// sets the raw value of the fixed-point number.

};

#endif