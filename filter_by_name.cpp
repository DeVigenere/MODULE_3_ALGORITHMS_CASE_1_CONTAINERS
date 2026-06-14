#include <string>
#include <map>
#include <iostream>
#include "filter_by_name.h"

void filter_by_name(std::string name, std::map<std::string, int> map) {
	auto it = map.begin();
	if (map.find(name) == map.end()) {
		std::cout << "Not found!";
	}
	else {
		it = map.find(name);
		std::cout << it->second << std::endl;
	}
}