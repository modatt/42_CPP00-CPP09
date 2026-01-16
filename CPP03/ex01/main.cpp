#include "ScavTrap.hpp"

int     main(void)
{
    ScavTrap a("SA");
    std::cout << a.getHit() << std::endl;
    std::cout << a.getEnergy() << std::endl;
    std::cout << a.getAttack() << std::endl;
    
    // Test attack (overridden method)
    a.attack("Enemy");
    
    // Test guardGate (ScavTrap specific method)
    a.guardGate();
    
    // Test copy constructor
    ScavTrap b(a);
    
    // Test assignment operator
    ScavTrap c("SC");
    c = a;
        
    return 0;
}