#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

void ReplaceStr(const std::string content, std::ofstream& ofs, const std::string &original, const std::string &replacement) {
	std::string::size_type prev = 0;
	std::string::size_type pos;

	while ((pos = content.find(original, prev)) != std::string::npos) {
		ofs << content.substr(prev, pos - prev) << replacement;
		prev = pos + original.length();
	}
	ofs << content.substr(prev);
}

bool ReplaceTextInFile(const std::string &file_name, const std::string &original, const std::string &replacement) {
	std::string after_file_name = file_name + ".replace";

	// 入力・出力準備
	std::ifstream ifs(file_name.c_str());
	std::ofstream ofs(after_file_name.c_str());
	if (!ifs || !ofs) return false;

	// 置換してファイルへ書き込み
	std::stringstream ss;
	ss << ifs.rdbuf();
	std::string content = ss.str();

	ReplaceStr(content, ofs, original, replacement);
	ifs.close();
	ofs.close();
	return true;
}

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "usage ./sed_is_for_losers filename s1 s2" << std::endl;
		return 1;
	}
	if (ReplaceTextInFile(argv[1], argv[2], argv[3]) == false) {
		std::cerr << "Failed I/O Stream" << std::endl;
	}
	return 0;
}
