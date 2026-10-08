#pragma once

# include "ICharacter.hpp"
# include "AMateria.hpp"

class	Character : public ICharacter {
	private:
		std::string	_name;
		AMateria*	_inventory[4];
	public:
		Character();
		Character(std::string const &name);
		Character(Character  &other);
		Character&	operator=(Character &copy);
		~Character();
		std::string const&	getName() const;
		void	equip(AMateria* materia);
		void	unequip(int idx);
		void	use(int idx, ICharacter &target);
};
