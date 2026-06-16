#include <string>
#include <map>
#include <iostream>
#include "average_score.h"

void average_score(const std::map<std::string, int>& map) {
	double middle = 0;
	if (map.size() == 1) {
		std::cout << map.begin()->first;
		return;
	}
	if (map.size() < 1) {
		std::cout << "empty list!";
		return;
	}
	for (auto i = map.begin(); i != map.end(); i++) {
		if (i->second) {
			middle += i->second;
		}
	}
	std::cout << (middle / map.size());
}