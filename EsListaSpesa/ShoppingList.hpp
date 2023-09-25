#ifndef SHOPPING_H
#define SHOPPING_H
#include <vector>
#include "Item.hpp"

class ShoppingList{
    public:
    ShoppingList(vector<Item> lista);
    ~ShoppingList();

    private:
    vector<Item> _lista;
};


#endif