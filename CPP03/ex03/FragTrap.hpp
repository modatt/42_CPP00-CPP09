#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : virtual public ClapTrap
{
    public:
    // defualt 
    FragTrap();
    // para
    FragTrap(const std::string _name);
    //copy
    FragTrap(const FragTrap &copy);
    // // assigned operator
    FragTrap&operator=(const FragTrap &other);
    // destructor
    ~FragTrap();
    void highFivesGuys(void);

};

#endif 