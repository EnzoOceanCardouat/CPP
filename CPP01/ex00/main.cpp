#include "Zombie.hpp"

int	main()
{
	Zombie *bar;

	randomChump("foo");
	bar = newZombie("bar");
	bar->announce();
	delete bar;
	randomChump("zombie");
	bar = newZombie("death");
	delete bar;
}
