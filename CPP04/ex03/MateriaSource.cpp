#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {}

MateriaSource::MateriaSource(MateriaSource &other) {
	for (int i =0; i < 4; i++) {
		if (other._memory[i])
			_memory[i] = other._memory[i]->clone();
		else
			_memory[i] = NULL;
	}
	*this = other;
}

MateriaSource &MateriaSource::operator=(MateriaSource &other) {
	if (this != &other) {
		for (int i = 0; i < 4; i++) {
			if (_memory[i])
				delete _memory[i];
			if (other._memory[i])
				_memory[i] = other._memory[i]->clone();
			else
				_memory[i] = NULL;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource() {
	for (int i =0; i < 4; i++) {
		if (_memory[i])
			delete _memory[i];
	}
};

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
		if (_memory[i] && _memory[i]->getType() == type)
				return _memory[i]->clone();
	}
	return 0;
}
