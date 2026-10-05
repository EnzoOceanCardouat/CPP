#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _WeaponA(weapon) {}

std::string HumanA::getName() {
	return (_name);
}

void HumanA::attack() {
	std::cout << getName() << " attacks with their " << _WeaponA.getType() << std::endl;
}
