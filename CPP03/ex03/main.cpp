#include "DiamondTrap.hpp"

int     main(void)
{
    DiamondTrap x("Maryam");
    x.attack("A");
    x.takeDamage(20);
    x.beRepaired(10);
    x.whoAmI();
    std::cout << x.getHit() << "  " << x.getEnergy() << " " << x.getAttack() << std::endl;
    return 0;
}