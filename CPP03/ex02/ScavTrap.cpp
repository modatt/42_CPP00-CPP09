#include "ScavTrap.hpp"


/*
## Learning objects::
Learn inheritance
Learn constructor chaining
Learn method overriding
Learn base vs derived responsibility
*/
// defualt
ScavTrap::ScavTrap(): ClapTrap()
{
    name = "defualt";
    hit = 100;
    energy = 50; 
    damage = 20;
    std::cout << "ScavTrap Defualt Constructor Called!\n";
}

// parametraized constructor
ScavTrap::ScavTrap(std::string _name) : ClapTrap (_name)
{
    hit = 100;
    energy = 50;
    damage = 20;
    std::cout << "ScavTrap " <<  name << " Constructor Called!\n";
}

// // copy
ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap Copy Constructor Called!\n";
    this->name = copy.name;
    this->hit = copy.hit;
    this->energy = copy.energy;
    this->damage = copy.damage;
}

// assigned operator constructor
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "ScavTrap Assgined Operator Constructor Called!\n";
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return *this;
}

// destructor
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " destructor called!\n";
}


// // 
void ScavTrap::attack(const std::string& target)
{
    // is this ClapTrap alive?
    // not alive
    if (hit <= 0)
    {
       std::cout << "ScavTrap " << name << " is not alive, has no hit points!\n" ; // say why?
        return ; // do nothing
    }
    if (energy <= 0)
    {
        std::cout << "ScavTrap " << name << " does not have energy\n";
        return ;
    }
    energy--; // attack costs 1 energy point
    std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << damage << " points of damage!" << std::endl;
}

// functions
void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode\n";
}