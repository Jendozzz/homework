#include "example_list_iterator.h"
#include <iostream>


int main() {

	list<int> tmp;
	tmp.insert(1);
	tmp.insert(2);
	tmp.insert(3);
	auto begin = tmp.begin();
	auto end = tmp.end();
	

	while (begin != end) {
		std::cout << *begin << std::endl;
		++begin;
	}

	for (auto i = tmp.begin(); i != tmp.end(); ++i) {
		std::cout << *i << std::endl;
	}

	for (auto& item : tmp) { //for each
		std::cout << item << std::endl;
	}
}
