#ifndef SUBJECT_H
#define SUBJECT_H
#include <iostream>
#include <string>
#include <list>
#include "Observer.hpp"
using namespace std;

class Observer;

class Subject{

    public:
    
    virtual ~Subject() {}

    virtual void AddObserver(Observer *o) = 0;
    virtual void RemoveObserver(Observer *o) = 0;
    virtual void Notify() = 0;
};

#endif // SUBJECT_H