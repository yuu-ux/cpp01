#include "Zombie.h"

Zombie::Zombie() : name("") {}

Zombie::Zombie(std::string _name) {
	name = _name;
}

Zombie::~Zombie() {
	std::cout << name << "解放" << std::endl;
}

void Zombie::setZombie(std::string _name) { this->name = _name; }

void Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
