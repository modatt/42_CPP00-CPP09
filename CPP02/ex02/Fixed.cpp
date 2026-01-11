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

// additional contructor 
Fixed::Fixed(const int &nbr)
{
	// convert
	// this->fixedPoint = nbr * 256;
	this->fixedPoint = roundf(nbr * (1 << fracBits));
}

Fixed::Fixed(const float &fnbr)
{
	this->fixedPoint = roundf(fnbr * (1 << fracBits));
}

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

float Fixed::toFloat( void ) const
{
	return (float)this->fixedPoint/ (1 << fracBits);
}

int 	Fixed::toInt( void ) const
{
	return this->fixedPoint/ (1 << fracBits);
}

// static func
Fixed &Fixed::min(Fixed &fixedPoint1, Fixed &fixedPoint2)
{
	if (fixedPoint1 > fixedPoint2)
	{
		return fixedPoint2;
	}
	return fixedPoint1;
}
const Fixed &Fixed::min(const Fixed &fixedPoint1, const Fixed &fixedPoint2)
{
	if (fixedPoint1 < fixedPoint2)
		return fixedPoint1;
	return fixedPoint2;
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b) ? a : b;
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (b > a) ? b : a;
}
		

// operator

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}
