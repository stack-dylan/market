#ifndef ITEM_H
#define ITEM_H
#include <string>

class Item {
public:
    Item(std::string nm, int p);
    float price() const;
    int cents() const;
    std::string name;
    void print(void) const;
private:
    int cprice; //stores price as integer cents
};
#endif