#include "Market.h"
#include <iostream>

Market::Market(void) {}

void Market::print(void) const {
	std::cout << "Market::print() called" << std::endl;
	for (auto i : hold) {
		i.first->print();
		std::cout << i.second << std::endl;
	}
}

void Market::add(Item* i, int count) {
	if (hold.count(i)) {
		hold[i] = count;
	}
}