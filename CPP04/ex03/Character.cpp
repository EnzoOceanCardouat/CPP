#include "Character.hpp"

Character::Character() {}

Character::Character(std::string const &name) : _name(name) {
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(Character &other) {
	_name = other.getName();
	for (int i = 0; i < 4; i++) {
		if (other._inventory[i])
			_inventory[i] = other._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
}

Character & Character::operator=(Character &other) {
	if (this != &other) {
		_name = other._name;
		_inventory[4] = other._inventory[4];
	}
	return *this;
}

Character::~Character() {
	for (int i =0; i < 4; i++) {
		if (_inventory[i])
			delete _inventory[i];
	}
};

std::string const& Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria* materia) {
	if (!materia) {
		std::cout << "Can't equip materia is NULL" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++) {
		if (_inventory[i] == materia) {
			std::cout << "materia already equip in iventory slot " << i << std::endl;
			return ;
		}
		else if (!_inventory[i]) {
			_inventory[i] = materia;
		}
	}

}

void Character::unequip(int idx) {
	delete this->_inventory[idx];
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx > 4)
		std::cout << "Given index (" << idx << ") is invalid" << std::endl;
	else if (_inventory[idx])
		_inventory[idx]->use(target);
	else
		std::cout << "Inventory index " << idx << " is empty" << std::endl;
}
