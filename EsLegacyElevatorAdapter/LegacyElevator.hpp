#ifndef LEGACYELEVATOR_HPP
#define LEGACYELEVATOR_HPP
#include <iostream>
using namespace std;

class LegacyElevator{

public:

    LegacyElevator() {}


    int get_current_level() const{
        return current_level;
    }

    void move_by(int level){
        current_level += level;
    }


    void open_doors(){
        doors_open = true;
    }
    void close_doors(){
        doors_open = false;
    }

private:

    int current_level;
    bool doors_open;
};

#endif // LEGACYELEVATOR_HPP