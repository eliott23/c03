#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public :
    ScavTrap();
    void    attack(std::string target);
    ~ScavTrap();
    ScavTrap(std::string name);
    void    guardGate();
};

#endif