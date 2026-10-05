#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {};

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	_name = name;
	_health = 100;
	_energy = 50;
	_attack = 20;
	std::cout << this->_name << " is created." << std::endl;
}

ScavTrap::~ScavTrap() {
	 std::cout << this->_name << " is destroyed." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) {
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	if (this != &other) {
		_name = other._name;
		_health = other._health;
		_energy = other._energy;
		_attack = other._attack;
	}
	return *this;
}

void ScavTrap::attack(const std::string& target) {
	if (this->_energy == 0)
		std::cout << this->_name << " has not enough energy left to attack." << std::endl;
	else {
		std::cout << target << " is attack by " << this->_name << " and take " << this->_attack << " points of damage." << std::endl;
		this->_energy -= 1;
	}
}

void ScavTrap::guardGate() {
	std::cout << this->_name << " is now in Gate keeper mode." << std::endl;
}
