#ifndef CIRCLE_FACTORY_HPP
#define CIRCLE_FACTORY_HPP
#include "ShapeFactory.hpp"
#include "Circle.hpp"

//CONCRETE FACTORY 1

class CircleFactory : public ShapeFactory{

    public:

    std::unique_ptr<Shape> createShape() const override{
        return std::make_unique<Circle>();
    }
};

#endif // CIRCLE_FACTORY_HPP