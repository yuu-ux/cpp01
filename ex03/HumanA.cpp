#include "HumanA.h"

HumanA::HumanA(std::string _name, Weapon& weapon) : weapon(weapon), name(_name) {}

void HumanA::attack() {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
