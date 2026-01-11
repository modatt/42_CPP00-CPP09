#include "Fixed.hpp"

// init static
const int Fixed::fracBits = 8;

// contructor 
Fixed::Fixed(): fixedPoint(0) {std::cout << "Default constructor called\n";}

//  Copy Constructor
Fixed::Fixed(const Fixed &fixedCopy)
{
	std::cout << "Copy constructor called\n";
	*this = fixedCopy; // trigger assignment log for expected output
}

// destructor
Fixed::~Fixed() {std::cout << "Destructor called\n";}

// getter
int 	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return this->fixedPoint; 
}

// setter
void 	Fixed::setRawBits( int const raw )
{
	this->fixedPoint = raw;
}

// operator 
Fixed& Fixed::operator=(const Fixed &fixedCopy)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &fixedCopy)
		this->fixedPoint = fixedCopy.fixedPoint;
	return *this; 
}
