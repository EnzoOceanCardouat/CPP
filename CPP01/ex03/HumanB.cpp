#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name), _WeaponB(NULL) {}

void HumanB::setWeapon(Weapon & weapon) {
	_WeaponB = &weapon;
}

std::string HumanB::getName() {
	return (_name);
}

void HumanB::attack() {
	if (!_WeaponB)
		return ;
	std::cout << getName() << " attacks with their " << _WeaponB->getType() << std::endl;
}
