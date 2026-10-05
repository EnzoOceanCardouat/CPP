#pragma once

#include <iostream>

class Weapon {
	private:
		std::string _type;
	public:
		void setType(std::string const &);
		std::string const & getType();
		Weapon(std::string const &type);
};
