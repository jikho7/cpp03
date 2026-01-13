#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Default DiamondTrap constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Default DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap()
{
	DiamondTrap::_name = name;
	std::cout << "Parametrics DiamondTrap constructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << DiamondTrap::_name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}
