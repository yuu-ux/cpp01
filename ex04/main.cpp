#include <fstream>
#include <iostream>
#include <string>
#include <cstring>

const int kReplaceNum = 9;
int main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "usage ./sed_is_for_losers filename s1 s2" << std::endl;
		return 1;
	}
	std::ifstream ifs(argv[1]);
	size_t s1_num = std::strlen(argv[1]);
	char *dest = new char[s1_num + kReplaceNum];
	std::strcpy(dest, argv[1]);
	std::strcat(dest, ".replace");
	std::ofstream ofs(dest);
	if (!ifs || !ofs) return 1;
	std::string line;
	std::string target = argv[2];
	while (std::getline(ifs, line)) {
		if (target == line) {
			ofs << argv[3] << std::endl;
		} else {
			ofs << line << std::endl;
		}
	}
	return 0;
}
