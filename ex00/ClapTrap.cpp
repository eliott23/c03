#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 10;
}

ClapTrap& ClapTrap::operator=(ClapTrap& cltrp)
{
    this->Name = cltrp.Name;
    this->AttackDamage = cltrp.AttackDamage;
    this->HitPoints = cltrp.HitPoints;
    this->EnergyPoints = cltrp.EnergyPoints;
    return (*this);
}

void attack(const std::string& target);
{
}
void takeDamage(unsigned int amount);
{

}

void beRepaired(unsigned int amount);
{

}