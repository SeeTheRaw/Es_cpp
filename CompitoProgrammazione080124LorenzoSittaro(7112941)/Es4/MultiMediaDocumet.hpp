#ifndef MULTI_MEDIA_DOCUMENT_HPP
#define MULTI_MEDIA_DOCUMENT_HPP
#include <iostream>
#include <string>
#include <list>
#include <map>
using namespace std;

class MultiMediaDocument {

    public:

    virtual void show() = 0;
    virtual ~MultiMediaDocument(){}

};

#endif // MULTI_MEDIA_DOCUMENT_HPP