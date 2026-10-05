#pragma once

#include <iostream>

class wrongAnimal {
	protected:
		std::string _type;
	public:
		wrongAnimal();
		wrongAnimal(const wrongAnimal& other);
		virtual ~wrongAnimal();
		wrongAnimal& operator=(const wrongAnimal& other);
		const std::string& getType() const;
		void makeSound() const;
};
