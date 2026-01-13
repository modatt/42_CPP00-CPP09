#include "FragTrap.hpp"


int     main(void)
{
    FragTrap a("ABC");
    
    // Test attack (inherited from ClapTrap, overridden in ScavTrap)
    a.attack("Enemy");
    
    // Test highFivesGuys (FragTrap-specific)
    a.highFivesGuys();
    
    // Test copy constructor
    FragTrap b(a);
    
    // Test assignment operator
    FragTrap c("XYZ");
    c = a;
    
    return 0;
}