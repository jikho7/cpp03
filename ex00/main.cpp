#include "ClapTrap.hpp"

int main()
{
	ClapTrap plop;
	std::string choice;

	plop.attack("zombie");
	plop.beRepaired(10);
	plop.takeDamage(5);
	//std::cout << "Hit points: \033[1m" << plop.getHitPoints() << " \033[0mhit points." << std::endl;
	plop.getHitPoints();
	plop.attack("gobelin");
	plop.beRepaired(10);
	plop.takeDamage(55);

	plop.attack("rat");
	plop.beRepaired(10);
	return (0);

}
