#include "Zombie.h"

void Zombie::randomChump(std::string name) {
	Zombie zombie(name);
	zombie.announce();
}
