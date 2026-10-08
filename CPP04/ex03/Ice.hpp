#pragma once

# include "AMateria.hpp"

class	Ice : public AMateria {
	public:
		Ice();
		Ice(const Ice &materia);
		Ice&	operator=(const Ice &materia);
		~Ice();
		virtual Ice*	clone() const;
		void	use(ICharacter& target);
};
