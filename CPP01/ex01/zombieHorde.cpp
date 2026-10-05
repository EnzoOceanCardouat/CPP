#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	if (N < 1)
		return (NULL);
	Zombie *zombie;

	zombie = new Zombie[N];

	for(int i = 0; i < N; i++) {
		zombie[i].setName(name);
	}
	return (zombie);
};
