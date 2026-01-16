#include "ClapTrap.hpp"

// defualt constructor
ClapTrap::ClapTrap(): name("Default"), hit(10), energy(10), damage(0)
{
    std::cout << "ClapTrap Default Constructor Called\n";
}

// Parameter Constructor 
ClapTrap::ClapTrap(std::string _name) : name(_name), hit(10), energy(10), damage(0)
{
    std::cout << "ClapTrap " << name << " Constructor Called\n";
}

// copy constractor 
ClapTrap::ClapTrap(const ClapTrap &otherCopy) : name(otherCopy.name), hit(otherCopy.hit), energy(otherCopy.energy), damage(otherCopy.damage) 
{
    std::cout << "ClapTrap Copy Constructor called\n";
}

// assign operator constructor 
ClapTrap &ClapTrap::operator=( const ClapTrap &other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->hit = other.hit;
        this->energy = other.energy;
        this->damage = other.damage;
    }
    std::cout << "ClapTrap Copy Assignment Operator Called\n";
    return *this;
}

// Destructor
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " destructor called\n" ;
}

// funnctions
// target just a string not an object has a name, hit, ...etc
// ClapTrap a("A");
void ClapTrap::attack(const std::string& target)
{
    // is this ClapTrap alive?
    // not alive
    if (hit <= 0)
    {
       std::cout << "ClapTrap " << name << " is not alive, has no hit points!\n" ; // say why?
        return ; // do nothing
    }
    if (energy <= 0)
    {
        std::cout << "ClapTrap " << name << " does not have energy\n";
        return ;
    }
    energy--; // attack costs 1 energy point
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    // first check if is alive
    if (hit <= 0)
    {
        std::cout << "ClapTrap " << name << " is not alive, has no hit points!\n";
        return ;
    }
    if (amount >= (unsigned)hit)
        hit = 0;
    else
        hit -= amount;
    std::cout << "ClapTrap " << name << " gets attacked, causing "<< amount << " points of damage! remaining hit points " << hit << std::endl; 
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hit <= 0)
    {
        std::cout << "ClapTrap " << name << " is not alive, has no hit points!\n";
        return ;
    }
    if (energy <= 0)
    {
        std::cout << "ClapTrap " << name << " does not have energy\n";
        return ;
    }
    energy--; 
    hit += amount;
    std::cout << "ClapTrap " << name << " repairs itself costing 1 energy point, restoring " << amount << " hit points, total hit points now " << hit << "!\n";
}

// int ClapTrap::getAttack()
// {
// 	return 0;
// }

int ClapTrap::getHit()
{
    return hit;
}
int ClapTrap::getEnergy()
{
    return energy;
}
int ClapTrap::getAttack()
{
    return damage;
}