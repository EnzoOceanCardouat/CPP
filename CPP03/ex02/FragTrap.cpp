#include "FragTrap.hpp"

FragTrap::FragTrap() {};

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_name = name;
	_health = 100;
	_energy = 100;
	_attack = 30;
	std::cout << this->_name << " is created." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) {
	*this = other;
}

FragTrap::~FragTrap() {
	 std::cout << this->_name << " is destroyed." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	if (this != &other) {
		_name = other._name;
		_health = other._health;
		_energy = other._energy;
		_attack = other._attack;
	}
	return *this;
}

void FragTrap::attack(const std::string& target) {
	if (this->_energy == 0)
		std::cout << this->_name << " has not enough energy left to attack." << std::endl;
	else {
		std::cout << target << " is attacked by " << this->_name << " and take " << this->_attack << " points of damage." << std::endl;
		this->_energy -= 1;
	}
}

void FragTrap::highFivesGuys(void) {
	std::cout << this->_name << ": High Five guys?" << std::endl;
}
