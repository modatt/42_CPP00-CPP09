#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
    protected:
    std::string name;
    int         hit;
    int         energy;
    int         damage;

    public:
    // Defualt Constructor
    ClapTrap();
    ClapTrap(std::string _name); // parameterized Constructor 
    // Copy Constructor
    ClapTrap(const ClapTrap &otherCopy);
    // Copy Assignment Operator
    ClapTrap&operator=(const ClapTrap &other);
    // Destructor
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    int getHit();
    int getEnergy();
    int getAttack();
};

#endif