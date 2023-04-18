#include "ClapTrap.hpp"

int main()
{
    ClapTrap t("3iboud");
    ClapTrap a("abdelghafor");
    t.attack("abdelghafour");
    t.attack("abdelghafour");
    a.takeDamage(10);
    a.takeDamage(10);
    t.beRepaired(9);
    a = t;
}