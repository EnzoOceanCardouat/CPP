#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanB {
	private:
		std::string _name;
		Weapon *_WeaponB;
	public:
		HumanB(std::string name);
		void setWeapon(Weapon& weapon);
		std::string getName();
		void attack();
};
