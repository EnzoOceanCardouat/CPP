#include "Zombie.hpp"

void	Zombie::announce( void ) const {
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie() {
}

void Zombie::setName(std::string name) {
	_name = name;
}

Zombie::~Zombie() {
	std::cout << _name << " is dead." << std::endl;
}
