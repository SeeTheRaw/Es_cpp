#ifndef LISTACOMPERE_H
#define LISTACOMPERE_H
#include <iostream>
#include <string>
#include <Map>
#include "Item.hpp"

class ListaCompere{
    public:
    ListaCompere(string nlista, std::map<Item *, int> lSpesa) : nomeLista(nlista), listaSpesa(lSpesa) {};

    const string &getNomeLista() 
    {
        return nomeLista;
    }

    void addElement(Item *obj, int quantita)
    {
        listaSpesa.insert(std::pair<Item*, int>(obj, quantita));
    }

    void removeElement(Item* obj)
    {
        listaSpesa.erase(obj);
    }

    void setNomeLista(const string &nlista)
    {
        ListaCompere::nomeLista = nlista;
    }

    void posPrint(int n)
    {
        int count = 0;
        for(auto &itr:listaSpesa){
            if(count == n){
                itr.first->printItem();
                break;
            }
            count++;
        }
    }

    void printList()
    {
        for(auto itr = listaSpesa.begin(); itr != listaSpesa.end(); itr++){
            itr->first->printItem();
        }
    }

    void checkPurchased()
    {
        for(auto itr = listaSpesa.begin(); itr != listaSpesa.end(); itr++){
            if(itr->first->isPurchased() == false){
                itr->first->printItem();
            }
        }
    }

    private:
    string nomeLista;
    std::map <Item*, int> listaSpesa;
};
#endif // LISTACOMPERE_H