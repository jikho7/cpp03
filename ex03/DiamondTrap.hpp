#ifndef DIAMONDTRAP_H
#define DIAMONDRAP_H

class DiamondTrap : public ClapTrap, public ScavTrap
{
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap &other);
		DiamondTrap& operator=(const DiamondTrap &other);

		void whoAmI();

	private:
		std::string _name;

};

#endif
