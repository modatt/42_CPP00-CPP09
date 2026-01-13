#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

// #include "ScarvTrap.hpp"
// #include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap
{
    private:
    std::string     name;
    int             hit;
    int             energy;
    int             damage;

    public:
    // defualt 
    FragTrap();
    // para
    FragTrap(const std:string _name);
    // copy
    FragTrap(const FragTrap &copy);
    // assigned operator
    FragTrap&operator=(const FragTrap &other);
    // destructor
    ~FragTrap();
    void highFivesGuys(void);

};

#endif 