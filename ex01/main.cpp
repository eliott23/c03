#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    // ClapTrap t("3iboud");
    // ClapTrap a("abdelghafor");
    // t.attack("abdelghafour");
    // t.attack("abdelghafour");
    // a.takeDamage(10);
    // a.takeDamage(10);
    // t.beRepaired(9);
    // a = t;
    ScavTrap f("f");
    ScavTrap a("a");
    f.attack("a");
    a.takeDamage(20);
    a.attack("f");
    f.beRepaired(2);
    a.attack("f");
    f.takeDamage(20);
    a.attack("f");
    f.takeDamage(20);
    a.attack("f");
    f.takeDamage(20);
    a.attack("f");
    f.takeDamage(20);
    a.attack("f");
    f.takeDamage(20);
    a.attack("f");
    f.takeDamage(20);
    a.attack("f");
    f.takeDamage(20);
    a.attack("f");
    a.attack("f");
    f.beRepaired(34);
    f.takeDamage(20);
    f.guardGate();
}