#ifndef HARL_H
# define HARL_H

#include <string>
#include <iostream>

class Harl {
	public:
		void complain(std::string level);
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		typedef void (Harl::*HarlFunc)(void);
};

#endif
