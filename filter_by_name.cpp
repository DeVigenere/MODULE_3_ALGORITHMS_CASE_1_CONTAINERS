#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include "filter_by_name.h"

std::vector<std::pair<std::string, int>> filter_by_name(const std::string& name, const std::map<std::string, int>& map) {
	std::vector<std::pair<std::string, int>> vec(map.begin(), map.end());
	std::sort(vec.begin(), vec.end(), [&name](const auto& a, const auto& b){
		bool a_match = (a.first == name);
		bool b_match = (b.first == name);
		if (a_match != b_match) {
			return a_match > b_match;
		}
		return a.first < b.first;
		});
	return vec;
}