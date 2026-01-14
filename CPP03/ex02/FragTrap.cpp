#include "FragTrap.hpp"

// defualt 
FragTrap::FragTrap(): ClapTrap()
{
    name = "default";
    hit = 100;
    energy = 100; 
    damage = 30;
    std::cout << "Defualt Constructor Called\n";
}

// para
FragTrap::FragTrap(const std::string _name) : ClapTrap(_name)
{
    hit = 100;
    energy = 100; 
    damage = 30;
    std::cout << "FragTrap " << name << " Constructor Called\n";
}

// copy
FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    std::cout << "FragTrap Copy Constructor Called!\n";
    this->name = copy.name;
    this->hit = copy.hit;
    this->energy = copy.energy;
    this->damage = copy.damage;
}

// assign operator
FragTrap    &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    std::cout << "FragTrap assigment operator called!\n";
    return *this;
}

// destructor 
FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " Destructor Called!\n";
}

// function
void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " requests a positive HIGH FIVE!\n";
}