#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "(FragTrap) Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "(FragTrap) Parametric constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap()
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "High five guys ! " << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
    {
        std::cout << "No points left." << std::endl;
        return ;
    }
    std::cout << "FragTrap attack-ft: " << this->_name << " attacks " << "\033[1m" << target << "\033[0m" << ", causing " << "\033[1m" << this->_attackDamage << "\033[0m" << " points of damage !"<< std::endl;
    this->_energyPoints--;
}
