#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){};

ScavTrap::ScavTrap(int energyPoints) : _energyPoints(energyPoints)
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap()
{
	std::cout << "(ScavTrap) Copy constructor called" << std::endl;
	*this = other;
	return;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "Gate Keeper mode : ON" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
    {
        std::cout << "No points left." << std::endl;
        return ;
    }
    std::cout << "ScavTrap attack-ft: " << this->_name << " attacks " << "\033[1m" << target << "\033[0m" << ", causing " << "\033[1m" << this->_attackDamage << "\033[0m" << " points of damage !"<< std::endl;
    this->_energyPoints--;
}
