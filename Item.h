#ifndef ITEM_H
#define ITEM_H
#include <string>

class Item {
public:
    Item(std::string nm, int p);
    float price();
    int cents();
    std::string name;
    void print(void);
private:
    int cprice; //stores price as integer cents
};
#endif