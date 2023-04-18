#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
    std::cout << "Claptrap constructor called!" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap& cltrp)
{
    this->Name = cltrp.Name;
    this->AttackDamage = cltrp.AttackDamage;
    this->HitPoints = cltrp.HitPoints;
    this->EnergyPoints = cltrp.EnergyPoints;
    std::cout << "Copy constructor called!" << std::endl;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (HitPoints && EnergyPoints)
    {
        std::cout << "ClapTrap " << Name << " attacks "\
        << target << ", causing " << AttackDamage << \
        " points of damage ad=" << EnergyPoints << std::endl;
        EnergyPoints--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (HitPoints)
    {
        if (amount > HitPoints)
            HitPoints = 0;
        else
            HitPoints -= amount;
        std::cout << "ClapTrap " << Name << " takes "\
        << amount << " damage " << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (HitPoints && EnergyPoints)
    {
        HitPoints += amount;
        std::cout << "ClapTrap " << Name << " repairs "\
        << amount << std::endl;
        EnergyPoints--;
    }
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClaptTrap destructor called !" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    Name = name;
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
    std::cout << "Claptrap constructor called!" << std::endl;
}