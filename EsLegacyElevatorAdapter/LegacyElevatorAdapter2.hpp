#ifndef LEGACYELEVATORADAPTER_HPP
#define LEGACYELEVATORADAPTER_HPP
#include "Elevator.hpp"
#include "LegacyElevator.hpp"

//VERSIONE OBJECT ADAPTER ///////////////////////////////////////////////////////////////////////////////////////////////////////   

class LegacyElevatorAdapter : public Elevator{

    public:

    LegacyElevatorAdapter() : legacyElevator(new LegacyElevator()) {}

    virtual void open_doors() override{
        legacyElevator->open_doors();
    }

    virtual void close_doors() override{
        legacyElevator->close_doors();
    }

    virtual void move_to(int level) override{
        legacyElevator->move_by(level - legacyElevator->get_current_level());
    }
    
    private:

    LegacyElevator *legacyElevator;
};

#endif // LEGACYELEVATORADAPTER_HPP