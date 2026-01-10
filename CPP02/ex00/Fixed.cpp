#include "Fixed.hpp"

// init static
const int Fixed::fracBits = 8;

// contructor 
Fixed::Fixed(): fixedPoint(0) {};

//  Copy Constructor
Fixed::Fixed(Fixed &fixedCopy)
{
	this->fixedPoint = fixedCopy.fixedPoint;
}

// destructor
Fixed::~Fixed() {}

// getter
int 	Fixed::getRawBits( void ) const
{
	return this->fixedPoint; 
}

// setter
void 	Fixed::setRawBits( int const raw )
{
	this->fixedPoint = raw;
}

// operator 
Fixed& Fixed::operator=(Fixed &fixedCopy)
{
	if (this != &fixedCopy)
		this->fixedPoint = fixedCopy.fixedPoint;
	return *this; 
}
