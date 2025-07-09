#include "Weapon.h"

Weapon::Weapon(std::string _type) {
	type = _type;
}

const std::string& Weapon::getType() {
	return type;
}

void Weapon::setType(std::string _type) {
	type = _type;
}
