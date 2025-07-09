#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie {
	public:
		Zombie();
		~Zombie();
		Zombie(std::string _name);
		void announce(void);
		Zombie* newZombie(std::string);
		void randomChump(std::string name);
	private:
		std::string name;
};

#endif
