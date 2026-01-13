#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	this->_name = "Claptrap";
	std::cout << this->_name << " Default constructor called" << std::endl;
}


ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage): _name(name), _hitPoints(hitPoints), _energyPoints(energyPoints), _attackDamage(attackDamage)
{
	std::cout << "ClapTrap constructor called. Name : " << this->_name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if(this != &other)
	{
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout << "No points left." << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks " << "\033[1m" << target << "\033[0m" << ", causing " << "\033[1m" << this->_attackDamage << "\033[0m" << " points of damage !"<< std::endl;
	this->_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout << "No points left." << std::endl;
		return ;
	}
	std::cout << this->_name <<  " takes " << "\033[1m" << amount << "\033[0m" << " damage !"<< std::endl;
	this->_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout << "No points left." << std::endl;
		return ;
	}
	std::cout << this->_name <<  " repairs itself and gets " << "\033[1m" << amount << "\033[0m" << " points of damage !"<< std::endl;
	this->_energyPoints--;
	this->_hitPoints += amount;
	//std::cout << "After repair: " << "\033[1m" << this->_hitPoints << "\033[0m" << " hit points." << std::endl;
}

int ClapTrap::getHitPoints() const
{
	return this->_hitPoints;
}
