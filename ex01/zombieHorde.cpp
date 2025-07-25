#include "Zombie.h"
#include <sstream>

std::string to_string(int n) {
	std::stringstream ss;
	ss << n;
	return ss.str();
}

Zombie* zombieHorde(int N, std::string name) {
	Zombie* zombie = new Zombie[N];
	for (int i = 0; i < N; i++) {
        zombie[i].setZombie(name + to_string(i+1));
	}
	return zombie;
}
