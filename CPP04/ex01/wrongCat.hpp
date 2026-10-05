#pragma once

#include "wrongAnimal.hpp"

class wrongCat : public wrongAnimal {
	public:
		wrongCat();
		wrongCat(const wrongCat& other);
		~wrongCat();
		wrongCat& operator=(const wrongCat& other);
		void makeSound() const;
};
