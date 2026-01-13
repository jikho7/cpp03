#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	ClapTrap clap("clap");
	FragTrap frag("frag");
	ScavTrap Scav("Scav");
	DiamondTrap Diamond("Diamond");

	Diamond.whoAmI();


	return (0);
}