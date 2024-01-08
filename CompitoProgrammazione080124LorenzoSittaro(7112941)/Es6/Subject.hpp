#ifndef SUBJECT_HPP
#define SUBJECT_HPP
#include "Observer.hpp"

class Observer;

class Subject{
    
    public:

    virtual ~Subject() {}

    virtual void addObserver(Observer *observer) = 0;
    virtual void removeObserver(Observer *observer) = 0;
    virtual void notifyObservers(const string &message) = 0;
};

#endif // SUBJECT_HPP