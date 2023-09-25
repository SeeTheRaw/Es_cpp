#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <string>
using namespace std;

class Item{

    public:
    Item(string d, int q, string c, bool p) {}
    

    private:
    string _description , _category;
    int _quantity;
    bool _purchased;
};

#endif