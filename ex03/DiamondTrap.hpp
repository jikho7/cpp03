#ifndef DIAMONDTRAP_H
#define DIAMONDRAP_H

#include <string>
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &other);
		DiamondTrap& operator=(const DiamondTrap &other);

		void whoAmI();

	private:
		std::string _name;
		int _attackDamage;
		int _hitPoints;

};

#endif
