#include "ClapTrap.hpp"

int main () {

	ClapTrap David("David");
	ClapTrap Joseph("Joseph");

	David.stats();
	Joseph.stats();
	David.attack("Joseph");
	Joseph.beRepaired(18);
	David.takeDamage(7);
	David.stats();
	Joseph.stats();
	Joseph.takeDamage(28);
	for (int i = 10; i > 0; i--) {
		David.attack("Joseph");
	}
	David.stats();
	Joseph.stats();
	return 0;
}
