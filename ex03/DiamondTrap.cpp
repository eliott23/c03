#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    Name = "Diamond";
    ClapTrap::Name = Name + "_clap_name";
    HitPoints = 100;
    EnergyPoints = 20;
    AttackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string n)
{
    ClapTrap::Name = n;
    std::cout << "this is the energ= " << EnergyPoints << std::endl;
}