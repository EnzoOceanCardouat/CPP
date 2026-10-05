#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanA {
	private:
		std::string _name;
		Weapon &_WeaponA;
	public:
		HumanA(std::string name, Weapon &weapon);
		void attack();
		std::string getName();
		Weapon & getWeapon();
};
