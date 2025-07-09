#include "Zombie.h"

int main(void) {
	Zombie zombie1 = Zombie("zombie1");
	Zombie* zombie1_child = zombie1.newZombie("child zombie1");
	zombie1.announce();
	zombie1_child->announce();
	zombie1.randomChump("zombie2");
	delete zombie1_child;
	return 0;
}
