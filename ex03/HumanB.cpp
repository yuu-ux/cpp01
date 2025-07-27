#include "HumanB.h"

HumanB::HumanB(std::string name) : weapon_(NULL), name_(name) {}

void HumanB::setWeapon(Weapon& weapon) {
	weapon_ = &weapon;
}

void HumanB::attack() {
    if (weapon_ == NULL) {
        return ;
    }
	std::cout << name_ << " attacks with their " << weapon_->getType() << std::endl;
}
