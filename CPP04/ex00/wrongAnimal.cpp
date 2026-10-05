#include "wrongAnimal.hpp"

wrongAnimal::wrongAnimal() {
	_type = "wrongAnimal";
	std::cout << "wrongAnimal has been created." << std::endl;
};

wrongAnimal::~wrongAnimal() {
	_type = "wrongAnimal";
	std::cout << "wrongAnimal has been destroyed." << std::endl;
};

wrongAnimal::wrongAnimal(const wrongAnimal& other) {
	*this = other;
	std::cout << "wrongAnimal copy has been created." << std::endl;
}

wrongAnimal& wrongAnimal::operator=(const wrongAnimal& other) {
	if (this != &other)
		_type = other._type;
	return *this;
}

const std::string& wrongAnimal::getType() const {
	return _type;
}

void wrongAnimal::makeSound() const {
		std::cout << "wrongGrrrrr." << std::endl;
}

