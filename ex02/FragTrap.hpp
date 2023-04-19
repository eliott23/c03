
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public :
    FragTrap();
    FragTrap(FragTrap& scvtrp);
    void    attack(std::string target);
    ~FragTrap();
    FragTrap(std::string name);
    void    highFivesGuys(void);
    FragTrap& operator=(FragTrap& scvtrp);
};

#endif