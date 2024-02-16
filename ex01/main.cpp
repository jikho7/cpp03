#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap plop("plop");
	ClapTrap foo("foo");
	ScavTrap Scav1("Scav1");
	ScavTrap Scav2("Scav2");

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

	std::cout << "\n";

	Scav1.attack("human");
	Scav1.beRepaired(10);
	Scav1.takeDamage(5);
	Scav1.guardGate();
	std::cout << "scav1 : Hit points: \033[1m" << Scav1.getHitPoints() << " \033[0mhit points." << std::endl;
	std::cout << "scav2 : Hit points: \033[1m" << Scav2.getHitPoints() << " \033[0mhit points." << std::endl;
	Scav2 = Scav1;
	std::cout << "Scav2 after cpy : Hit points: \033[1m" << Scav2.getHitPoints() << " \033[0mhit points." << std::endl;
	Scav2.attack("gobelin");
	Scav1.beRepaired(10);
	Scav2.takeDamage(200);
	Scav2.guardGate();
	Scav2.attack("demon");

	std::cout << "\n";

	return (0);
}
