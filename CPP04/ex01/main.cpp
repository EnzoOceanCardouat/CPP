#include "Dog.hpp"
#include "Cat.hpp"
#include "wrongCat.hpp"
#include "Brain.hpp"

int main()
{
	Dog original;
	original.getBrain().setIdea("I love bones!", 0);

	Dog copy = original;
	original.getBrain().setIdea("I hate cats!", 0);

	std::cout << std::endl;
	std::cout << "Original idea: " << original.getBrain().getIdea(0) << std::endl;
	std::cout << "Copy idea: " << copy.getBrain().getIdea(0) << std::endl;
	std::cout << std::endl;


	int size = 4;
	Animal *animal[size];

	for (int i = 0; i < size/2; i++) {
		animal[i] = new Dog();
		animal[i]->setType("Dog");
	}
	for (int j = size/2; j < size;j++) {
		animal[j] = new Cat();
		animal[j]->setType("Cat");
	}

	std::cout << std::endl;
	for (int k = 0; k < size; k++) {
		std::cout << "Type: " << animal[k]->getType() << "." << std::endl;
	}
	std::cout << std::endl;
	for (int del = 0; del < size; del++) {
		delete animal[del];
	}
	return 0;
}
