#ifndef SHAPE_FACTORY_HPP
#define SHAPE_FACTORY_HPP
#include "Shape.hpp"

//FACTORY

class ShapeFactory{

    public:

    virtual std::unique_ptr<Shape> createShape() const = 0;
    virtual ~ShapeFactory() {}
};

#endif // SHAPE_FACTORY_HPP