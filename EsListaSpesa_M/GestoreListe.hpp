#ifndef GESTORELISTE_HPP
#define GESTORELISTE_HPP
#include "ListaCompere.hpp"

class GestoreListe{
public:
GestoreListe(std::map<string, ListaCompere *> lManager) : listaManager(lManager) {};

void addList(ListaCompere *obj){
    listaManager.insert(std::pair<string, ListaCompere *>(obj->getNomeLista(), obj));
}

void removeList(ListaCompere *obj){
    listaManager.erase(obj->getNomeLista());
}

void printListNames(){
    for(auto itr = listaManager.begin(); itr != listaManager.end(); itr++){
        cout <<"\n"<< itr->first << endl;
    }
}

void printMissing(){
    for(auto itr = listaManager.begin(); itr != listaManager.end(); itr++){
        itr->second->checkPurchased();
    }
}

private:
std::map<string, ListaCompere *> listaManager;
};

#endif