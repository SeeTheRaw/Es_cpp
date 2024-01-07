#ifndef SQUARE_FACTORY_HPP
#define SQUARE_FACTORY_HPP
#include "ShapeFactory.hpp"
#include "Square.hpp"

//CONCRETE FACTORY 2

class SquareFactory : public ShapeFactory{
    
    public:

    std::unique_ptr<Shape> createShape() const override{
        return std::make_unique<Square>();
    }
};

#endif // SQUARE_FACTORY_HPP