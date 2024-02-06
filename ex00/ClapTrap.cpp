#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->_name = "Claptrap";
    std::cout << this->_name << " \033[1m\033[32mON\033[32m\033[0m" << std::endl;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;

    std::cout << this->_name << "\033[1m\033[32mON\033[32m\033[0m" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Claptrap \033[1m\033[31mOFF\033[31m\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) // copy, new obj
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other; // copie tout l'obj other dans this
    return;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other) // obj already existant
{
    (void)other;
	std::cout << "Copy assignment operator called" << std::endl;
	//this->_number = other.getRawBits(); // copie seulement le champ _number et pas tout l objet.
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