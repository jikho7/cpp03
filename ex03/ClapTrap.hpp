#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string _name);
		~ClapTrap();
		ClapTrap(const ClapTrap &other);
		ClapTrap& operator=(const ClapTrap &other);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int getHitPoints() const;

	protected:
		std::string _name;
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;

};

#endif
