#include "Cat.hpp"

Cat::Cat() {
	_type = "Cat";
	std::cout << "Cat spawned." << std::endl;
};

Cat::~Cat() {
	std::cout << "Cat despawned." << std::endl;
};

Cat::Cat(const Cat& other) {
	*this = other;
	std::cout << "Cat copy spawned." << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other)
		_type = other._type;
	return *this;
}

void Cat::makeSound() const {
		std::cout << "Meow." << std::endl;
}
