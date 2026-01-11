#include "Point.hpp"

// Default constructor - initializes x and y to 0
Point::Point() : x(0), y(0)
{
    std::cout << "Point constructor called\n";
}

// Parameterized constructor - initializes with float values
Point::Point(const float a, const float b) : x(a), y(b)
{
    std::cout << "Point constructor called\n";
}

// Copy constructor
Point::Point(const Point &other) : x(other.x), y(other.y)
{
    std::cout << "Point copy constructor called\n";
}

// Copy assignment operator
Point &Point::operator=(const Point &other)
{
    std::cout << "Point assignment operator called\n";
    if (this != &other)
    {
        // Cannot assign to const members - they are immutable after construction
    }
    return *this;
}

// Destructor
Point::~Point()
{
    std::cout << "Point destructor called\n";
}

// Getter for x coordinate
Fixed Point::getX(void) const
{
    return x;
}

// Getter for y coordinate
Fixed Point::getY(void) const
{
    return y;
}