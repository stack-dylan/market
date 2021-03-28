#include <iostream>
#include <map>
#include <string>
#include "Market.h"
#include "Item.h"
using namespace std;



int main() {
    Market m;

    m.add(new Item("Apple", 200), 100);
    m.add(new Item("Bear", 800), 240);
    m.add(new Item("Crackers", 321), 344);
    m.add(new Item("Dogs", 234), 346);
    
    m.print();
 
}
