#include "Point.hpp"
#include "Fixed.hpp"

// Helper function to compute the sign of a cross product
// Returns the z-component of the cross product of vectors (p1->p2) x (p1->p3)
static Fixed sign(Point const p1, Point const p2, Point const p3)
{
    return (p2.getX() - p3.getX()) * (p1.getY() - p3.getY()) - (p1.getX() - p3.getX()) * (p2.getY() - p3.getY());
}

// Barycentric Space Partition function
// Returns true if the point is strictly inside the triangle (not on edges or vertices)
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    // Calculate the signed areas using cross product
    Fixed d1 = sign(point, a, b);
    Fixed d2 = sign(point, b, c);
    Fixed d3 = sign(point, c, a);

    // Point is strictly inside if all three cross products have the same sign
    // and none of them are zero (zero means on an edge or vertex)
    bool all_positive = (d1 > 0) && (d2 > 0) && (d3 > 0);
    bool all_negative = (d1 < 0) && (d2 < 0) && (d3 < 0);

    return all_positive || all_negative;
}