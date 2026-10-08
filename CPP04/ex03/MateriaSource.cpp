#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {}

MateriaSource::MateriaSource(MateriaSource &other) {
	*this = other;
}

MateriaSource &MateriaSource::operator=(MateriaSource &other) {
	if (this != &other)
		_memory[4] = other._memory[4];
	return *this;
}

MateriaSource::~MateriaSource() {};

void MateriaSource::learnMateria(AMateria* m) {
	for (int i =0; i < 4; i++) {
		if (!_memory[i]) {
			_memory[i] = m;
			return ;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type) {
	for (int i =0; i < 4; i++) {
		if (_memory[i]) {
			if (type == "Ice") {
				new AMateria(type);
			}
			else if (type == "Cure") {

			}
			else
				return 0;
		}
	}

}
