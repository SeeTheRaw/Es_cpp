#ifndef SQUARE_HPP
#define SQUARE_HPP
#include "Shape.hpp"

//CONCRETE PRODUCT 2

class Square : public Shape{

    public:

    void draw() const override{
        std::cout << "Drawing a Square\n";
    }
};

#endif // SQUARE_HPP