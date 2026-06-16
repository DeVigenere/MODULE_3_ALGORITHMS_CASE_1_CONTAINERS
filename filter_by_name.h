#pragma once
#include <string>
#include <map>
#include <vector>

std::vector<std::pair<std::string, int>> filter_by_name(const std::string& name, const std::map<std::string, int>& map);