#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("name", 100, 50, 20)
{
	std::cout << "(ScavTrap) Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "(ScavTrap) Parametric constructor called" << std::endl;
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

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if(this != &other)
	{
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
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
