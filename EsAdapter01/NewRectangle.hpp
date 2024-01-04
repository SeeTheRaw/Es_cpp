#ifndef NEW_RECTANGLE_HPP
#define NEW_RECTANGLE_HPP
#include "OldRectangle.hpp"

class NewRectangle{
    public:
    NewRectangle();
    NewRectangle(int ux, int uy, int w, int h) : upperLeftX(ux), upperLeftY(uy), width(w), height(h) {}
    virtual ~NewRectangle() {}

    virtual void draw() = 0;

    int getUpperLeftX() const { 
        return upperLeftX; 
    }

    int getUpperLeftY() const {
        return upperLeftY;
    }

    int getWidth() const {
        return width;
    }

    int getHeight() const {
        return height;
    }

    private:
    int upperLeftX;
    int upperLeftY;
    int width;
    int height;

};

#endif // NEW_RECTANGLE_HPP