#include "Dog.hpp"

Dog::Dog() {
	_type = "Dog";
	std::cout << "Dog born." << std::endl;
};

Dog::~Dog() {
	std::cout << "Dog died." << std::endl;
};

Dog::Dog(const Dog& other) {
	*this = other;
	std::cout << "Dog copy born." << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other)
		_type = other._type;
	return *this;
}

void Dog::makeSound() const {
		std::cout << "Woof." << std::endl;
}
