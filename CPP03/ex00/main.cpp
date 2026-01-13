#include "ClapTrap.hpp"

int     main(void)
{
    
    ClapTrap a("A");
    // normal behav/attack
    a.attack("Enemy");
    
    // consume the energy 
    for (int i = 0; i < 10; i++)
        a.attack("Enemy");

    // take damage
    a.takeDamage(5);
    a.takeDamage(50);

    // in case of dead
    a.attack("Enemy");
    a.beRepaired(5);
    return 0;
}


// int main()
// {
// 	ClapTrap a("Modat");
// 	ClapTrap b("Sarah");

// 	a.attack("Balqees");
// 	b.takeDamage(4);
// 	b.beRepaired(3);

// 	a.attack("Sarah");
// 	a.attack("Balqees");
// }

// issue in points does not make the chamges
