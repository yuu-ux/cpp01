#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie {
	public:
		Zombie();
		~Zombie();
		Zombie(std::string _name);
        void setZombie(std::string _name);
		void announce(void);
		Zombie* zombieHorde(int N, std::string name);
	private:
		std::string name;
};

#endif
