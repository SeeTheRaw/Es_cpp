#ifndef SHOPPING_H
#define SHOPPING_H
#include <list>
#include "Item.hpp"

class ShoppingList{
    public:
        ShoppingList(std::list<Item *> lSpesa) : listaSpesa(lSpesa) {};

            void addElement(Item *obj)
        {

            listaSpesa.push_back(obj);
        }

    void removeElement(Item* obj){
        
        listaSpesa.remove(obj);
    }

    void posPrint(int n){
        int count = 0;
        for(auto &itr:listaSpesa){
            if(count == n){
                itr->printItem();
                break;
            }
            count++;
        }
    }

    void printList(){
        for(auto itr = listaSpesa.begin(); itr != listaSpesa.end(); itr++){
            (*itr)->printItem();
        }
    }


    private:
    std::list <Item*> listaSpesa;
};


#endif