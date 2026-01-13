#include "ScavTrap.hpp"

// defualt
ScarvTrap::ScarvTrap(): name("defualt"), hit(100), energy(50), damage(20)
{
    std::cout << "ScarvTrap Defualt Constructor Called!\n";
}

// parametraized constructor
ScarvTrap::ScarvTrap(std::string _name) : name(_name), hit(100), energy(50), damage(20)
{
    std::cout << "ScarvTrap Constructor Called!\n";
}

// copy
ScarvTrap::ScarvTrap(const ScarvTrap &copy)
{
    std::cout << "ScarvTrap Copy Constructor Called!\n";
    this->name = copy.name;
    this->hit = copy.hit;
    this->energy = copy.energy;
    this->damage = copy.damage;
}

// assigned operator constructor
ScarvTrap &ScarvTrap::operator=(const ScarvTrap &other)
{
    std::cout << "ScarvTrap Assgined Operator Constructor Called!\n";
    if (this != &other)
    {
        this->name = other.name;
        this->hit = other.hit;
        this->energy = other.energy;
        this->damage = other.damage;
    }
    return *this;
}

// destructor
ScarvTrap::~ScarvTrap()
{
    std::cout << "ScarvTrap destructor called!\n";
}

// functions
void guardGate()
{
    std::cout << "to do\n";
}