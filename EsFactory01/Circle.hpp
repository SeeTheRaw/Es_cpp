#ifndef CIRCLE_HPP 
#define CIRCLE_HPP
#include "Shape.hpp"

//CONCRETE PRODUCT 1

class Circle : public Shape{

    public:

    void draw() const override{
        std::cout << "Drawing a Circle\n";
    }
};

#endif // CIRCLE_HPP