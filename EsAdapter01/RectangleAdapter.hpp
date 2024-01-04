#ifndef RECTANGLE_ADAPTER_HPP
#define RECTANGLE_ADAPTER_HPP
#include "NewRectangle.hpp"
#include "OldRectangle.hpp"

class RectangleAdapter : public OldRectangle, private NewRectangle{
    public:
    RectangleAdapter(OldRectangle *a) : adaptee(a){}
    virtual ~RectangleAdapter() {}

    virtual void draw() const {
        std::cout << "RectangleAdapter draw x: " << getULx() << " -y:" << getULy() << "-w:" << getLRx() << "h:" << getLRy() << std::endl;
    }

    virtual int getULx() const {
        return NewRectangle::getUpperLeftX();
    }

    virtual int getULy() const {
        return NewRectangle::getUpperLeftY();
    }

    virtual int getLRx() const {
        return NewRectangle::getUpperLeftX() + NewRectangle::getWidth();
    }

    virtual int getLRy() const {
        return NewRectangle::getUpperLeftY() + NewRectangle::getHeight();
    }

    private:
    OldRectangle *adaptee;

};

#endif // RECTANGLE_ADAPTER_HPP