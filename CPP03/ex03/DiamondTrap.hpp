#ifndef  DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


// virsual in inheritaned classes scavtrap & fragtrap
// multiple inheritance bellow
// diamondtrap has 2 parent 
// virtual inhertance solve it.  add virtual to below classes while inherint claptrap
// class ScavTrap : virtual public ClapTrap
/*
ClapTrap becomes a shared base
All derived classes refer to the same ClapTrap
- - - - - - 
When a base class is virtual,
ONLY the MOST DERIVED class constructs it >> most derived is diamond "The final class being created"

ClapTrap → base (virtual)
FragTrap → intermediate
ScavTrap → intermediate
DiamondTrap → most derived
👉 DiamondTrap must call ClapTrap(...)

*/

class   DiamondTrap : public ScavTrap, public FragTrap
{
    private:
    std::string name;

    public:
    // Default Constructor
    DiamondTrap();
    // para
    DiamondTrap(const std::string _name);
    // copy 
    DiamondTrap(const DiamondTrap &copy);
    // operator
    DiamondTrap&operator=(const DiamondTrap &other);
    // destructor
    ~DiamondTrap();

    // func 
    void    attack(const std::string& target); // form ScavTrap
    void whoAmI();

};


#endif

/*

DiamondTrap object
│
├── ClapTrap subobject
│     └── std::string name   → "Bob_clap_name"
│
├── FragTrap part
├── ScavTrap part
│
└── DiamondTrap's own data
      └── std::string name   → "Bob"

// shadowing having same var member name for both base & derived but they are different each has his own name
*/