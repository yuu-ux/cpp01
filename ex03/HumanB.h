#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.h"
#include <iostream>

class HumanB {
	public:
		HumanB(std::string _name);
		void attack();
		void setWeapon(Weapon &_weapon);

	private:
		Weapon* weapon_;
		std::string name_;
};

#endif
