#include "ClapTrap.hpp"

int main()
{
	ClapTrap plop("plop");
	ClapTrap foo("foo");

	std::cout << "\n";

	plop.attack("zombie");
	plop.beRepaired(10);
	plop.takeDamage(5);
	std::cout << "Plop : Hit points: \033[1m" << plop.getHitPoints() << " \033[0mhit points." << std::endl;
	std::cout << "Foo : Hit points: \033[1m" << foo.getHitPoints() << " \033[0mhit points." << std::endl;
	foo = plop;
	std::cout << "Foo after cpy : Hit points: \033[1m" << foo.getHitPoints() << " \033[0mhit points." << std::endl;
	//plop.getHitPoints();
	plop.attack("gobelin");
	plop.beRepaired(10);
	plop.takeDamage(55);
	plop.attack("rat");
	plop.beRepaired(10);
	plop.attack("gobelin");
	plop.beRepaired(10);
	plop.takeDamage(55);
	std::cout << "\n";

	return (0);
}
