#include <map>
#include <string>
#include <iostream>
#include "max_score.h"

void max_score(std::map<std::string, int> map) {
	int max = 0;
	for (auto i = map.begin(); i != map.end(); i++) {
		if (i->second > max) {
			max = i->second;
		}
	}
	for (auto i = map.begin(); i != map.end(); i++) {
		if (i->second == max) {
			std::cout << i->first << std::endl;
		}
	}
}