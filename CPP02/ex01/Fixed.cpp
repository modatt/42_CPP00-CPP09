#include "Fixed.hpp"

// init static
const int Fixed::fracBits = 8;

// contructor 
Fixed::Fixed(): fixedPoint(0) {std::cout << "Default constructor called\n";}


//  Copy Constructor
Fixed::Fixed(const Fixed &fixedCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixedCopy;
}

// destructor
Fixed::~Fixed() { std::cout << "Destructor called\n"; }

// additional contructor 
Fixed::Fixed(const int &nbr)
{
	// convert
	// this->fixedPoint = nbr * 256;
	this->fixedPoint = roundf(nbr * (1 << fracBits));
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float &fnbr)
{
	this->fixedPoint = roundf(fnbr * (1 << fracBits));
	std::cout << "Float constructor called\n";
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
Fixed& Fixed::operator=( const Fixed &fixedCopy)
{
	std::cout << "Copy assignment operator called\n";
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
		

// operator

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}
