#include "Item.h"
#include <iostream>
#include <iomanip>

Item::Item(std::string nm, int cp) {
    name = nm;
    cprice = cp;
}

float Item::price() {
    return float(cprice)/100;
}

int Item::cents() {
    return cprice;
}

void Item::print(void) {
    std::cout << name << " $" << std::fixed
        << std::setprecision(2) << price() << std::endl;
}