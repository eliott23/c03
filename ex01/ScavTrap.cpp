#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    AttackDamage = 20;
    HitPoints = 100;
    EnergyPoints = 50;
    std::cout << "ScavTrap constructor called!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    Name = name;
    AttackDamage = 20;
    HitPoints = 100;
    EnergyPoints = 50;
    std::cout << "ScavTrap constructor called!" << std::endl;
}

void    ScavTrap::attack(std::string target)
{
    if (HitPoints && EnergyPoints)
    {
        std::cout << "ScavTrap " << Name << " attacks "\
        << target << ", causing " << AttackDamage << \
        " points of damage ad=" << EnergyPoints << std::endl;
        EnergyPoints--;
    }
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called!" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap is in Gate keeper mode" << std::endl;
}