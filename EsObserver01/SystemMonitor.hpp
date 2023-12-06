#ifndef SYSTEMMONITOR_HPP
#define SYSTEMMONITOR_HPP
#include "RAMUsage.hpp"
#include "CPUUsage.hpp"
#include <list>
#include <iostream>
#include "Observer.hpp"
#include "Subject.hpp"

class SystemMonitor : public Observer{
    public:
    SystemMonitor(CPUUsage* s1, RAMUsage* s2) : s1(s1), s2(s2){};
    ~SystemMonitor(){};

    void UpdateRAM() override {
        std::cout << "La RAM libera è: " << dynamic_cast<RAMUsage *>(s2)->getRamFree() << std::endl;
    }

    void UpdateCPU() override {
        std::cout << "La Percentuale di CPU è al: " << dynamic_cast<CPUUsage *>(s1)->getCPUUsage() << std::endl;
    }

    private :
    CPUUsage* s1;
    RAMUsage* s2;
};

#endif // SYSTEMMONITOR_HPP