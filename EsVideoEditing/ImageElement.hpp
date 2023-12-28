#ifndef IMAGE_ELEMENT_H
#define IMAGE_ELEMENT_H
#include <iostream>
#include <string>
using namespace std;

class ImageElement{
public:
ImageElement(string n, int r) : name(n), resolution(r) {}
~ImageElement() {}

string getname() const{
    return name;
}
void setName(const string &n){
    name = n;
}

int getresolution() const{
    return resolution;
}
void setResolution(const int &r){
    resolution = r;
}


int getDuration() const{
    return duration;
}

void play() const{
    cout << "Name ==> " << name << "                    Duration ==> " << duration << " seconds" << endl;
}


private : 

string name;
int resolution;
static const int duration = 5;

};
#endif //IMAGE_ELEMENT_H