#ifndef SHOPPING_H
#define SHOPPING_H
#include <list>
#include "Item.hpp"

class ShoppingList{
    public:
    ShoppingList(string nlista, std::list<Item *> lSpesa) : nomeLista(nlista), listaSpesa(lSpesa) {};

    void addElement(Item *obj)
    {
        listaSpesa.push_back(obj);
    }

    void removeElement(Item *obj)
    {
        listaSpesa.remove(obj);
    }

    const string &getName()
    {
        return nomeLista;
    }

    void posPrint(int n)
    {
        int count = 0;
        for(auto &itr:listaSpesa){
            if(count == n){
                itr->printItem();
                break;
            }
            count++;
        }
    }

    void printList()
    {
        for(auto itr = listaSpesa.begin(); itr != listaSpesa.end(); itr++){
            (*itr)->printItem();
        }
    }
    
    void checkPurchased()
    {
        for(auto itr = listaSpesa.begin(); itr != listaSpesa.end(); itr++){
            if((*itr)->isPurchased() == false){
                (*itr)->printItem();
            }
        }
    }


    private:
    string nomeLista;
    std::list <Item*> listaSpesa;
};


#endif // SHOPPING_H