#ifndef RAMUSAGE_HPP
#define RAMUSAGE_HPP
#include <list>
#include <iostream>
#include "Observer.hpp"
#include "Subject.hpp"

class RAMUsage : public Subject{
public:
    RAMUsage(int ramfree) : ramfree(ramfree){};
    ~RAMUsage(){};

    void AddObserver(Observer* o){
        obs.push_back(o);
    }
    void RemoveObserver(Observer* o){
        obs.remove(o);
    }

    void setRamFree(int ramfree){
        this->ramfree = ramfree;
        if(ramfree < 500){
            Notify();
        }
    }

    int getRamFree(){
        return ramfree;
    }

    void Notify() override {
        for(auto &itr : obs){
            itr->UpdateRAM();
        }
    }

private:
int ramfree;
std::list<Observer *>obs;
};


#endif // RAMUSAGE_HPP