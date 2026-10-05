#include "Cat.hpp"

Cat::Cat() {
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Cat spawned." << std::endl;
};

Cat::~Cat() {
	delete _brain;
	std::cout << "Cat despawned." << std::endl;
};

Cat::Cat(const Cat &animal) : AAnimal(animal) {
	*this = animal;
	_brain = new Brain(*animal._brain);
	std::cout << "Dog copy born." << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other)
		_type = other._type;
	return *this;
}

void Cat::makeSound() const {
		std::cout << "Meow." << std::endl;
}

Brain& Cat::getBrain() const {
	return *_brain;
}
