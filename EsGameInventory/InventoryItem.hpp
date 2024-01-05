#ifndef INVENTORY_ITEM_HPP
#define INVENTORY_ITEM_HPP
#include <iostream>
#include <string>
#include <exception>
using namespace std;

class InventoryItem{
    public:

    virtual ~InventoryItem() = default;
    virtual void display() const = 0;
};

#endif // INVENTORY_ITEM_HPP
