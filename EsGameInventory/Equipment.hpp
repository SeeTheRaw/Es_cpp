#ifndef EQUIPMENT_HPP
#define EQUIPMENT_HPP
#include "InventoryItem.hpp"

class Equipment : public InventoryItem{
    
    public:

    void display() const override{
        std::cout << "Equipment" << std::endl;
    }
};

#endif // EQUIPMENT_HPP