#pragma once

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class	MateriaSource : public IMateriaSource {
	private:
		AMateria*	_memory[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource &other);
		MateriaSource&	operator=(MateriaSource &other);
		~MateriaSource();
		void	learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const &type);
};
