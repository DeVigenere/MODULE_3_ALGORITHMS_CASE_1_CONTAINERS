#include <map>
#include <string>
#include <iostream>
#include "max_score.h"

void max_score(const std::map<std::string, int>& map) {
	int max;
	if (map.begin()->second) {
		max = map.begin()->second;
	}
	else {
		std::cout << "the sheet is filled out incorrectly.";
		return;

	}
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