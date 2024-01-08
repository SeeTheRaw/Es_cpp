#ifndef OBSERVER_HPP
#define OBSERVER_HPP
#include <iostream>
#include <string>
#include <list>
#include "Subject.hpp"

using namespace std;

class Observer{

    public:

    virtual ~Observer() {};
    virtual void update(const string &message) = 0;
};

#endif // OBSERVER_HPP