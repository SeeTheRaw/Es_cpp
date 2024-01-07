#ifndef LEGACYELEVATORADAPTER_HPP
#define LEGACYELEVATORADAPTER_HPP
#include "Elevator.hpp"
#include "LegacyElevator.hpp"

//VERSIONE CLASS ADAPTER ///////////////////////////////////////////////////////////////////////////////////////////////////////

class LegacyElevatorAdapter : public Elevator, private LegacyElevator{
    
    public:

    LegacyElevatorAdapter() : LegacyElevator(){}


    virtual void open_doors() override{
        LegacyElevator::open_doors();
    }

    virtual void close_doors() override{
        LegacyElevator::close_doors();
    }


    virtual void move_to(int level) override{
        LegacyElevator::move_by(level - LegacyElevator::get_current_level());
    }

};

#endif // LEGACYELEVATORADAPTER_HPP