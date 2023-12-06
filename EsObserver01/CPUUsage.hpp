#ifndef CPUUSAGE_HPP
#define CPUUSAGE_HPP
#include <list>
#include <iostream>
#include "Observer.hpp"
#include "Subject.hpp"

class CPUUsage : public Subject{
public:
    CPUUsage(int cpuUsage): cpuUsage(cpuUsage){};
    ~CPUUsage(){};

    void AddObserver(Observer* o){
        obs.push_back(o);
    }

    void RemoveObserver(Observer* o){
        obs.remove(o);
    }

    void setCPUUsage(int cpuUsage){
        this-> cpuUsage = cpuUsage;
        if(cpuUsage > 80){
            Notify();
        }
    }

    int getCPUUsage(){
        return cpuUsage;
    }


    void Notify() override {
        for (auto &itr : obs)
        {
            itr->UpdateCPU();
        }
    }


private:
    int cpuUsage;
    std::list<Observer *>obs;

};











#endif // CPUUSAGE_HPP