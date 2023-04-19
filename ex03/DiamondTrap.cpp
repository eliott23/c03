#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    Name.append("_clap_name");
}

DiamondTrap::DiamondTrap(std::string n)
{
    ClapTrap::Name = n;
    std::cout << "this is the energ= " << EnergyPoints << std::endl;
}