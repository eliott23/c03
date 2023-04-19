#include "FragTrap.hpp"

FragTrap::FragTrap(FragTrap& scvtrp)
{
    AttackDamage = scvtrp.AttackDamage;
    HitPoints = scvtrp.HitPoints;
    EnergyPoints = scvtrp.AttackDamage;
    Name = scvtrp.Name;
}

FragTrap& FragTrap::operator=(FragTrap& scvtrp)
{
    this->Name = scvtrp.Name;
    this->AttackDamage = scvtrp.AttackDamage;
    this->HitPoints = scvtrp.HitPoints;
    this->EnergyPoints = scvtrp.EnergyPoints;
    std::cout << "FragTrap copy constructor called!" << std::endl; //checklater
    return (*this);
}

FragTrap::FragTrap()
{
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

void    FragTrap::attack(std::string target)
{
    if (HitPoints && EnergyPoints)
    {
        std::cout << "FragTrap " << Name << " attacks "\
        << target << ", causing " << AttackDamage << \
        " points of damage" << std::endl;
        EnergyPoints--;
    }
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called!" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "HighFives guys!" << std::endl;
}