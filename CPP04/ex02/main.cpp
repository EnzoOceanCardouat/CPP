#include "Dog.hpp"
#include "Cat.hpp"
#include "wrongCat.hpp"
#include "Brain.hpp"


int main()
{
	AAnimal *dog = new Dog();
	AAnimal *cat = new Cat();

	std::cout << std::endl;
	dog->makeSound();
	cat->makeSound();
	std::cout << std::endl;

	delete dog;
	delete cat;
	return 0;
}
