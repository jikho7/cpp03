#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
_name("Claptrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "(ClapTrap) Default constructor called " << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage): _name(name), _hitPoints(hitPoints), _energyPoints(energyPoints), _attackDamage(attackDamage)
{
	std::cout << "(ClapTrap) Complete paramteric constructor called " << this->_name << " \033[1m\033[32mON\033[32m\033[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "(ClapTrap) Paramteric constructor called " << this->_name << " \033[1m\033[32mON\033[32m\033[0m" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "(ClapTrap) Default destructor called " << "Claptrap \033[1m\033[31mOFF\033[31m\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
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

void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << this->_name << " has no energy points left. He cannot attack." << std::endl;
	}
	else if(this->_hitPoints <= 0)
	{
		std::cout << this->_name << " has no hit points left. He cannot attack." << std::endl;
	}
	else
	{
		std::cout << this->_name << " attacks " << "\033[1m" << target << "\033[0m" << ", causing " << "\033[1m" << this->_attackDamage << "\033[0m" << " points of damage !"<< std::endl;
		this->_energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(amount > this->_hitPoints and this->_hitPoints != 0)
	{
		this->_hitPoints = 0;
		std::cout << this->_name << " takes " << "\033[1m" << amount << "\033[0m" << " damage ! He has " << "\033[1m" << this->getHitPoints() << "\033[0m" << " hit points left." <<std::endl;
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout << this->_name << " has no energy points left. He cannot take more damage." << std::endl;
	}
	else if(this->_hitPoints <= 0)
    {
		std::cout << this->_name << " has no hit points left. He cannot take more damage." <<std::endl;
	}
	else
		this->_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << this->_name << " has no energy points left. He cannot repair itself." << std::endl;
	}
	else if(this->_hitPoints <= 0)
	{
		std::cout << this->_name << " has no hit points left. He cannot repair itself." << std::endl;
	}
	else
	{
		std::cout << this->_name <<  " repairs itself and gets " << "\033[1m" << amount << "\033[0m" << " hit points !";
		this->_energyPoints--;
		this->_hitPoints += amount;
		std::cout << " He has " << "\033[1m" << this->getHitPoints() << "\033[0m" << " hit points." << std::endl;
	}
}

unsigned int ClapTrap::getHitPoints() const
{
	return this->_hitPoints;
}
