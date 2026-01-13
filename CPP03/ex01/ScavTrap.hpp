#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScarvTrap
{
    private:
    std::string     name;
    int             hit;
    int             energy;
    int             damage;

    public:
    // defualt 
    ScarvTrap();
    // parametarized 
    ScarvTrap(std::string _name);
    // copy 
    ScarvTrap(const ScarvTrap &copy);
    // assign 
    ScarvTrap &operator=(const ScarvTrap &other);
    // destructor 
    ~ScarvTrap();

    void guardGate();
};

#endif