#include "ClapTrap.hpp"

int main()
{
    ClapTrap t("3iboud");
    ClapTrap a("abdelghafour");
    t.attack("abdelghafour");
    a.takeDamage(10);
    t.attack("abdelghafour");
    a.takeDamage(10);
    t.beRepaired(9);
    t.beRepaired(9);
    t.beRepaired(9);
    t.beRepaired(9);
    t.beRepaired(9);
    t.beRepaired(9);
    t.beRepaired(9);
    t.beRepaired(9);
    t.beRepaired(9);
    t.beRepaired(9);
    a = t;
}