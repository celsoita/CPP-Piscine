#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	_FixPoint;
		static const int _fractional = 8;
		int raw;
	public:
		Fixed(void);//default construct
		Fixed(int const Fixpoint);//parametric construct
		Fixed(float const Fixpoint);//conver fixe-point value
		Fixed(Fixed const & src);//copy construct
		Fixed & operator=(Fixed const &rhs);// A copy assignment operator overload.
		~Fixed(void);//destructor.
		int getRawBits( void ) const;//returns the raw value of the fixed-point value.
		void setRawBits( int const raw);// sets the raw value of the fixed-point number.
		float toFloat( void ) const;
		int toInt( void ) const;
};
std::ostream& operator<<(std::ostream& o,Fixed const &rhs);

#endif
/*
Add the following public constructors and public member functions to your class:
• A constructor that takes a constant integer as a parameter.
It converts it to the corresponding fixed-point value. The fractional bits value is
initialized to 8 like in exercise 00.
• A constructor that takes a constant floating-point number as a parameter.
It converts it to the corresponding fixed-point value. The fractional bits value is
initialized to 8 like in exercise 00.
• A member function float toFloat( void ) const;
that converts the fixed-point value to a floating-point value.
• A member function int toInt( void ) const;
that converts the fixed-point value to an integer value.
And add the following function to the Fixed class files:
• An overload of the insertion («) operator that inserts a floating-point representation
of the fixed-point number into the output stream object passed as parameter.

*/