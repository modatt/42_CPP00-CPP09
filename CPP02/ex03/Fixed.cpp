#include "Fixed.hpp"

// init static
const int Fixed::fracBits = 8;

// contructor 
Fixed::Fixed(): fixedPoint(0) {};

//  Copy Constructor
Fixed::Fixed(const Fixed &fixedCopy)
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
Fixed& Fixed::operator=(const Fixed &fixedCopy)
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
// operators work only on build in types (int, string, float, char ..etc);
// But for custom types (classes/structs), C++ doesn’t know what + or > means.
// an object/class is a new type c++ does not recognize, it is not in his build in list
// therefore, You teach C++ how to apply operators to your custom objects.
// You make your objects behave like built-in types


/*
There is 3 types of operators we comminly overload:
- First Type: 6 Comparison operators

Symbols: >, <, >=, <=, ==, !=

Purpose: Compare two objects and return true or false

bellow signature of function read as follows:

*this "a" > "b"
bool 	Fixed::operator>(const Fixed &other) const
a>b 
a.operator>(b)
*/

// compersion 1
bool 	Fixed::operator>(const Fixed &other) const
{
	return this->fixedPoint > other.fixedPoint; 
}

// compersion 2
bool 	Fixed::operator<(const Fixed &other) const
{
	return this->fixedPoint < other.fixedPoint;
}

// compersion 3
bool 	Fixed::operator>=(const Fixed &other) const
{
	return this->fixedPoint >= other.fixedPoint; 
}

// compersion 4
bool 	Fixed::operator<=(const Fixed &other) const
{
	return this->fixedPoint <= other.fixedPoint;
}

// compersion 5
bool	Fixed::operator==(const Fixed &other) const
{
	return this->fixedPoint == other.fixedPoint;
}

// compersion 6
bool 	Fixed::operator!=(const Fixed &other) const
{
	return this->fixedPoint != other.fixedPoint;
	// return !(*this == other);
}

// second: 4 Arithmetic
/*
Symbols: +, -, *, /

Purpose: Define how two objects combine to produce a new object
*/
Fixed 	Fixed::operator+(const Fixed &other) const
{
	Fixed result;
	result.setRawBits(this->fixedPoint + other.fixedPoint);
	return result;
}

Fixed 	Fixed::operator-(const Fixed &other) const
{
	Fixed result;
	result.setRawBits(this->fixedPoint - other.fixedPoint);
	return result;
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	Fixed result;
	result.setRawBits((this->fixedPoint * other.fixedPoint) >> fracBits);
	return result;
}

Fixed 	Fixed::operator/(const Fixed &other) const 
{
	Fixed result;
	result.setRawBits((this->fixedPoint << fracBits) / other.fixedPoint);
	return result;
}


// Increment/ Decrement

// pre-increment ++a
// Increase the value first, then return the updated object.
// Why this works:
// fixedPoint += 1 → adds ε
// Returning *this allows:
// ++(++a);
Fixed &Fixed::operator++()
{
	this->fixedPoint += 1;
	return *this;
}

// post-increment a++
// Return the old value, then increase the object.
Fixed Fixed::operator++(int)
{
	Fixed tmp(*this); // save/copy the current object
	fixedPoint += 1; // then increment
	return tmp;
}
// Why the int?
// It’s a dummy parameter so C++ can distinguish postfix from prefix.
// return the old becasue is going to do operation & ++ on it , but actual value has increased the class member value.
// pre-decrement
Fixed 	&Fixed::operator--()
{
	this->fixedPoint -= 1;
	return *this; // updated object
}


Fixed 	Fixed::operator--(int)
{
	Fixed tmp(*this);
	fixedPoint -= 1;
	return (tmp);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}
