#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	ClapTrap clap;
	ScavTrap scav("Scav");
	FragTrap fra("fra");

	scav.attack("zombie");
	scav.beRepaired(10);
	scav.takeDamage(5);
	//std::cout << "Hit points: \033[1m" << plop.getHitPoints() << " \033[0mhit points." << std::endl;
	scav.getHitPoints();
	scav.attack("gobelin");
	scav.beRepaired(10);
	scav.takeDamage(155);
	scav.guardGate();

	fra.attack("rat");
	fra.highFivesGuys();
	fra.takeDamage(200);
	fra.attack("gobelin");
	scav.attack("rat");
	scav.beRepaired(10);
	return (0);

}
