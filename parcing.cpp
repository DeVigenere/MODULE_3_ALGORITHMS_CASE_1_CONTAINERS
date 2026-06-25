#include <string>
#include <map>
#include <fstream>
#include "parcing.h"

std::map<std::string, int> parcing(const std::string& input_file) {
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
		const size_t separation = line.find(';');
		std::string name = line.substr(0, separation);
		int score = std::stoi(line.substr(separation + 1));
		map_school.emplace(name, score);
	}
	return map_school;
}