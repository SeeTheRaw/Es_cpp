#ifndef OLD_RECTANGLE_HPP
#define OLD_RECTANGLE_HPP
#include <iostream>

class OldRectangle{

    public:

        virtual void draw() const = 0;
        virtual int getULx() const = 0;
        virtual int getULy() const = 0;
        virtual int getLRx() const = 0;
        virtual int getLRy() const = 0;
        virtual ~OldRectangle() = 0 {}
};

#endif // OLD_RECTANGLE_HPP