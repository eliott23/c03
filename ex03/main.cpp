#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap f("f");
    DiamondTrap a("a");
    f.guardGate();
    a.whoAmi();
    f.attack("a");
    a.takeDamage(30);

    f.attack("a");
    a.takeDamage(30);

    f.attack("a");
    a.takeDamage(30);

    f.attack("a");
    a.takeDamage(30);

    f.attack("a");
    a.takeDamage(30);

    f.attack("a");
    a.takeDamage(30);

    f.attack("a");
    a.takeDamage(30);

    f.attack("a");
    a.takeDamage(30);

    a.beRepaired(34);
    f.highFivesGuys();
}