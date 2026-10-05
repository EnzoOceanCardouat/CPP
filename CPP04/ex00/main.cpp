#include "Dog.hpp"
#include "Cat.hpp"
#include "wrongCat.hpp"

int main()
{
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	dog->makeSound();
	cat->makeSound();
	animal->makeSound();
	delete animal;
	delete dog;
	delete cat;

	const wrongAnimal* WrongAnimal = new wrongAnimal();
	const wrongAnimal* WrongCat = new wrongCat();
	std::cout << WrongCat->getType() << " " << std::endl;
	WrongAnimal->makeSound();
	WrongCat->makeSound();
	delete WrongAnimal;
	delete WrongCat;
	return 0;
}
