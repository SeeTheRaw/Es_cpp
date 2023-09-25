#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <string>
using namespace std;

class Item{

    public:
    Item(string d, int q, string c, bool p);

    void setDescription(string d){
        description = d;
    }

    string getDescription(){
        return description;
    }

    void setQuantity(int q){
        quantity = q;
    }

    int getQuantity(){
        return quantity;
    }

    void setCategory(string c){
        category = c;
    }

    string getCategory(){
        return category;
    }

    void setPurchased(bool p){
        purchased = p;
    }
    
    bool isPurchased(){
        return purchased;
    }

    private:
    string description , category;
    int quantity;
    bool purchased;
};

#endif