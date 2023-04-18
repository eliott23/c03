#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class   ClapTrap {
    private :
    std::string Name;
    int HitPoints;
    int EnergyPoints;
    int AttackDamage;
    public :
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ClapTrap();
    ClapTrap& operator=(ClapTrap& cltrp);
    ClapTrap(ClapTrap& cltrp);
    ~ClapTrap();
};
#endif