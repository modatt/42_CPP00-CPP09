#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	// Test 1: Point inside triangle
	std::cout << "\n=== Test 1: Point inside triangle ===\n";
	Point a(0.0f, 0.0f);
	Point b(10.0f, 0.0f);
	Point c(0.0f, 10.0f);
	Point p1(2.0f, 2.0f);
	std::cout << "Point (2, 2) inside triangle (0,0)-(10,0)-(0,10): ";
	std::cout << (bsp(a, b, c, p1) ? "TRUE" : "FALSE") << std::endl;

	// Test 2: Point outside triangle
	std::cout << "\n=== Test 2: Point outside triangle ===\n";
	Point p2(5.0f, 10.0f);
	std::cout << "Point (5, 10) outside triangle (0,0)-(10,0)-(0,10): ";
	std::cout << (bsp(a, b, c, p2) ? "TRUE" : "FALSE") << std::endl;

	// Test 3: Point on vertex
	std::cout << "\n=== Test 3: Point on vertex ===\n";
	Point p3(0.0f, 0.0f);
	std::cout << "Point (0, 0) on vertex (0,0): ";
	std::cout << (bsp(a, b, c, p3) ? "TRUE" : "FALSE") << std::endl;

	// Test 4: Point on edge
	std::cout << "\n=== Test 4: Point on edge ===\n";
	Point p4(5.0f, 0.0f);
	std::cout << "Point (5, 0) on edge: ";
	std::cout << (bsp(a, b, c, p4) ? "TRUE" : "FALSE") << std::endl;

	// Test 5: Another inside point
	std::cout << "\n=== Test 5: Another inside point ===\n";
	Point p5(3.0f, 3.0f);
	std::cout << "Point (3, 3) inside triangle: ";
	std::cout << (bsp(a, b, c, p5) ? "TRUE" : "FALSE") << std::endl;

	// Test 6: Near vertex (inside)
	std::cout << "\n=== Test 6: Near vertex (inside) ===\n";
	Point p6(0.5f, 0.5f);
	std::cout << "Point (0.5, 0.5) near vertex (inside): ";
	std::cout << (bsp(a, b, c, p6) ? "TRUE" : "FALSE") << std::endl;

	return 0;
}
