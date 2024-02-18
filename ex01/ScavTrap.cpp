#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "(ScavTrap) Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "(ScavTrap) Parametric constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "(ScavTrap) Copy constructor called" << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap()
{
	std::cout << "(ScavTrap) Default destructor called " << std::endl;
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
	if (this->_energyPoints <= 0)
	{
		std::cout << this->_name << " No Gate Keeper mode allowed : No energy points left." << std::endl;
	}
	else if(this->_hitPoints <= 0)
	{
		std::cout  << this->_name << " No Gate Keeper mode allowed : No hit points left." << std::endl;
	}
	else
		std::cout << this->_name << " : Gate Keeper mode ON" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << this->_name << " has no energy points left. He cannot attack." << std::endl;
	}
	else if(this->_hitPoints <= 0)
	{
		std::cout << this->_name << " has no energy points left. He cannot attack." << std::endl;
	}
	else
	{
		std::cout << "(ScavTrap ft_attack) " << this->_name << " attacks " << "\033[1m" << target << "\033[0m" << ", causing " << "\033[1m" << this->_attackDamage << "\033[0m" << " points of damage !"<< std::endl;
		this->_energyPoints--;
	}
}
