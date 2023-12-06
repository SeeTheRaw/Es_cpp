#ifndef OBSERVER_H
#define OBSERVER_H
#include "Subject.hpp"

class Observer{
    public:
    virtual void UpdateRAM() = 0;
    virtual void UpdateCPU() = 0;
};

#endif // OOBSERVER_H