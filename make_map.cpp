#include <string>
#include <map>
#include <fstream>
#include "make_map.h"

std::map<std::string, int> make_map(std::string input_file) {
	std::map<std::string, int> map_school;
	std::ifstream in_file(input_file);
	if (!in_file.is_open()) {
		throw std::runtime_error("cannot open input file!");
	}
	std::string line;
	while (std::getline(in_file, line)) {
		if (line.empty()) {
			continue;
		}
		size_t dot_and_zapyatya = line.find(';');
		std::string name = line.substr(0, dot_and_zapyatya);
		int score = std::stoi(line.substr(dot_and_zapyatya + 1));
		map_school.emplace(name, score);
	}
	return map_school;
}