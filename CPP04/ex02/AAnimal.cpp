#include "AAnimal.hpp"

AAnimal::AAnimal() {
	_type = "AAnimal";
	std::cout << "AAnimal has been created." << std::endl;
};

AAnimal::~AAnimal() {
	_type = "AAnimal";
	std::cout << "AAnimal has been destroyed." << std::endl;
};

AAnimal::AAnimal(const AAnimal& other) {
	*this = other;
	std::cout << "AAnimal copy has been created." << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other) {
	if (this != &other)
		_type = other._type;
	return *this;
}

const std::string& AAnimal::getType() const {
	return _type;
}

void AAnimal::makeSound() const {
		std::cout << "Grrrrr." << std::endl;
}

void AAnimal::setType(std::string const &type) {
	this->_type = type;
}
