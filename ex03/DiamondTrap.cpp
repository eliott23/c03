#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    Name = "Diamond";
    ClapTrap::Name = Name + "_clap_name";
    HitPoints = 100;
    EnergyPoints = 20;
    AttackDamage = 30;
    std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string n)
{
    Name = n;
    ClapTrap::Name = n + "_clap_name";
    HitPoints = 100;
    EnergyPoints = 20;
    AttackDamage = 30;
    std::cout << "DiamondTrap constructor called" << std::endl;
}

void    DiamondTrap::whoAmi()
{
    std::cout << "Name = " << Name << "; ClapTrap Name = " \
    << ClapTrap::Name  << std::endl;
}