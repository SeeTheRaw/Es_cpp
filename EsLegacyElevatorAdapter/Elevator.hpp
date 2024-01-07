#ifndef ELEVATOR_HPP
#define ELEVATOR_HPP
#include <iostream>
using namespace std;

class Elevator{
    
    public:

    virtual void move_to(int level) = 0;
    virtual void open_doors() = 0;
    virtual void close_doors() = 0;
    virtual ~Elevator() {}
};

#endif // ELEVATOR_HPP