#ifndef ROBOT_HPP
#define ROBOT_HPP
#include "InventoryItem.hpp"

class Robot : public InventoryItem{

    public:

    void display() const override{
        std::cout << "Robot" << std::endl;
    }
};

#endif // ROBOT_HPP