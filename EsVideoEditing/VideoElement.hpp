#ifndef VIDEO_ELEMENT_H
#define VIDEO_ELEMENT_H
#include <iostream>
#include <string>
using namespace std;

class VideoElement{

public:

VideoElement(string n, int r, int d) : name(n), resolution(r), duration(d) {}
~VideoElement() {}

string getName() const{
    return name;
}
void setName(const string &n){
    name = n;
}

int getResolution() const{
    return resolution;
}
void setResolution(const int &r){
    resolution = r;
}

int getDuration() const{
    return duration;
}
void setDuration(const int d){
    duration = d;
}

void play() const
{
    cout << "Name ==> " << name << "                    Duration ==> " << duration << " seconds" << endl;
}

private :

string name;
int resolution;
int duration;

};



#endif // VIDEO_ELEMENT_H