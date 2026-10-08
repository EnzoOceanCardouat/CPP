#include "Ice.hpp"

Ice::Ice() {}

Ice::Ice(const Ice &other) {
	*this = other;
}

Ice& Ice::operator=(const Ice &other) {
	if (this != &other)
		_type = other._type;
	return *this;
}

Ice::~Ice() {}

Ice *Ice::clone () const {
	return NULL;
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target->getName() << " *" << std::endl;
}
