#include "Dog.hpp"

Dog::Dog() {
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Dog born." << std::endl;
};

Dog::~Dog() {
	delete _brain;
	std::cout << "Dog died." << std::endl;
};

Dog::Dog(const Dog &animal) : AAnimal(animal) {
	*this = animal;
	_brain = new Brain(*animal._brain);
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

Brain& Dog::getBrain() const {
	return *_brain;
}
