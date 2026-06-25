#include "parcing.h"
#include "filter_by_name.h"
#include "max_score.h"
#include "average_score.h"
#include <iostream>
#include <exception>


int main() {
	std::map<std::string, int> map;
	try {
		map = parcing("test.txt");
	}
	catch (const std::exception& e) {
		std::cerr << e.what();
	}

	auto vec = filter_by_name("Ivanov", map);
	max_score(map);
	average_score(map);
}