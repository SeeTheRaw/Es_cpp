#ifndef LISTMANAGER_HPP
#define LISTMANAGER_HPP
#include "ShoppingList.hpp"

class ListManager{
    public:
        ListManager(std::list<ShoppingList *> lManager) : listaManager(lManager) {};

        void addList(ShoppingList *obj)
        {
            listaManager.push_back(obj);
        }

        void removeList(ShoppingList *obj)
        {
            listaManager.remove(obj);
        }

        void printListNames()
        {
            for (auto itr = listaManager.begin(); itr != listaManager.end(); itr++)
            {
                cout << (*itr)->getName() << endl;
               
            }
        }

        void printMissing()
        {
            for (auto itr = listaManager.begin(); itr != listaManager.end(); itr++)
            {
                (*itr)->checkPurchased();
            }
        }

    private:
        std::list<ShoppingList *> listaManager;
};

#endif // LISTMANAGER_HPP