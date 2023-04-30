#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap f("f");
    FragTrap a("a");
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