#include "FragTrap.hpp"

// defualt 
FragTrap::FragTrap(): name("defualt"), hit(100), energy(100), damage(30)
{
    std::cout << "Defualt Constructor Called\n";
}

// para
FragTrap::FragTrap(const std::string _name): name(_name), hit(100), energy(100), damage(30)
{
    std::cout << "Constructor Called\n";
}