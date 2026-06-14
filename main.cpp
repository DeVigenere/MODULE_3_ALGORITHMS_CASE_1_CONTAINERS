#include "make_map.h"
#include "filter_by_name.h"
#include "max_score.h"
#include "middle_score.h"


int main() {
	auto map = make_map("test.txt");
	filter_by_name("Ivanov", map);
	max_score(map);
	middle_score(map);

}