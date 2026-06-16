#include <map>
#include <string>
#include <iostream>
#include "max_score.h"

void max_score(const std::map<std::string, int>& map) {
	if (map.empty()) {
		std::cout << "No data!\n";
		return;
	}
	int max = map.begin()->second;;
	for (const auto& i: map) {
		if (i.second > max) {
			max = i.second;
		}
	}
	for (const auto& i : map){
		if (i.second == max) {
			std::cout << i.first << std::endl;
		}
	}
}