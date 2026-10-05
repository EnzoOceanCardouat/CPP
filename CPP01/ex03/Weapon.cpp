#include "Weapon.hpp"
#include "HumanA.hpp"

void Weapon::setType(std::string const & type){
	_type = type;
};

std::string const & Weapon::getType() {
	return (_type);
};

Weapon::Weapon(std::string const &type) {
	_type = type;
}
