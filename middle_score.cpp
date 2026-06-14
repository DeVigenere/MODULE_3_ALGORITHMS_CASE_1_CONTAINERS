#include <string>
#include <map>
#include <iostream>
#include "middle_score.h"

void middle_score(std::map<std::string, int> map) {
	double middle = 0;
	for (auto i = map.begin(); i != map.end(); i++) {
		middle += i->second;
	}
	std::cout << (middle / map.size());
}