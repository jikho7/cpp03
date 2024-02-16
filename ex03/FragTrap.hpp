#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(int hitPoints, int attackDamage);
		~FragTrap();
		FragTrap(const FragTrap &other);
		FragTrap& operator=(const FragTrap &other);

		void attack(const std::string& target);
		void highFivesGuys(void);

	protected:
	int _hitPoints;
	int _attackDamage;

};

#endif
