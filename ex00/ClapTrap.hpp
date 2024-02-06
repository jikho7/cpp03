#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <iostream>
#include <string>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &other); // copy, new obj
		ClapTrap& operator=(const ClapTrap &other); // obj already existant

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int getHitPoints() const;

	private:
		std::string _name;
		int _hitPoints; // 10
		int _energyPoints; //10
		int _attackDamage; // 0

};

#endif
