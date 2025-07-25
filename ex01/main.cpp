#include "Zombie.h"

int main(void) {
	int N = 3;
	Zombie zombie;
	Zombie *zombie_horde = zombieHorde(N, "zombie");
	for (int i = 0; i < N; i++) {
		zombie_horde[i].announce();
	}
	delete[] zombie_horde;
	return 0;
}
