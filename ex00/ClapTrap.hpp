#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap
{
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);
		ClapTrap& operator=(const ClapTrap &other);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		unsigned int getHitPoints() const;
		int getAttackPoints() const;
		int getEnergyPoints() const;
		int getName() const;

	private:
		std::string _name;
		unsigned int _hitPoints;
		int _energyPoints;
		unsigned int _attackDamage;

};

#endif
