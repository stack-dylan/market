#ifndef MARKET_H
#define MARKET_H
#include <string>
#include <map>
#include "Item.h"

class Market {
public:
    Market(void);
	std::map<Item*, int> hold;
	void print(void) const;
	void add(Item* i, int count);
};
#endif 
