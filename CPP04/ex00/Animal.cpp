#include "Animal.hpp"

Animal::Animal() {
	_type = "Animal";
	std::cout << "Animal has been created." << std::endl;
};

Animal::~Animal() {
	_type = "Animal";
	std::cout << "Animal has been destroyed." << std::endl;
};

Animal::Animal(const Animal& other) {
	*this = other;
	std::cout << "Animal copy has been created." << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	if (this != &other)
		_type = other._type;
	return *this;
}

const std::string& Animal::getType() const {
	return _type;
}

void Animal::makeSound() const {
		std::cout << "Grrrrr." << std::endl;
}

