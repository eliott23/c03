
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
    public :
    FragTrap();
    FragTrap(FragTrap& scvtrp);
    ~FragTrap();
    FragTrap(std::string name);
    void    highFivesGuys(void);
    FragTrap& operator=(FragTrap& scvtrp);
};

#endif