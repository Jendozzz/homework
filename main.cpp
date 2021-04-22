//#include "example_list_iterator.h"
//#include "dlist.h"
#include "vector.h"
#include <vector>
#include <iostream>
#include <list>


int main() {

	
	std::vector<int> tmp(1);
	tmp.push_back(3);
	tmp.insert(tmp.begin(), 5);
	for (auto i = tmp.rbegin(); i != tmp.rend(); ++i) {
		std::cout  << * i << std::endl;
	}
	
}
