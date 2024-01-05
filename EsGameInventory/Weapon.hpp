#ifndef WEAPON_HPP
#define WEAPON_HPP
#include "InventoryItem.hpp"

class Weapon : public InventoryItem{
    
    public:

    void display() const override{
        std::cout << "Weapon" << std::endl;
    }
};

#endif // WEAPON_HPP