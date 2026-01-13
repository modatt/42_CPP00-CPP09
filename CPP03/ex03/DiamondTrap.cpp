#include "DiamondTrap.hpp"

// default 

// para


// copy


// operator
DiamondTrap     &DiamondTrap::operator=(const DiamondTrap &other) : ClapTrap()
{
    ClapTrap::operator=(other);
    return *this;
}

// destructor
DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called!\n";
}

// func
void    DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap name is" << name << " ClapTrap name is " << "\n";
}