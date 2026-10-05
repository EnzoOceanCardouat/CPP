#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
	private:
		Brain *_brain;
	public:
		Dog();
		Dog(const Dog &animal);
		~Dog();
		Dog& operator=(const Dog& other);
		void makeSound() const;
		Brain& getBrain() const;
};
