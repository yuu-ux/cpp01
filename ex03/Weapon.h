#ifndef WEAPON_H
# define WEAPON_H

#include <string>

class Weapon {
	public:
		Weapon(std::string _type);
		const std::string& getType();
		void setType(std::string _type);

	private:
		std::string type;
};

#endif
