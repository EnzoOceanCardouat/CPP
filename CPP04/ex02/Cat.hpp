#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
	private:
		Brain *_brain;
	public:
		Cat();
		Cat(const Cat &animal);
		~Cat();
		Cat& operator=(const Cat& other);
		void makeSound() const;
		Brain& getBrain() const;
};
