#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {};

ClapTrap::ClapTrap(std::string name) {
	_name = name;
	_health = 10;
	_energy = 10;
	_attack = 0;
	std::cout << _name << " has been created." << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << this->_name << " has been destroy." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other) {
		_name = other._name;
		_health = other._health;
		_energy = other._energy;
		_attack = other._attack;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (this->_energy == 0)
		std::cout << this->_name << " has no energy to attack." << std::endl;
	else {
		std::cout << this->_name << " did " << this->_attack << " damage to " << target << "." << std::endl;
		this->_energy -= 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << this->_name << " take " << amount << " of damage." << std::endl;
	if (amount >= (unsigned int) this->_health) {
		std::cout << this->_name << " is dead." << std::endl;
		this->_health = 0;
	}
	else
		this->_health -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energy <= 0)
		std::cout << this->_name << " has no energy to regenered." << std::endl;
	std::cout << this->_name << " regenered " << amount << " of health." << std::endl;
	this->_health += amount;
	this->_energy -= 1;
}

void ClapTrap::stats() {
	std::cout << "Name: " << this->_name << std::endl;
	std::cout << "Health: " << this->_health << std::endl;
	std::cout << "Energy: " << this->_energy << std::endl;
	std::cout << "Attack: " << this->_attack << std::endl;
}
