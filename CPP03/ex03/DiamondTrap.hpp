#ifndef  DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class   DiamondTrap : public ClapTrap
{
    private:
    std::string name;

    public:

    void whoAmI();

};


#endif