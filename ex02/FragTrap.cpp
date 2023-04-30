#include "FragTrap.hpp"

FragTrap::FragTrap(FragTrap& scvtrp)
{
    AttackDamage = scvtrp.AttackDamage;
    HitPoints = scvtrp.HitPoints;
    EnergyPoints = scvtrp.AttackDamage;
    Name = scvtrp.Name;
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::FragTrap()
{
    Name = "FragTrap";
    AttackDamage = 30;
    HitPoints = 100;
    EnergyPoints = 100;
    std::cout << "FragTrap constructor called!" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    Name = name;
    AttackDamage = 30;
    HitPoints = 100;
    EnergyPoints = 100;
    std::cout << "FragTrap constructor called!" << std::endl;
}


FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called!" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "HighFives guys!" << std::endl;
}