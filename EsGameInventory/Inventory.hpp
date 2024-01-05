#ifndef INVENTORY_HPP
#define INVENTORY_HPP
#include "Equipment.hpp"
#include "Weapon.hpp"
#include "Robot.hpp"
#include <vector>

template <typename T>
class Inventory{

    public:

    explicit Inventory(int maxSize) : maxSize(maxSize) {}

    // Aggiunge un elemento in coda
    void addItem(const T &item){
        if (items.size() <= maxSize){
            items.push_back(item);
        }
        else{
            throw std::out_of_range("L'inventario è pieno.");
        }
    }

    // Aggiunge un elemento in una posizione specifica
    void insertItem(const T &item, int position){
        if (position <= items.size() && items.size() <= maxSize){
            items.insert(items.begin() + position, item);
        }
        else{
            throw std::out_of_range("Posizione non consentita o inventario pieno.");
        }
    }

    // Rimuove un elemento dalla posizione specifica
    void removeItem(int position){
        if (position <= items.size()){
            items.erase(items.begin() + position);
        }
        else{
            throw std::out_of_range("Posizione non consentita.");
        }
    }

    // Restituisce un elemento dalla posizione specifica
    T getItem(int position) const{
        if (position <= items.size()){
            return items[position];
        }
        else{
            throw std::out_of_range("Posizione non consentita.");
        }
    }

private:

    int maxSize;
    std::vector<T> items;
};

#endif // INVENTORY_HPP


