#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class   ClapTrap {
    protected :
    std::string Name;
    unsigned int HitPoints;
    unsigned int EnergyPoints;
    unsigned int AttackDamage;
    public :
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ClapTrap();
    ClapTrap& operator=(ClapTrap& cltrp);
    ClapTrap(ClapTrap& cltrp);
    ClapTrap(std::string name);
    ~ClapTrap();
};
#endif