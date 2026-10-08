#include "Character.hpp"

Character::Character() {}

Character::Character(std::string const &name) : _name(name) {}

Character::Character(Character &other) {
	*this = other;
}

Character & Character::operator=(Character &other) {
	if (this != &other) {
		_name = other._name;
		_inventory[4] = other._inventory[4];
	}
	return *this;
}

Character::~Character() {};

std::string const& Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria* materia) {
	for (int i = 0; i < 4; i++) {
		if (!this->_inventory[i]) {
			this->_inventory[i] = materia;
			return ;
		}
	}
	this->_inventory[4] = materia;
}

void Character::unequip(int idx) {
	delete this->_inventory[idx];
}

void Character::use(int idx, ICharacter &target) {
	if (this->_inventory[idx]->getType() == "Ice")
		std::cout << "* shoots an ice bolt at " << this->_name << " *" << std::endl;
	else if (this->_inventory[idx]->getType() == "Cure")
		std::cout << "* heals " << this->_name << "’s wounds *" << std::endl;
	else
		std::cout << "* do nothings *" << std::endl;
}
