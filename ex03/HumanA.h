#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.h"
#include <iostream>

class HumanA {
	public:
		HumanA(std::string _name, Weapon& _weapon);
		void attack();

	private:
		Weapon& weapon;
		std::string name;
};

#endif
