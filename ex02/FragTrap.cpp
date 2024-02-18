#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "(FragTrap) Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "(FragTrap) Parametric constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return;
}

FragTrap::~FragTrap()
{
	std::cout << "(FragTrap) Default destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
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

void FragTrap::highFivesGuys(void)
{
	if (this->_energyPoints and this->_hitPoints)
		std::cout << this->_name << " (FragTrap ft_highFive) High five guys ! " << std::endl;
	else
		std::cout << this->_name << " ... *.* " << std::endl;
}

// void FragTrap::attack(const std::string& target)
// {
//     if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
//     {
//         std::cout << "No points left." << std::endl;
//         return ;
//     }
//     std::cout << this->_name << " attacks " << "\033[1m" << target << "\033[0m" << ", causing " << "\033[1m" << this->_attackDamage << "\033[0m" << " points of damage !"<< std::endl;
//     this->_energyPoints--;
// }
