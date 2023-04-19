#include "DiamondTrap.hpp"

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
    DiamondTrap f("f");
    DiamondTrap a("a");
    f.attack("a");
    a.takeDamage(30);
    a.attack("f");
    f.beRepaired(30);

    a.attack("f");
    f.takeDamage(30);

    f.attack("a");
    a.takeDamage(30);

    a.attack("f");
    f.takeDamage(30);

    f.attack("a");
    a.takeDamage(30);

    a.attack("f");
    f.takeDamage(30);

    f.attack("a");
    a.takeDamage(30);

    a.attack("f");
    f.takeDamage(30);

    f.attack("a");
    a.takeDamage(30);

    a.attack("f");
    f.takeDamage(30);

    f.attack("a");
    a.takeDamage(30);

    a.attack("f");
    f.takeDamage(30);

    f.attack("a");
    a.takeDamage(30);

    a.attack("f");
    f.takeDamage(30);

    f.attack("a");
    a.takeDamage(30);

    a.attack("f");
    a.attack("f");
    f.beRepaired(34);
    a.beRepaired(34);
    f.takeDamage(30);
    f.highFivesGuys();
}