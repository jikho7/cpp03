#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	ScavTrap(int energyPoints);
	~ScavTrap();
	ScavTrap(const ScavTrap &other);
	ScavTrap& operator=(const ScavTrap &other);

	void guardGate();
	void attack(const std::string& target);

	protected:
	int _energyPoints;
};

#endif
