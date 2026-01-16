#include "DiamondTrap.hpp"

// default 
DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), ScavTrap(), FragTrap(), name("default")
{
    hit = 100;
    energy = 50;
    damage = 30;
    std::cout << "DiamondTrap default constructor called\n" ;
}
// para
DiamondTrap::DiamondTrap(std::string _name) : ClapTrap(_name + "_clap_name"), ScavTrap(_name), FragTrap(_name), name(_name)
{
    hit = FragTrap::hit; //its 100
    energy = ScavTrap::ENERGY; // 50
    damage = FragTrap::damage; // 30
    std::cout << "DiamondTrap " << this->name << " constructed\n";

}

// copy
DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy), name(copy.name)
{
    std::cout << "DiamondTrap copy constructor called\n";
}

// operator
DiamondTrap     &DiamondTrap::operator=(const DiamondTrap &other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        name = other.name;
    }
    return *this;
}

// destructor
DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap "<< name << " Destructor called!\n";
}

// func

void    DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap name is " << name << std::endl;
    std::cout << "ClapTrap name is " << ClapTrap::name << "\n";
}
