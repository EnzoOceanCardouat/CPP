#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const &type) : _type(type) {};

AMateria::AMateria(const AMateria& other) {
	*this = other;
}

AMateria::~AMateria() {};

AMateria& AMateria::operator=(const AMateria& other) {
	if (this != &other)
		_type = other._type;
	return *this;
}

std::string const & AMateria::getType() const {
	return _type;
}

AMateria* AMateria::clone() const {
	return NULL;
}

void AMateria::use(ICharacter& target) {
	if (this->getType() == "Ice")
		std::cout << "* shoots an ice bolt at " << target->getName() << " *" << std::endl;
	else if (this->getType() == "Cure")
		std::cout << "* heals " << target->getName() << "’s wounds *" << std::endl;
	else
		std::cout << "* do nothings *" << std::endl;
}
