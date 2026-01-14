#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : virtual public ClapTrap
{
    public:
    // defualt 
    ScavTrap();
    // parametarized 
    ScavTrap(const std::string _name);
    // copy 
    ScavTrap(const ScavTrap &copy);
    // // assign 
    ScavTrap &operator=(const ScavTrap &other);
    // destructor 
    ~ScavTrap();
    // // attack overwrite
    void    attack(const std::string &target);

    void guardGate();
};

#endif