#ifndef PHOTO_H
#define PHOTO_H
#include <iostream>
#include <string>
#include <list>
#include <map>
using namespace std;

class Photo{

public:

Photo(int r, string p, bool s, list<string> k) : resolution(r), place(p), star(s), knownPeople(k) {}
~Photo() {}

int getResolution() const{
    return resolution;
}

void setResolution(const int &r){
    resolution = r;
}


string getPlace() const{
    return place;
}

void setPlace(const string &p){
    place = p;
}
 

bool getStar() const{
    return star;
}

void setStar(bool &s){
    star = s;
}


void printPhoto(const Photo &photo, const int &id) const{
    cout << "\n\nfoto" << id << ": " << photo.getResolution() << "  " << photo.getPlace() << "  " << photo.getStar() << "  " << photo.getKnownPeople() << "\n\n" << endl;
}


string getKnownPeople() const
{
    string people;
    for (list<string>::const_iterator it = knownPeople.begin(); it != knownPeople.end(); ++it)
        people += *it + " ";
    return people;
}

private:

int resolution;
string place;
bool star; //se true indica che la foto è tra le preferite
list<string> knownPeople;

};
#endif //PHOTO_H