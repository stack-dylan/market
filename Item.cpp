#include "Item.h"
#include <iostream>
#include <iomanip>

Item::Item(std::string nm, int cp) {
    name = nm;
    cprice = cp;
}

float Item::price() const {
    return float(cprice)/100;
}

int Item::cents() const {
    return cprice;
}

void Item::print(void) const {
    std::cout << name << " $" << std::fixed
        << std::setprecision(2) << price();
}