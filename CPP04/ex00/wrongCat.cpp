#include "wrongCat.hpp"

wrongCat::wrongCat() {
	_type = "wrongCat";
	std::cout << "wrongCat spwaned." << std::endl;
};

wrongCat::~wrongCat() {
	std::cout << "wrongCat despawned." << std::endl;
};

wrongCat::wrongCat(const wrongCat& other) {
	*this = other;
	std::cout << "wrongCat copy spwaned." << std::endl;
}

wrongCat& wrongCat::operator=(const wrongCat& other) {
	if (this != &other)
		_type = other._type;
	return *this;
}

void wrongCat::makeSound() const {
		std::cout << "wrongMeow." << std::endl;
}
