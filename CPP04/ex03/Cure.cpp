#include "Cure.hpp"

Cure::Cure() {}

Cure::Cure(const Cure &other) {
	*this = other;
}

Cure& Cure::operator=(const Cure &other) {
	if (this != &other)
		_type = other._type;
	return *this;
}

Cure::~Cure() {}

Cure *Cure::clone () const {
	return NULL;
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target->getName() << "’s wounds *" << std::endl;
}
